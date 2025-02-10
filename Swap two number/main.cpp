#include <iostream>

using namespace std;
void readTwoNumber(int &a,int &b)
{
    cout<<"Please enter first number : ";
    cin>>a;
    cout<<"Please enter second number : ";
    cin>>b;

}
void swapTwoNumber(int &a,int &b)
{
      int temp ;
      temp = a ;
      a = b;
      b = temp;

}
void printValues(int a , int b)
{
    cout<<"The first  Number  is : "<<a<<endl;
    cout<<"The second Number  is : "<<b<<endl<<endl;
}
int main()
{
    int a , b;
    readTwoNumber(a,b);
    cout<<"\nbefore swap  "<<endl;
    printValues(a,b);
    swapTwoNumber(a,b);
    cout<<"after  swap  "<<endl;
    printValues(a,b);

    return 0;
}
