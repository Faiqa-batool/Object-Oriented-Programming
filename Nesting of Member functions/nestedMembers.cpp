#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void); // for input
    void chk_bin(void); //for checking binary format
    void ones_comp(void); // for one's compliment
    void display(void); //for display
};
void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            exit(0);
        }
    }
    cout << "Correct binary format!" << endl;
}
void binary :: ones_comp(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){
    cout<<"Displaying your binary number:"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<< s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_comp();
    b.display();
    return 0;
}