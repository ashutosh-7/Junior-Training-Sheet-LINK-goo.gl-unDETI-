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
			float a,b,c;
			cin>>a>>b>>c;
			float temp=(a*c)-(b*c);
			temp=ceil(temp/b);
			temp=int(temp);
			cout<<temp<<endl;
	return 0;
}
