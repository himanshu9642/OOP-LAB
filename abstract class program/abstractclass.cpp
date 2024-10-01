#include <iostream>
using namespace std;
class shape {
protected:
    int shape_length;
    int shape_width;
public:
void setlength(int l){
     shape_length =l;
}
void setwidth(int w){
    shape_width=w;
}     
int getlength(){
    return shape_length;
}
int getwidth(){
    return shape_width;
}
virtual int getperimeter()=0;//pure virtual function
};
class square:public shape{
    public:
    int getperimeter(){    
        return 4*getwidth();
}
friend int circleperimeter(square); 
};
int circleperimeter(square s){
    return 2*3.14*s.getwidth();
}
class Rectangle:public shape{
    public:
    int getperimeter(){
        return 2*(getlength()+getwidth());
    }
};
int main(){
    Rectangle r;
    square s;
    r.setlength(10);
    r.setwidth(20);
    s.setwidth(20);
    cout<<"Perimeter of rectangle:"<<r.getperimeter()<<endl;
    cout<<"Perimeter of square:"<<s.getperimeter()<<endl;
    cout<<"Perimeter of circle(using circleperimeter function):"<<circleperimeter(s)<<endl;
    return 0;
}