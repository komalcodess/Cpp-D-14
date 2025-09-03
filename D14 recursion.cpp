#include <iostream>

using namespace std;
void greet(){
cout << "A very good morning to all of you"<<endl;
greet();          //recursion
}
int main()
{
    greet();
    return 0;
}
