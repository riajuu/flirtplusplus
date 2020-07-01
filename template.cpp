/*
 * flirt++
 * https://github.com/riajuu/flirtplusplus
 */
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;

// ?
#define give_up_chase return 
#define not_found !

#define girl int
#define increase ++
#define decrease --
#define harem vector<int>
#define todolist vector<int>
#define phone_book map<int,int>

#define with +
#define without -
#define wan 1
#define hug *
#define ghost /
#define kiss %

#define ConfessionResult bool
#define couple pair<ll,ll>
#define couples vector<couple>

// i/o
#define also >>

#define say cout <<
#define nicely << endl

#define messed_up cout << -1 << endl;

// bool
#define isRiajuu true
#define isNotRiajuu false
#define rejected return false
#define accepted return true

// pairs
#define wife first
#define spare second
#define gf first
#define bf second

// main()
#define mgod main
#define learn_about cin >>
#define move_on_to_next_girl number_of_girls--;
#define confess return;
#define end_up_being_single_anyway return 0;
#define i_only_chase_one_girl number_of_girls = 1;
#define initialize_playboy_mode ios_base::sync_with_stdio(0);
#define search_for_new_girls cin.tie(0);

// loops
#define drink_pepsi break
#define text_back continue

// vectors
#define in_a_relationship make_pair
#define add_to_harem push_back
#define add_to_friend_list push_back
#define add_to_plan push_back
#define remove_from_plan pop_back

typedef int single;
typedef void skill;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

void sweettalk(ll x)
{
	cout<<x<<'\n';
}
 
void sweettalk(string x)
{
	cout<<x<<'\n';
}
void sweettalk(const vector<int> &vec)
{
	for(int i=0;i<(int)vec.size();i++)
	{
		cout<<vec[i];
		if(i+1<(int)vec.size()) cout<<' ';
	}
	cout<<'\n';
}
void sweettalk(const set<int> &vec)
{
	for(int v:vec)
	{
		cout<<v<<' ';
	}
	cout<<'\n';
}

skill flirt_with_girl() {
	// stuff
	give_up_chase;
}

single mgod() {
	initialize_playboy_mode;
	search_for_new_girls;
	int number_of_girls;
	learn_about number_of_girls;
	// i_only_chase_one_girl;
	while(number_of_girls>0)
	{
		flirt_with_girl();
		move_on_to_next_girl;
	}
	end_up_being_single_anyway;
}
