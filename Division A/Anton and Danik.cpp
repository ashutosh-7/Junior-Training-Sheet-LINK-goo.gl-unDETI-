#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll t;
				cin>>t;
				char s;
				ll anton=0,dan=0;
				while(t--)
				{
					cin>>s;
					if(s=='A')
					{
						anton++;
					}
					else
					dan++;
				}
				if(anton>dan)
				cout<<"Anton"<<endl;
				else if(dan>anton)
				cout<<"Danik"<<endl;
				else
				cout<<"Friendship"<<endl;
	return 0;
}
