#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // declaration
public:
    void setData(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++; // it will shared with all objects, will take memory with class not with every object
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)  //handles static members only
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // outside the class
// can set value here as well
// int Employee :: count=100;

int main()
{
    Employee Faiqa, Maham, Sarah;
    Faiqa.setData();
    Faiqa.getData();

    Employee::getCount();  //static function/method

    Maham.setData();
    Maham.getData();

    Employee::getCount();

    Sarah.setData();
    Sarah.getData();
    
    Employee::getCount();

    return 0;
}