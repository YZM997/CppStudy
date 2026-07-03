#include<iostream>
using namespace std;
class Date{
private:
    int year,month,day;
public:
    Date(int y,int m,int d):year(y),month(m),day(d){}
    void printDate()const{
        cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;}
};
class Student{
private:
    int id;
    Date birth;
public:
    Student(int sum,int y,int m,int d):id(sum),birth(y,m,d){}
    void showInfo()const{
        cout<<"学号:"<<id<<"生日:";
        birth.printDate();}
};
int main(){
    Student stu(1001,2006,1,1);
    stu.showInfo();
    return 0;
} 