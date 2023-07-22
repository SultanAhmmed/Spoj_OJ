/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int tc;
	cin >> tc;
	for(int i = 1; i <= tc; i++){

		int n,m;
		cin >> n >> m;

		map<pair<int,int>,bool>vis;

		bool ok = 1;
		while(m--){
			int a,b;
			cin >> a >> b;
			if(vis[{a,b}]) ok = 0;
			vis[{a,b}] = 1;
		}

			if(ok) cout << "Scenario #" << i << ": possible" << '\n';
			else cout << "Scenario #" << i << ": impossible" << '\n'; 
		}
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
