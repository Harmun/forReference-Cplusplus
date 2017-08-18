#include<algorithm>
#include <iostream>
#include <vector>
void d(){

}
int main(){
	std::vector<int> vi;//vi[0] 
	std::vector<double> vd; //vector is dynamic , but not an array
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	vd.push_back(2.3);
	vd.push_back(3.4);
	vd.push_back(5.3);

	//now going to do transforms
	std::transform( //doing = everything in vi is timed by 3.6 and stored in vd
					vi.begin(), //begining //
					vi.end(),//to end 
					vd.begin(),//begining 
					[](int i)->double {return i * 3.6; } //return i * 3.6 to [] ..... 
				  );

	for (//printing everything in vd
			std::vector<double>::iterator it = vd.begin(); it != vd.end(); ++it 
		){
			std::cout << *it << std::endl;
		}
	return 0;
}