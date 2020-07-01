/*
 * flirt++
 * https://https://github.com/riajuu/flirtplusplus
 */
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

#define check cin >>

#define say cout <<
#define nicely << endl

#define initialize_playboy_mode ios_base::sync_with_stdio(0);
#define breakup_with_gf cin.tie(0);

#define messed_up cout << -1 << endl;
#define isRiajuu true
#define isNotRiajuu false

#define wife first
#define spare second

#define sortharem sort 

#define mgod main
#define wan 1
#define confess return 0

#define drink_pepsi break
#define text_back continue

const int MOD=1e9+7;

typedef int single;
typedef void skill;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

class Riajuu
{
	public:
	
	bool showthoughts = false;
	int testcount=1;
	
	void hears(int &x) {
		cin>>x; 
	}
	
	// DEALING WITH NUMBER OF TESTCASES
	void count_girls() {
		cin>>testcount;
	}
	bool stillRiajuu() {
		testcount--;
		if(testcount>=0) return true;
		else return false;
	}
	
	// DEBUG FUNCTIONS
	void expose_thoughts() {
		showthoughts = true;
	}
	void think(int x, string s = "") {
		if(showthoughts){
			cerr << s << x << endl;
		}
	}
	void think2d(int a[], int n, string s = "") {
		if(showthoughts){
			cerr << s;
			for(int i=0;i<n;i++) cerr << a[i] << " ";
			cerr << endl;
		}
	}
	void think3d(vector<int> v1, string s = "") {
		if(showthoughts){
			cerr << s;
			for(auto i:v1){
				cerr << i << " ";
			}
			cerr << endl;
		}
	}
} MGod;

skill flirt() {
    // stuff
    return;
}

single mgod() {
    initialize_playboy_mode;
    breakup_with_gf;
    // MGod.expose_thoughts(); // DEBUG
    MGod.count_girls(); // read number of testcases, comment if only needs to flirt() once
    while(MGod.stillRiajuu()) flirt(); // flirt() for each testcases
    confess;
}
