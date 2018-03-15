//
//	Program that accepts two numbers from a user
//	adds them together then outputs the result.
//

#include <iostream>
#include "Functions.h"

using namespace std;

//Main program loop
int main()
{
	int sum = readNumber() + readNumber();
	writeAnswer(sum);

	system("PAUSE");
	return 0;
}