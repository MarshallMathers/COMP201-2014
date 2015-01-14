#include <iostream>
using namespace std;
int main()
{
	int count = 100;
	
	for (int i = 0; i < count; i++)
	{
		if (i % 3 == 0)
			cout << "fizz" << endl;
		if (i % 5 == 0)
			cout << "buzz" << endl;
		if (i % 3 == 0 && i % 5 == 0)
			cout << "Fizzbuzz" << endl;
		else 
			cout << i << endl;

	}
	return 0;
	
	
}