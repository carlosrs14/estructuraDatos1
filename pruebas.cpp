#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

	// Providing a seed value
	srand(time(NULL));

	// Get a random number
	int random = rand() % 5;

	// Print the random number
	cout<<random<<endl;

	return 1;
}