#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter N number : ";
    cin>>n;
    return n;
}
void printNumbersFrom1toN_usingForLoop(int n)
{
    for(int i=0; i<=n; i++)
        cout<<i<<" ";
}
void printNumbersFrom1toN_usingWhileLoop(int n)
{
    int i=0;
    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }
}
void printNumbersFrom1toN_usingDoWhileLoop(int n)
{
    int i=0;
    do
    {
        cout<<i<<" ";
        i++;
    }
    while(i<=n);
}

int main()
{
    int n = readNumber();
    printNumbersFrom1toN_usingForLoop(n);
    cout<<endl;
    printNumbersFrom1toN_usingWhileLoop(n);
    cout<<endl;
    printNumbersFrom1toN_usingDoWhileLoop(n);
    return 0;
}
