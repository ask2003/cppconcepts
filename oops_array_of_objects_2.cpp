/*
Write a program to print the roll number and average marks of 8 students 
in three subjects (each out of 100). The marks are entered by the user and 
the roll numbers are automatically assigned.
*/

#include <iostream>

using namespace std;

class student{
    private:
    int roll;
    int marks[3];
    float avg;
    
    public:
    student(int r=1){
        roll=r;
    }
    
    void setroll(int roll1){
        roll=roll1;
    }
    
    void setmark1(int mark){
        marks[0]=mark;
    }
    void setmark2(int mark){
        marks[1]=mark;
    }
    void setmark3(int mark){
        marks[2]=mark;
    }
    
    int getroll() const {
        return roll;
    }
    
    void getmarks() const {
        for(int i=0;i<3;i++){
            cout<<marks[i]<<" ";
        }
    }
    
    float getavg(){
        int sum=0;
        
        for (int i = 0; i < 3; i++) {
            sum+=marks[i];
        }
        avg=(float)(sum/3.0f);
        return avg;
    }
    
    bool isvalidmark(int mark){
        return (mark>=0&&mark<=100);
    }
    
    bool isvalidroll(int roll){
        return (roll>=1);
    }
};

int main()
{
    const int numofstu=5;
    student st[numofstu];
    int count=0;
    
    for(int i=0;i<numofstu;i++){
        cout<<"Enter roll number of "<<i+1<<" student: "<<endl;
        int roll1;
        cin>>roll1;
        
        while(!st[i].isvalidroll(roll1)){
            cout<<"Roll number entered is invalid. Enter again: "<<endl;
            cin>>roll1;
        }
        
        st[i].setroll(roll1);
        
        int marks[3];
        
        for (int j = 0; j < 3; j++) {
            cout << "Enter sub. " << j + 1 << " marks: " << endl;
            cin >> marks[j];

            while (!st[i].isvalidmark(marks[j])) {
                cout << "Invalid mark. Enter again: " << endl;
                cin >> marks[j];
            }
        }    
        st[i].setmark1(marks[0]);
        st[i].setmark2(marks[1]);
        st[i].setmark3(marks[2]);        
    }
    cout<<"ROLL NUMBER  \t \t \t MARKS OBTAINED \t \t \t AVERAGE"<<endl;
    for(int i=0;i<numofstu;i++){
        cout<<st[i].getroll()<<"\t \t \t";
        st[i].getmarks();
        cout<<"\t \t \t"<<st[i].getavg()<<endl;
    }
    

    return 0;
}
