#include<iostream>
using namespace std;
class Person{
    string name;
    public:
    void read(){
        cout<<"Enter Name: ";
        cin>>name;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
    }
};
class Sport:public Person{
    int m=50;
    public:
    void display(){
        cout<<m<<endl;
        Person::display();
    }
};
class Student:public Person{
    public:
    void display(){
        Person::display();
    }
};
int main(){
    Sport sp;
    Student st;
    sp.read();
    st.read(); 
    sp.display();
    st.display();
    return 0;
}