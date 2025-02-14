#include <iostream>

using namespace std;
int readPositiveNumber()
{
    int n;
    do{
        cout<<"Please enter number N : ";
         cin>>n;
    }while(n<0);

    return n;
}
int reverseNumber(int n)
{
    int j=0,temp=0;
       while(n!=0)
    {//123
        j=n%10;//2
        n=n/10;//1
        temp=temp*10+j;//32

    }
    return temp;
}

int main()
{
    cout << "Reverse number is : " <<reverseNumber(readPositiveNumber())<< endl;
    return 0;
}
