#include <iostream>

using namespace std;

struct stInfo{

 short age;
 bool driverLicense;

};
stInfo readInfo()
{
    stInfo info;
    cout<<"Pleas enter your age : ";
    cin>>info.age;
    cout<<"Do you have a Driver License ? ";
    cin>>info.driverLicense;
    return info;
}
bool isAccepted(stInfo info)
{
    if (info.age>21 && info.driverLicense == true)
        return true;
    else return false;
}
void printResult(stInfo info)
{
    if(isAccepted(info)==true)
        cout<<"Accepted"<<endl;
    else cout<<"Not accepted"<<endl;
}


int main()
{
    printResult(readInfo());
    return 0;
}
