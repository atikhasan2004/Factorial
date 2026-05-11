#include<iostream>
using namespace std;
int main()
{
    int i,num,fact=1;
    cout <<"Enter an integer number: ";
    cin >> num;
    for (i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout << "The factorial of "<<num<<" is: "<<fact<<endl;
    return 0;
}

