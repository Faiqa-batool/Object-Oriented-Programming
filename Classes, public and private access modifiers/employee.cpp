#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); //decalaration
        void getData(){ //function definition
            cout<< "the value of a is "<< a<<endl;
            cout<< "the value of b is "<< b<<endl;
            cout<< "the value of c is "<< c<<endl;
            cout<< "the value of d is "<< d<<endl;
            cout<< "the value of e is "<< e<<endl;
        }
};
// function definition outside the class
void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee Faiqa;
    Faiqa.d = 34;
    Faiqa.e = 35;
    Faiqa.setData(1,2,4);
    Faiqa.getData();
    return 0;
}