#include <iostream>

using namespace std;
void printHeder()
{
    cout<<endl;
    cout<<"\t\t\t\t\t Multiplication Table form 1 to 100 \n\n"<<endl;
    for(int i=1; i<=10; i++)
        cout<<"\t"<<i;
    cout<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
}
void printTable()
{
    for(int i=1; i<=10; i++)//colom1
    {
        if(i==10)
                    cout<<i<<" |";
       else cout<<i<<"  |";
        for(int j=1; j<=10; j++)//row
        {
            cout<<"\t"<<i*j;
        }
        cout<<endl;
    }
}
int main()
{

    printHeder();
    printTable();
    return 0;
}
