#include <iostream>

using namespace std;

// Definition of a function
int add(int x, int y);

int main()
{
    int a;
    int b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << a << endl;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << b << endl;
    int c = add(a,b);
	
	return 0;
}