#include <iostream>

using namespace std;

enum enNumberType { Odd = 1 , Even = 2 }  ;
string readName()
{
    string name;
    cout<<"Enter your name please : ";
    cin>>name;
    return name;
}
void printName(string name)
{
    cout<<"Your name is : "<<name;
}
int readNumber()
{
    int number;
    cout<<"Pleas enter a number : "  ;
    cin>>number;
    return number;
}
enNumberType checkNumberType(int number)
{
    if (number%2==0)
        return enNumberType ::Even;
    else return enNumberType::Odd;
}
void printNumberType(enNumberType numberType)
{
    if(numberType==enNumberType::Even)
        cout<<"\n Number is Even"<<endl;
        else cout<<"\n Number is Odd"<<endl;
}

int main()
{
   // printName(readName());
     printNumberType(checkNumberType(readNumber()));
    return 0;
}
