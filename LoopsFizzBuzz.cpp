#include <iostream>

//Exercise 2:
//Using a for loop, iterate through numbers 0 to 100.
//- For multiples of 3 print “Fizz”
//- For multiples of 5 print “Buzz”
//- For multiples of 3 and 5 print “FizzBuzz”
//- Otherwise print the number.
//Note, you will need to use the modulus operator (%)


int main()
{
	int a;
	for (a = 0; a <= 100; a++)
	{
		if (a % 3 && a % 5 == 0)

		{
			std::cout << "FizzBuzz" << std::endl;
			continue;
		}
		if (a % 3 ==0)
		{
			std::cout << "Fizz" << std::endl;
			continue;
		}
		if (a % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
			continue;
		}
		std::cout << a << std::endl;
	}
	system("pause");
	return 0;
}