#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
// mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/* #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif */
}




class Solution {
public:
  //   int findPeakElement(vector<int>& nums) { //O(N)
		// int n = nums.size();

		// if(n == 1) return 0;

		// else if(n == 2) {
		// 	int x = (nums[0] >= nums[1]) ? 0 : 1;
		// 	return x;
		// }

		// else {
		// 	if(nums[0] >= nums[1]) return 0;

		// 	if(nums[n-1] >= nums[n-2]) return n-2;

		// 	for(int i = 0; i < n-1; i++) {
		// 		if(arr[i] >= arr[i-1] and arr[i] >= arr[i+1]) return i;
		// 	}
		// }

  //   }

	int findPeakElement(vector<int>& nums) {
		int n = nums.size();
		int low = 0;
		int high = n-1;

		if(nums.size() == 1) return 0;

		while(low <= high) {
			int mid = low + (high - low) / 2;

			if(mid == 0 or nums[mid] >= nums[mid-1] and (mid == nums.size()-1 or nums[mid] >= nums[mid+1])) {
				return mid;
			}

			else if(nums[mid] <= nums[mid+1]) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}

		return -1;
	}

};




int main(int argc, char const *argv[]) {

	file_i_o();

	clock_t start, end;
    start = clock();

	

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
    	cin >> nums[i];
    }

    Solution ans;

    cout << ans.findPeakElement(nums);


	end = clock();
	
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cerr<<"\nTime : "<<fixed<<time_taken<<setprecision(5)<<" s \n";
    cerr<<"\n"<< "Coded By : S!r Black-D3vil" <<"\n";

	return 0;
}
