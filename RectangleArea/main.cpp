#include <iostream>

using namespace std;
void readNumbers(int &a,int &b)
{
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
}
float calculateRectangleArea(float a,float b)
{
    return a*b;
}
void printResult(float result)
{
    cout<<"The rectangle area is : "<<result<<endl;
}
 int main()
{
    int a,b;
    readNumbers(a,b);
    printResult(calculateRectangleArea(a,b));

    return 0;
}
