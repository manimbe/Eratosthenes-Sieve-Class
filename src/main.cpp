#include <iostream>

class Sieve
{

private:
	
	int* prime;
	int limit;
	int i = 0;
	int number = 2;

public:
	
//Constructor (generates "index array" with locations of the prime numbers)
	Sieve(int max)
		: limit(max), prime(new int[limit])
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
	void Sum(){
		
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
	void Amount(){
		
		i = 0;
		unsigned int amount = 0;
		
		while(i < limit){
			amount += prime[i];
			i++;
		}
		
		std::cout << amount << std::endl;
		
	}
	
//Check function (if the number is in between the established limits, checks if it is a prime number ("1") or not ("0"))
	void Check(int p){
		p -= 2;
		int check;
		prime[p] == 1 ? check = 1: check = 0;
		
		std::cout << check << std::endl;
		
	}

//Destructor (deallocate heap memory)
	~Sieve()
	{
		delete[] prime;	
	}	
	
};

int main(){
	
Sieve a(10);
a.Sum(); //what is the result of adding up each prime number (of the established range)
a.Amount(); //how many prime numbers there are in between the established range (1-10 in this case)
a.Check(7); //is "7" a prime number?
	
	return 0;
}
