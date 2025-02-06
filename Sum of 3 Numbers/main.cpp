#include <iostream>

using namespace std;
void readNumbers(int &n1,int &n2,int &n3)
{
    cout<<"Pleas enter a number 1 : "<<endl;
    cin>>n1;

    cout<<"Pleas enter a number 2 : "<<endl;
    cin>>n2;

    cout<<"Pleas enter a number 3 : "<<endl;
    cin>>n3;

}

int sumOf3Number(int n1,int n2, int n3)
{

    return n1+n2+n3;
}
void printResults(int total)
{
    cout<<"The total of 3 number is : "<<total<<endl;
}
void printResults(float average)
{
    cout<<"The average of 3 number is : "<<average<<endl;
}

float averageOf3Number(int n1,int n2,int n3)
{
    return (float)sumOf3Number(n1,n2,n3)/3;
}
int main()
{
    int n1,n2,n3;
    readNumbers(n1,n2,n3);
    printResults(sumOf3Number(n1,n2,n3));
    printResults(averageOf3Number(n1,n2,n3));


    return 0;
}
