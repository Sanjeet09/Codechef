/*Question Link:
https://www.codechef.com/submit/FILLCANDIES?tab=statement
*/

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,m,candiesHeld;
	
	cin>>t;
	
	while(t--){
	    cin>>n>>k>>m;
	    candiesHeld= m*k;
	    double ans=ceil(n/(double)candiesHeld);
	    cout<<(int)ans<<endl;
	}
	return 0;
}
