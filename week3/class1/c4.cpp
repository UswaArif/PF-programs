#include<iostream>
using namespace std;

int mystery_func(int num) {
	int product = 1;
	while (num != 0) {
		product = product * (num % 10);
		num = num/10;
	}
	return product;
}

main()
{
    int n;
    cout<<"Enter the number:";
    cin>> n;

    int result = mystery_func(n);
    cout<< result;
}