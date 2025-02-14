#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter number N : ";
    cin>>n;
    return n;
}
bool isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
           {
            sum+=i;
           }
    }
    if(n==sum)
        return true;
    else return false;
}
void printAllNumberPerfectFrom_1To_N(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(isPerfect(i))
            cout<<i<<" ";
    }
}

int main()
{
   printAllNumberPerfectFrom_1To_N(readNumber());
    return 0;
}
