#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    do{
        cout<<"Enter positive number : ";
        cin>>n;
    }while(n<0);
    return n;
}
int readDigit()
{
    int n;
    do{
        cout<<"Enter a digit : ";
        cin>>n;
    }while(n<0);
    return n;
}
int digitFrequncy(int b,int a)
{
   int sumOfDigit=0;
    while(a>0)
    {
       if(a%10==b)
        sumOfDigit++;
       a=a/10;
    }
    return sumOfDigit;
}

int main()
{

   int sum = digitFrequncy(readDigit(),readNumber());
   cout<<"number digits is "<< sum<<endl;
    return 0;
}
