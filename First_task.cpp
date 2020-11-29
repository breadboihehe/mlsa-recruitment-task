#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int first_array[1000];
	int second_array[1000];

	int n;
	std::cout << "Enter number of integers in an array" << endl;
	std::cin >> n;

	if ( (n < 1)||(n>1000))
	{	 
		std::cout << "please enter number between 1 and 1000" << endl;
		return 0;
	}
	//taking input for first array
	int i;
	std::cout << "enter first set of numbers" << endl;
	
	for (i=0; i<n; i++)
	{
		std::cin >> first_array[i];
	}

	//taking input for second array
	std::cout << "enter second set of numbers" << endl;
	
	for (i=0; i<n; i++)
	{
		std::cin >> second_array[i];
	}	
	int diff;
	int prev;
	for (i=0; i<n; i++)
	{
		diff = second_array[i] - first_array[i];
		if(i>0)
		  	prev = second_array[i-1] - first_array[i-1];
		if(diff == 0 || prev == 0 || prev == diff )
		{
			if (diff > 0) prev = diff;
		}	
		else 
		{
			std::cout << "No" << endl;
			return 0;		  		
		}
	}	
	std::cout << "Yes" << endl;

 	return 0;	
}
