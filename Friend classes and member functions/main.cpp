#include <iostream>
using namespace std;

// forward decalaration
class Complex; // we are telling that there will be a class Complex later

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); // declaration only bcz the Complex class is not defined yet
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring functions as friend
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2); // declaration with friend keyword
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2);

    // Alternate: declare the entire class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}
