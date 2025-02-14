#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter number N : ";
    cin>>n;
    return n;
}
void printDigitsReversedOrder(int n)
{
    cout<<"\n\nThe Digits Reversed Order is "<<endl;
    while(n!=0)
    {
       cout<<n%10<<endl;
        n=n/10;

    }
}
int main()
{
    printDigitsReversedOrder(readNumber());
    return 0;
}
