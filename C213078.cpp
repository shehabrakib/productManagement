#include<bits/stdc++.h>
using namespace std;

class Product{
public:
    int product_id;
    string product_category,product_name;
    void read_product();
    void write_product();
    
};
class soldProduct : public Product
{
public:
    int customer_id, price;
    void read_sold_product();
    void write_sold_product();
};
class boughtProduct : public Product
{
public:
    int buyer_id,price;
    string buyer_name;

    void read_bought_product();
    void write_bought_product();
}; 
void Product :: read_product()
{
    ifstream in("productIN.txt");
    in>>product_id;
    in.ignore();
    getline(in,product_category);
    getline(in,product_name);
    in.close();
}
void Product :: write_product()
{
    ofstream out("productOut.txt");
    out<<"ProductID : "<<product_id<<endl;
    out<<"Product Category : "<<product_category<<endl;
    out<<"Product Name : "<<product_name<<endl;
}
void soldProduct :: read_sold_product()
{
    ifstream in("customerIN.txt");
    in>>customer_id>>price;
    in.close();
}
void soldProduct :: write_sold_product()
{
    ofstream out("customerOut.txt");
    out<<"ProductID : "<<product_id<<endl;
    out<<"Product Category : "<<product_category<<endl;
    out<<"Product Name : "<<product_name<<endl;
    out<<"CustomerID : "<<customer_id<<endl;
    out<<"Selling Price : "<<price<<" $";
}
void boughtProduct :: read_bought_product()
{
    ifstream in("buyerIN.txt");
    in>>buyer_id>>price;
    in.ignore();
    getline(in,buyer_name);
    in.close();
}
void boughtProduct :: write_bought_product()
{
    ofstream out("buyerOut.txt");
    out<<"ProductID : "<<product_id<<endl;
    out<<"Product Category : "<<product_category<<endl;
    out<<"Product Name : "<<product_name<<endl;
    out<<"BuyerID : "<<buyer_id<<endl;
    out<<"Buyer Name : "<<buyer_name<<endl;
    out<<"Buying Price : "<<price<<" $"<<endl;
}


 
int main()
{
    Product A;
    A.read_product();
    A.write_product();
    soldProduct B;
    B.read_sold_product();
    B.read_product();
    B.write_sold_product();
    boughtProduct C;
    C.read_bought_product();
    C.read_product();
    C.write_bought_product();
    return 0;
}