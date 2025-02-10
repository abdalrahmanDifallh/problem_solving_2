#include <iostream>

using namespace std;
void readPositiveNumber(string message,int &number)
{
    do
    {
        cout<<message;
        cin>>number;
    }
    while(number<=0);

}
void readTheValue(int &days, int &hours, int &minutes, int &seconds)
{
       readPositiveNumber("Pleas enter number of days : ",days);
     readPositiveNumber("Pleas enter number of hours : ",hours);
       readPositiveNumber("Pleas enter number of minutes : ",minutes);
       readPositiveNumber("Pleas enter number of seconds : ",seconds);
}
float celculatNumberOfSecinds( int days,int hours,int minutes,int seconds)
{
     return (days*24*60*60)+(hours*60*60)+(minutes*60)+seconds;
}
void printResult(float number)
{
    cout<<"Number of total Second is : "<<number;
}
int main()
{
    int days,hours,minutes,seconds;
    readTheValue(days,hours,minutes,seconds);
    printResult(celculatNumberOfSecinds(days,hours,minutes,seconds));
    return 0;
}
