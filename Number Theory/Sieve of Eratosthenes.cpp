// Given n, generate all prime numbers less than n
// Time complexity: O(nlog(logn))

#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 30;
const int MAX_N = 100000 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

vector<int> sieve(int N) {
    bool prime[N + 1] = {true};
    vector<int> ans;
    prime[0] = prime[1] = false;
    for(int p = 2; p * p <= N; p++) 
        if(prime[p])
            for(int i = p * 2; i <= N; i += p)
                prime[i] = false;
                
    for(int p = 2; p <= N; p++)
        if(prime[p])
            ans.push_back(p);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  
    int N; cin >> N;
}
