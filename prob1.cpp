#include <bits/stdc++.h>
using  namespace std;
#include <stdlib.h>     /* srand, rand */
vector <int>v;
vector <int> v1;
// the idea is to populte the bag with apples,oranges and gauvas and just calculate the absolute difference between the number of apples ,bannans and oranges in two bags'

int main(){
      int x,y,z;
	  cin>>x>>y>>z;
	  int x1,y1,z1;
	  cin>>x1>>y1>>z1;
	  int ans=abs(x-x1)+abs(y-y1)+abs(z-z1);
	  cout<<ans<<endl;
	  	
  
	cout<<"Total similar count of apples,oranges and gauvas "<<ans<<endl;
}
