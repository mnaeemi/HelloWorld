#include <iostream>

using namespace std;

// Definition of a function
int add(int x, int y);

int main()
{
    cout << "This is a test program" << endl;
    int a;
    int b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << a << endl;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << b << endl;
    cout << add(a,b);
	
	return 0;
}