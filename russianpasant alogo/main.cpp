#include <iostream>
using namespace std;

unsigned int russianPeasant(unsigned int a, unsigned int b)
{
	int res = 0;

	// While second number doesn't become 1
	while (b > 0)
	{
		// If second number becomes odd, add the first number to result
		if (b & 1)
			res = res + a;

		// Double the first number and halve the second number
		a = a << 1;
		b = b >> 1;
	}
	return res;
}

int main()
{
	cout <<"the result is" <<russianPeasant(20, 4) << endl;
	cout <<"the result is" <<russianPeasant(10, 10) << endl;
	return 0;
}

