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
               cout<<i<<" ";
            sum+=i;
           }
    }
    cout<<endl;
    if(n==sum)
        return true;
    else return false;
}
void prinResult()
{
    if(isPerfect(readNumber()))
        cout<<"The Number is Perfect"<<endl;
    else
        cout<<"The Number is not Perfect"<<endl;

}
int main()
{
    prinResult();
    return 0;
}
