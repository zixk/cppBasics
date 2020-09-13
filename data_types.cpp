#include <iostream>
using namespace std;

int main(){
	// Declaration of variables
	int a = 0;
	int b = 2;
	int sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	a = 3;
	
	sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	short sh = 0;
	
	long lo = 12;
	
	bool is_true = true;
	
	float fl = 1.43;
	
	double dl = 13.434;
	
	char ch = 'a';
	
	cin.ignore();
	return 0;
}
