//
//	Program that accepts two numbers from a user
//	adds them together then outputs the result.
//

#include <iostream>

using namespace std;

//Function prototypes
int readNumber();
void writeAnswer(int sum);

//Main program loop
int main()
{
	int sum = readNumber() + readNumber();
	writeAnswer(sum);

	system("PAUSE");
	return 0;
}