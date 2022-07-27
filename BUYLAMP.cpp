/*Question Link:
https://www.codechef.com/START48C/problems/BUYLAMP
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,x,y,cost;
	cin>>t;
	
	while(t--){
	    cin>>n>>k>>x>>y;
	    //cost= cost of red lamps bought + remaining lamps* min(cost of red,blue)
	    cost=(k*x) + (n-k)*min(x,y);
	    cout<<cost<<endl;
	}
	
	return 0;
}
