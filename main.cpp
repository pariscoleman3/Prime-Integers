// Paris Coleman J00964495 11/8/22
// Assignment page 264
#include <iostream>
int main()
{
	const int primes[] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	int chose {};
	while (chose < 1 || chose > 1000) 
  {
		std::cout << "Enter a positive integer between 1 and 1000: ";
		std::cin >> chose;}
	bool isp {true};
	for (const int p : primes)
		if (p != chose)
			if ((chose % p) == 0) {
				if (isp)
					std::cout << chose << " is not prime\n";
				std::cout << "It is divisible by " << p << '\n';
				isp = false;
			}
	if (isp)
		std::cout << chose << " is prime\n";
  
  return 0;
}
