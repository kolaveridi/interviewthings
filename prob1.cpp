#include <bits/stdc++.h>
using  namespace std;
#include <stdlib.h>     /* srand, rand */
vector <int>v;
vector <int> v1;
int main(){
	
  srand (time(NULL));
	int x,y;// note x and y are size of bags it simply means that if bag a is of size 10,it can have a sum of numbers of apples+oranges+guava=10
	cin>>x>>y;
	for(int i=0;i<x;i++){
		//we generate rando numbers 0,1,2 to denote apples,oranges,guavas
		int x=rand()%3;
		v.push_back(x);
	}
	for(int i=0;i<y;i++){
		int x=rand()%3;
		v1.push_back(x);
	}
	int zeroes=0;int ones=0;int twos=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==0)
		 zeroes++;
		 if(v[i]==1)
		 ones++;
		 if(v[i]==2)
		 twos++;
		
	}
	 int zeroes1=0;int ones1=0;int twos1=0;
	for(int i=0;i<v1.size();i++){
		if(v[i]==0)
		 zeroes1++;
		 if(v[i]==1)
		 ones1++;
		 if(v[i]==2)
		 twos1++;
		
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
		
	}
	cout<<endl;
	int similarity=0;
	if(zeroes==zeroes1){
		similarity++;
	}
	if(ones==ones1){
		similarity++;
	}
	if(twos==twos1){
		similarity++;
	}
	cout<<"Total similar count of apples,oranges and gauvas "<<similarity<<endl;
}

