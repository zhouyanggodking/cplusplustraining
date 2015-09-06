#include <iostream>
#include "class_a.h"
#include "subdir/class_b.h"
int main(int argc, char* argv[])
{	
	class_a a;
	a.display();

	class_b b;
	b.display();

	std::cout<<"First c++ program"<<std::endl;
	return 0;
}
