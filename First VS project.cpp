// First VS project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std; 


/*
int function1()
{

	int x = 6;
	return x;
}

int main()
{


	int x2;
	x2 = function1();

	cout << "x2 is " << x2 << endl;

   return 0;
}

int add(int first, int second)
{
	int sol;
	sol = first + second;

	return sol;
}



int main()
{

	cout << "This is an adding calculator. \n" << "Enter Numeral 1 of 2;" << endl;
	int FirstNum;
	cin >> FirstNum;
	while (FirstNum == NULL)
	{
		cout << "Error! Enter an integer." << endl;
		cin >> FirstNum;

	}

	cout << "Enter Numeral 2 of 2;" << endl;
	int SecondNum;
	cin >> SecondNum;
	while (SecondNum == NULL)
	{
		cout << "Error! Enter an integer." << endl;
		cin >> SecondNum;
	}
	int solution = add(FirstNum, SecondNum);
	cout << "The answer is " << solution << endl;
	return 0;
}*/

/*
int main ()
{
	int i = 0, x = 5;
	//i = 3;
	//i += x++;
	//i += ++x;
	cout << i;

	return 0; 
}

int main()
{
	string enter;
	//cin >> enter;
	getline(cin, enter);
	cout << enter;


	return 0;


}

int main()
{
	cout << "Enter number.\n";
	float num;
	cin >> num;
	cout << setprecision(5) << "You entered " << num << endl;

	return 0;
}

int main()
{
	string test = "fuck ";
	string test2 = "this";
	string test3 = test + test2;

	cout << test3;

	return 0;
}

int main()
{
	unsigned bus;
	bus = time(0);

cout << bus;
int bus2 = srand(bus);
cout << "\n " << bus2;
	



	return 0;

}*/

int main()
{
	// Making variables
	
	const float COST_PER_CUBIC_FOOT = 0.23; // 23 cents per cubic foot (cost)
	const float CHARGE_PER_CUBIC_FOOT = 0.5; // 50 cents per cubic foot (sale)
	double length, width, height, volume, cost, charge, profit; 

	cout << "Enter crate's length." << endl; //Ask the user to input the crate's length.  
		cin >> length;

	cout << "Enter crate's width." << endl;//Ask the user to input the crate's width.
		cin >> width;
	
	cout << "Enter crate's height." << endl;//Ask the user to input the crate's height.  
		cin >> height;

	volume = length * width * height;//Calculate the crate's volume.

	cost = volume * COST_PER_CUBIC_FOOT; //Calculate the cost of building the crate.

	charge = volume * CHARGE_PER_CUBIC_FOOT; //Calculate the customer's charge for the crate.  
	
	profit = charge - cost;  //Calculate the profit made from the crate.  
	cout << "\nVolume: " << volume << endl; //Display the crate's volume.
	cout << "Cost: " << cost << endl; //Display the cost of building the crate.
	cout << "Charge: " << charge << endl; //Display the customer's charge for the crate.  
	cout << "Profit: " << profit << endl; //Display the profit made from the crate. 
	cout << "Any other stupid values?\n";
	
		

	return 0;
}