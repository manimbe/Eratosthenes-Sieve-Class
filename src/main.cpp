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

//Destructor (deallocate heap memory)
	~Sieve()
	{
		delete[] prime;	
	}	
	
};

int main(){
	
Sieve a(10);
a.Sum();
	
	return 0;
}
