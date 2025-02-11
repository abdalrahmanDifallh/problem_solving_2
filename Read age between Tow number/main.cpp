#include <iostream>

using namespace std;
void readTwoNumbers(int &age,int &firstNumber,int &secondNumber)
{
    cout<<"Enter the first number : ";
    cin>>firstNumber;
    cout<<"Enter the first number : ";
    cin>>secondNumber;
     cout<<"Please Enter Your age :";
    cin>>age;
}
void readAge(int age,int firstNumber,int secondNumber)
{


    while(age<firstNumber||age>secondNumber){
    cout<<"Please Enter Your age"<<endl;
    cin>>age;
    }
    cout<<"success";

}


int main()
{
    int age,firstNumber,secondNumber;
    readTwoNumbers(age,firstNumber,secondNumber);
    readAge(age,firstNumber,secondNumber);
    return 0;
}
