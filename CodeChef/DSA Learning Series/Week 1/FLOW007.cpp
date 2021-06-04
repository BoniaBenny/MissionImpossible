#include <iostream>
using namespace std;

int main(void) {
	int t;
	std::cin >> t;
	while(t--)
	{ int num,r=0;
	  cin>>num;
	  
	  while(num>0)
	  {
	    r=r*10+(num%10);
	    num/=10;
	  }
	  std::cout << r << std::endl;
	}
	return 0;
}

