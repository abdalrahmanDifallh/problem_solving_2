#include <iostream>

using namespace std;

int main()
{
    int n=0,sum=0;

    while(n!=-99)
    {
        sum+=n;
        cout<<"Enter number : ";
        cin>>n;
    }
    cout<<"\nsum is : "<<sum;
    return 0;
}
