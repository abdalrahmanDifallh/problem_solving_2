#include <iostream>

using namespace std;
int readNumber()
{
    int number;
    cout<<"Pleas enter a number : ";
    cin>>number;
    return number;

}

float calculatHalfNumber(int num)
{
    return (float)num/2;
}
void printResult(int num)
{
   string result = "Half of " + to_string(num) + " is : " + to_string(calculatHalfNumber(num));
    cout<<result<<endl;
}
int main()
{
    printResult(readNumber());
    return 0;
}
