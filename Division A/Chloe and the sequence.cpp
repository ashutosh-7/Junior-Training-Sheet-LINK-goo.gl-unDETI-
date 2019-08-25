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
			
ll n,k;
cin>>n>>k;

    ll high=pow(2,n)-1;
    ll low=1;
    if(k%2==1){
        cout<<"1"<<endl;
    }else
    {
	ll mid;
    while(1){
       mid=(low+high)/2;
        if(k==mid){
            cout<<n<<endl;break;
        }
        else if(mid>k)
        {
            high=mid-1;
        }
        else 
        low=mid+1;
        n--;
    }
}

	return 0;
}
