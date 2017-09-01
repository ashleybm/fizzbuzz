/*
Ashley Baker
Implementation of fizzbuzz
Description: Prints Numbers 1-100 unless they_
are multiples of 3 or 5. If multiple of 3 print_
fizz, if multiple of 5 print buzz, if multiple_
of both, print fizzbuzz.*/

#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 100; i++) {
		if (i % 3 == 0)
			cout << "fizz";
		else if (i % 5 == 0)
			cout << "buzz";
		else if (i % 5 == 0 && i % 3 == 0)
			cout << i;
	}

}