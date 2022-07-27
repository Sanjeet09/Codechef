/*Question Link:
https://www.codechef.com/submit/GRIDBL?tab=statement
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,m,n;
	
	cin>>t;
	
	while(t--){
	    cin>>m>>n;
	    
	    if(m%2==0 && n%2==0)
	        cout<<0<<endl;
	    else if(m%2!=0 && n%2!=0)
	        cout<<m+n-1<<endl;
	    else if(m%2!=0 && n%2==0)
	        cout<<n<<endl;
	    else
	        cout<<m<<endl;
	}
	
	return 0;
}
