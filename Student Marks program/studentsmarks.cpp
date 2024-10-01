#include <iostream>
using namespace std;
class marks{
    int rno;
    int percentage;
    public:
        marks(){
            rno=0;
            percentage=0;
        }
        marks(int r, int p){
            rno= r;
            percentage= p;
        }
        void displayMarks(){
            cout << "Roll no: "<<rno<<endl;
            cout << "Percentage: "<<percentage<<endl;
        }
};

class student{
    marks objM;
    string name;
    public:
        void getName(){
            cout<<"Enter name: ",cin>>name;
        }
        void displayResult(marks obj){
            objM=obj;
            cout<<"Name: "<<name<<endl;;
            objM.displayMarks();
        }

};
int main(){
    marks mks[2]={
        marks(100,95),
        marks(101,85)
        };
    student stds[5];
    for (int i=0;i<2;i++){
        stds[i].getName();
        stds[i].displayResult(mks[i]);
    }
}