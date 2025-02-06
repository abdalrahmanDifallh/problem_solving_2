#include <iostream>

using namespace std;
int readMark()
{
    short mark;
    cout<<"Please enter a mark : ";
    cin>>mark;
    return mark;
}
void checkTheResult(short mark)
{
    if(mark>=50)
        cout<< "Your passed";
    else cout<< "Your failld";
}
int main()
{
    checkTheResult(readMark());
    return 0;
}
