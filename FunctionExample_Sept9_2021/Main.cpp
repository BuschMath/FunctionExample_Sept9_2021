#include <iostream>

using namespace std;

void Example();

int main()
{
	cout << "In main\n\n";

	char input = 'f';

	cout << "Input t or f: ";
	cin >> input;

	if (input == 't')
	{
		Example();
	}
	else
		cout << "\n\nNot in function\n\n";

	return 0;
}

void Example()
{
	cout << "\n\nIn function" << endl << endl;
}