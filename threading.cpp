#include <thread>
#include <iostream>
//struct
struct nameOfStruct{
	int a = 0;
	int b = 1;
	int c = 2;
};
//function
void rndmFunc(nameOfStruct e){
	for (int i = 0; i < 1000; i++)
		std::cout << "I am the NEXT thread running" << std::endl;
	std::cout << "Hello" << e.a << e.b << e.c << std::endl;
}
int main(){
	//create thread
	nameOfStruct e;
	std::thread a(rndmFunc, e);
	//routine in main
	for (int i = 0; i < 1000; i++)
		std::cout << "I am the MAIN thread Running" << std::endl;
	a.join();


	return 0;
}