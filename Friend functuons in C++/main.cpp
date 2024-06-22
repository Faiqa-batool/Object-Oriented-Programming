#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // below function is not part of the class, but allowed to access private data members
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a +o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();
    
    sum = sumComplex(c1, c2);  //it cannot be called using object of the class
    sum.printNumber();

    return 0;
}