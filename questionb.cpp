#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	while(1)
		{
		  cout << n << endl;
		  if (n==1)
		  break;
		   else{
			 if (n%2 != 0)
		  	 {
				n = 3*n + 1;
		  	 }
		    	 else
		    	 {
		    		n = n/2;
		    	 }
		       }
		}
		
	return 0;
}
