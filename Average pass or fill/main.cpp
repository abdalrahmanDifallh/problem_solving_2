#include <iostream>

using namespace std;
void readMark(int &mark1,int &mark2,int &mark3)
{

    cout<<"Please enter  mark 1: ";
    cin>>mark1;
     cout<<"Please enter  mark 2: ";
    cin>>mark2;
     cout<<"Please enter  mark 3: ";
    cin>>mark3;

}
int sumOf3marks(int mark1,int mark2,int mark3)
{
    return mark1+mark2+mark3;
}
int calculatAverage(int mark1,int mark2,int mark3)
{
    return (float)sumOf3marks(mark1,mark2,mark3)/3;

}

void checkTheResult(int mark1,int mark2,int mark3)
{
   if(calculatAverage(mark1,mark2,mark3)>=50)
    cout<<"your average passed";
   else cout<<"your average failed";
}
int main()
{
    int mark1,mark2,mark3;
    readMark(mark1,mark2,mark3);
    checkTheResult(mark1,mark2,mark3);
    return 0;
}
