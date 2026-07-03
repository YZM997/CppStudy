#include<iostream>
#include<cstring>
using namespace std;
class Student{
private:
    char name[20];
    float score;
    static float sum;
public:
    Student(char* n,float s){
        strcpy(name,n);
        score=s;
        sum+=score;}
    static float getSum(){
        return sum;
    }
    static float getAvg(int num){
        return sum/num;}
};
float Student::sum=0;
int main(){
    Student s1("张三",60);
    Student s2("李四",70);
    Student s3("王五",78);
    cout<<"总分:"<<Student::getSum()<<endl;
    cout<<"平均分："<<Student::getAvg(3)<<endl;
}