#include <iostream>
//1122233

//digit 1 is frequnce 2
//digit 2 is frequnce 3
//digit 3 is frequnce 2
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
int digitFrequncy(int a,int b)
                 //12221 , 2
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
 void digitFrequncyCase2(int number)//112212
{
    cout<<endl;
    int sum=0;
   for(int i=0;i<10;i++){
    sum=digitFrequncy(number,i);
    if(sum!=0)
    cout<<"Digit "<<i<<" Frequency is "<<sum<<" Time(s)"<<endl;
    }

}
int main()
{
    digitFrequncyCase2(readNumber());
    return 0;
}
