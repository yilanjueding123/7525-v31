#include <iostream>

//#define __msg(...) 		(printf("MSG:L%d(%s):", __LINE__, __FILE__), \
//		printf(__VA_ARGS__)											)


int main(int argc, char **argv)
{
	//__msg("Welcome to hello world\n");
	//__msg("%d\n", (1 << 14));
	std::cout << "Welcome to C++ world\n";
	
	return 0;
}
