#include <iostream>
using namespace std;

int main() {
	int x,flag=0;
	while(scanf("%i",&x)==1)
	{
	  if(x==42)  
	   {
	     flag=1;
	     continue;
	   }
	  else if(flag!=1)
	   {
	     std::cout << x << std::endl;    
	   }
	}
	return 0;
}
