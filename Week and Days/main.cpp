#include <iostream>

using namespace std;
int readNumber()
{
    int n;
    cout<<"Pleas enter number of hours : ";
    cin>>n;
    return n;
}
float calculatHoursToDays(float numberOfHoues)
{
    float days;
    days = numberOfHoues/24;
    return days;
}
float calculatDaysToWeek(float numberOfDay)
{
    float week;
    week = calculatHoursToDays(numberOfDay)/7;
    return week;
}
void printResult(float number)
{
    cout<<"Number of Days is : "<<calculatHoursToDays(number)<<endl;
    cout<<"Number of Week is : "<<calculatDaysToWeek(number)<<endl;
}
int main()
{
    printResult(readNumber());
    return 0;
}
