#include <iostream>
#include "Sieve.h"

//Constructor (generates "index array" with locations of the prime numbers)
Sieve::Sieve(int max)
	: limit(max), prime(new bool[limit])
{
	limit--;
	
	for(int i = 0; i < limit; i++){
		prime[i] = 1;
	}		
		
	while(i < limit){
		if(prime[i] == 1){
			int times = (limit + 1) / number;
			int support = i;
			while(times > 1){
				support += number;
				prime[support] = 0;
				times--;
			}
		}
		i++;
		number++;
	}
}

//Sum function (display the sum of each prime number)
void Sieve::Sum(){
		
	i = 0;
	number = 2;
	unsigned long long int sum = 0;
		
	while(i < limit){
		sum += prime[i]*number;
		i++;
		number++;
	}	
	std::cout << sum << std::endl;		
}	
	
//Amount function (display the amount of prime numbers)
void Sieve::Amount(){
		
	i = 0;
	unsigned int amount = 0;
		
	while(i < limit){
		amount += prime[i];
		i++;
	}	
	std::cout << amount << std::endl;		
}
	
//Check function (if the number is in between the established limits, checks if it is a prime number ("1") or not ("0"))
void Sieve::Check(int p){
	p -= 2;
	int check;
	prime[p] == 1 ? check = 1: check = 0;
	std::cout << check << std::endl;	
}

//Destructor (deallocate heap memory)
Sieve::~Sieve()
{
	delete[] prime;	
}
