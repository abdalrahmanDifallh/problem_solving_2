#include <iostream>

using namespace std;
int  readPositiveNumber()
{
    int n;
    do{
        cout<<"Please Enter Positive Number : ";
        cin>>n;
    }while(n<=0);

}
int factorialOfN(int n)
{
    int f = 1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{

    int f = factorialOfN(readPositiveNumber());
    cout<<"The factorial is : "<<f;
    return 0;
}
