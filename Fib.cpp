#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define rb pop_back
#define ti tuple<int, int, int, int, int, int>
#define pii pair<int, int>
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
ofstream outfile;
const string newln = "\n", space = " ";

const int maxv = 30;

void fun0(){
 	string outdir = "/Users/daanishmahajan/TAship/Navgurukul/ProblemSetting/Math/FibonacciNumber" + to_string(0) + ".in";
    outfile.open(outdir.c_str());
    int t = 30;
    outfile << t << endl;
    
    vector<int> v;
    for(int i = 1; i <= t; i++)v.pb(i);
    random_shuffle(v.begin(), v.end());

    for(int x : v){
        outfile << x << endl;
    }

    outfile.close();	
}

int main(){
    fun0();
}
