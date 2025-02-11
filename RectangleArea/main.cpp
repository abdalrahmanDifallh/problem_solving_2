#include <iostream>
#include <string>
#include <cmath>




using namespace std;
void readNumbers(int &a,int &b)
{
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
}
void readDigonal(int &d)
{
    cout<<"Enter value of Diagonal : ";
    cin>>d;

}
float calculateRectangleArea(float a,float b)
{
    return a*b;
}
float calculateRectangleAreaByDiagonalAndSide(float a,float d)
{
    float x = a*sqrt(pow(d,2)-pow(a,2));
    return  x;
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
    cout<<"now we will calculate rectangle by diagonal and side , so please enter diagonal "<<endl;
    int diagonal;
    readDigonal(diagonal);
    printResult(calculateRectangleAreaByDiagonalAndSide(a,diagonal));

    return 0;
}
