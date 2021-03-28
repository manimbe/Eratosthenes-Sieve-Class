#ifndef SIEVE
#define SIEVE

#include <iostream>

class Sieve
{

private:
	
	bool* prime;
	int limit;
	int i = 0;
	int number = 2;

public:
	
//Constructor (generates "index array" with locations of the prime numbers)
	Sieve(int max);

//Sum function (display the sum of each prime number)
	void Sum();
	
//Amount function (display the amount of prime numbers)
	void Amount();
	
//Check function (if the number is in between the established limits, checks if it is a prime number ("1") or not ("0"))
	void Check(int p);

//Destructor (deallocate heap memory)
	~Sieve();
	
};

#endif
