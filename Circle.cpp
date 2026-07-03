#include<iostream>
using namespace std;
class Circle{
private:
    double R;
    const double pi;
public:
    Circle(double R=0,double pi=3.14):pi(pi){
        this->R=R;}
    void setR(double R){
        this->R=R;}
    double getR()const{
        return R;}
    double getArea()const{
        return pi*R*R;
    }    
};
int main(){
    Circle c1(5);
    cout<<"面积为："<<c1.getArea()<<endl;
    c1.setR(10);
    cout<<"面积为："<<c1.getArea()<<endl;
    const Circle c2(2);
    cout<<"半径为："<<c2.getR()<<endl;
    cout<<"面积为："<<c2.getArea()<<endl;
    return 0;
}