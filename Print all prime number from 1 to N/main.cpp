#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter number N : ";
    cin>>n;
    return n;
}
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void printAllPrimeNumberFrom_1To_N(int n)
{
    for(int i=1;i<=n;i++)//4
    {
           if(isPrime(i))
            cout<<i<<" ";
    }
}

int main()
{

    printAllPrimeNumberFrom_1To_N(readNumber());
    return 0;
}
