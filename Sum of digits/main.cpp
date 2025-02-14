#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter number N : ";
    cin>>n;
    return n;
}
void printSumOfDigits(int n)
{
    int sum=0;
    cout<<"\nThe sum of Digits is ";
    while(n!=0)
    {
       //cout<<n%10<<endl;
       sum=sum+(n%10);
        n=n/10;
    }
    cout<<sum<<endl;

}
int main()
{
   printSumOfDigits(readNumber());
    return 0;
}
