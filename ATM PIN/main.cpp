#include <iostream>

using namespace std;
bool login(int n)
{
    if(n==123)
        return true;
    else return false;
}
void checkNumber()
{
    int n;
    while(!login(n))
    {
        cout<<"Pleas enter PIN : ";
        cin>>n;
        cout<<"wrong PIN code "<<endl;
            system("color 4F");

    }
    cout<<"success code ! "<<endl;
    system("color 2F");
}
int main()
{
     checkNumber();
    return 0;
}
