#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Please enter N number : ";
    cin>>n;
    return n;
}
int sumOddNumberFrom1ToN(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            sum+=i;
    }
    return sum;
}
void printResult(int sum){
 cout <<"Sum of number odd is : "<<sum<<endl;

}
int main()
{
    printResult(sumOddNumberFrom1ToN(readNumber()));
    return 0;
}
