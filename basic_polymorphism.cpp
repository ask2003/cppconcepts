#include <iostream>

using namespace std;

class shape{
    public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle:public shape{
    private:
    float len;
    float bre;
    
    public:
    Rectangle(float l=1,float b=1){
        len = l;
        bre = b;
    }
    
    float area(){
        return len*bre;
    }
    
    float perimeter(){
        return (2*(len+bre));
    }
};

class circle:public shape{
    private:
    float rad;
    
    public:
    circle(float r=1){
        rad = r;
    }
    
    float area(){
        return 3.1415f*rad*rad;
    }
    
    float perimeter(){
        return 3.1415f*2*rad;
    }
};


int main()
{
    cout<<"Enter the choice of shape: ";
    cout<<"\n 1. RECTANGLE";
    cout<<"\n 2. CIRCLE\n";
    int choice;
    cin>>choice;
    
    while(choice!=1 && choice!=2){
        cout<<"\nInvalid choice. Enter the number again. \n";
        cin>>choice;
    }
    
    if(choice==1){
        cout<<"\nYOU HAVE ENTERED RECTANGLE\n";
        
        cout<<"Enter the length: "<<endl;
        cin.ignore();
        float len1;
        cin>>len1;
        
        while(len1<1){
            cout<<"\nINVALID LENGTH. LENGTH MUST BE >= 1. ENTER AGAIN: \n";
            cin>>len1;
        }
        
        cout<<"Enter the breadth: "<<endl;
        float len2;
        cin>>len2;
        
        
        while(len2<1){
            cout<<"\nINVALID BREDTH. BREDTH MUST BE >= 1. ENTER AGAIN: \n";
            cin>>len2;
        }
        
        shape *p = new Rectangle(len1,len2);
        
        cout<<"\n=====xxxxx=====\n";
        cout<<"Length: "<<len1<<endl; 
        cout<<"Bredth: "<<len2<<endl;
        cout<<"Area: "<<p->area()<<endl;
        cout<<"Perimeter: "<<p->perimeter()<<endl;
        delete p;
    }
    else{
        cout<<"\nYOU HAVE ENTERED CIRCLE\n";
        
        cout<<"Enter the Radius: "<<endl;
        cin.ignore();
        float rad1;
        cin>>rad1;
        
        while(rad1<1){
            cout<<"\nINVALID RADIUS. RADIUS MUST BE >= 1. ENTER AGAIN: \n";
            cin>>rad1;
        }
        
        shape *p = new circle(rad1);
        
        cout<<"\n=====xxxxx=====\n";
        cout<<"RADIUS: "<<rad1<<endl; 
        cout<<"Area: "<<p->area()<<endl;
        cout<<"Circumference: "<<p->perimeter()<<endl;
        delete p;
    }
    
    
    return 0;
}