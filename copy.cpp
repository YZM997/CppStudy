#include<iostream>
#include<cstring>
using namespace std;
class Point{
private:
    double x,y;
    char* name;
public:
    Point(char* n,double a=0,double b=0){
        x=a;
        y=b;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        cout<<"普通构造执行"<<endl;}
    Point(Point &p){
        x=p.x;
        y=p.y;
        name=new char[strlen(p.name)+1];
        strcpy(name,p.name);
        cout<<"拷贝构造执行"<<endl;}
    ~Point(){
        delete []name;
        cout<<"析构函数执行"<<endl;}
    void show()const{
        cout<<name<<"("<<x<<","<<y<<")"<<endl;}
};
int main(){
    Point p1("A点",1,3);
    Point p2=p1;
    p1.show();
    p2.show();
}