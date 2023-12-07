#include <iostream>
#include <fstream>
#include <string>
/*
Write a program to store and retrieve list of item in a file using serialization
class items should have: 1. Name 2. Price 3. Quantity
*/
//student exercise 14

using namespace std;
class items{
    protected:
    string name;
    int price;
    int quantity;
    
    public:
    items(string name1="null",int price1=0,int quantity1=0){
        name=name1;
        price=price1;
        quantity=quantity1;
    }
    
    void setname(string itemName) {
        name = itemName;
    }
    
    void setprice(int price1){
        price=price1;
    }
    
    void setquantity(int quantity1){
        quantity=quantity1;
    }
    
    string getname(){
        return name;
    }
    
    int getprice(){
        return price;
    }
    
    int getquantity(){
        return quantity;
    }
    
    friend ofstream & operator<<(ofstream &ofs,items &i1);
    friend ifstream & operator>>(ifstream &ifs,items &i1);
};
ofstream & operator<<(ofstream &ofs,items &i1){
    ofs<<i1.name<<endl;
    ofs<<i1.price<<endl;
    ofs<<i1.quantity<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,items &i1){
    ifs>>i1.name>>i1.price>>i1.quantity;
    return ifs;
}

int main()
{
    int num_of_items=3;
    items i1[num_of_items];
    ofstream ofs("Items.txt", ios::app);  
    
    for(int i=0;i<num_of_items;i++){
        cout<<"Enter the item name: "<<endl;
        string name;
        getline(cin,name);
        i1[i].setname(name);
        
        cout<<"Enter the price of the item: "<<endl;
        int price;
        cin>>price;
        i1[i].setprice(price);
        
        cout<<"Enter the quantity of the item: "<<endl;
        int quantity;
        cin>>quantity;
        i1[i].setquantity(quantity);
        
        cin.ignore();
        
        cout<<"\n======xxxxxxx======xxxxxxx======xxxxxxx======xxxxxxx======\n";
        
        ofs<<i1[i];
        
    }
    ofs.close();
    
    ifstream ifs("Items.txt");
    
    for(int i=0;i<num_of_items;i++){
        ifs>>i1[i];
        
        cout<<"Name of item "<<i+1<<": "<<i1[i].getname()<<endl;
        cout<<"Price of item "<<i+1<<": "<<i1[i].getprice()<<endl;
        cout<<"Quantity of item "<<i+1<<": "<<i1[i].getquantity()<<endl;
        cout<<"\n======xxxxxxx======xxxxxxx======xxxxxxx======xxxxxxx======\n";
    }
    ifs.close();
    
    return 0;
}
