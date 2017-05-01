#include <iostream>

using namespace std;

// Definition of a function
int add(int x, int y);

int main()
{
    int a;
    int b;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << a << endl;
    cout << "Enter another number: " << endl;
    cin >> b;
    cout << b << endl;
    cout << add(a,b);
	
	return 0;
}