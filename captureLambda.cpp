#include <iostream>
#include <string>
using namespace std;


int main(){
	string dog = "rotti";
	int m = 0;
	int n = 0;
	[&, n, dog](int a) mutable{ 
								m = ++n + a;  
						 }(4);
	cout << m << endl << n << endl;

	return 0;
}

//capture
//capture clause

//lparameter list

//mutable 

//exception

//traililng

//lambda body