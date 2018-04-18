/*The problem can be broken down as perfect sum problem where we need to print a subset that leads to a sum X.
Note: dp[i][j] stores true if sum j is possible with array elements from 0 to i.
We have two possibilities for every element and either we include it or we don't.
*/
#include <bits/stdc++.h>
using namespace std;
bool **dp;
void display(const vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}
void printsubsets(int arr[],int i,int sum,vector <int> &p){
	if(i==0 && sum!=0 && dp[0][sum]){
		p.push_back(arr[i]);
		display(p);
		return;
	}
	if(i==0 && sum==0){
		display(p);
		return;
	}
	if (dp[i-1][sum])
    {
        vector<int> b = p;
        printsubsets(arr, i-1, sum, b);
    }
	if(dp[i-1][sum-arr[i]] && sum>=arr[i]){
		p.push_back(arr[i]);
		printsubsets(arr,i-1,sum-arr[i],p);
	}
}
void printAllSubsets(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        cout<<"There are no subsets with sum"<<endl;
        return;
    }
 
    vector<int> p;
    printsubsets(arr, n-1, sum, p);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n =5;
    int sum = 10;
    printAllSubsets(arr, n, sum);
    return 0;
}
