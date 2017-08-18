// vector::emplace
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> myvector = { 10, 20, 30 }; 
	//tempOFFauto it = myvector.emplace(myvector.begin() + 1, 100);
	auto it = myvector.begin();//
	it++;//proceed thorugh the vector
	myvector.emplace(it, 200);//point of emplace is placing 200 wherever in the array
	myvector.emplace(myvector.end(), 300); 
	std::cout << "myvector contains:";
	for (auto& x : myvector)
		std::cout << ' ' << x;
	std::cout << '\n';
	std::cout << "i thought myvector contained, 10, 200, 20, 30,300" << std::endl;

	return 0;
}