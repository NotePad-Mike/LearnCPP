//
//	Program that accepts two numbers from a user
//	adds them together then outputs the result.
//

#include <iostream>

using namespace std;

//Asks the user for a number and returns it
int readNumber()
{
	int userNum;
	cout << "Please enter a number: ";
	cin >> userNum;

	return userNum;
}

//Accepts the sum of two numbers and outputs it to the user
void writeAnswer(int sum)
{
	cout << "The sum of your numbers is: " << sum << endl;
}

//Main program loop
int main()
{
	int sum = readNumber() + readNumber();
	writeAnswer(sum);

	system("PAUSE");
	return 0;
}