#include "Sieve.cpp"

//This file is just for seeing how the class works

int main(){
	
Sieve example(10);
example.Sum(); //what is the result of adding up each prime number? (from the established range)
example.Amount(); //how many prime numbers there are in between the established range? (1-10 in this case)
example.Check(7); //is "7" a prime number? ("7" must be in the established range)
	
	return 0;
}
