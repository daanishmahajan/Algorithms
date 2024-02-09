#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define rb pop_back
#define ti tuple<int, int, int>
#define pii pair<int, int>
#define pli pair<ll, int>
#define pll pair<ll, ll>
#define mp make_pair
#define mt make_tuple

using namespace std;
  
FILE *fp;
ofstream outfile;

long long readInt(long long l,long long r,char endd){
    long long x=0;
    int cnt=0;
    int fi=-1;
    bool is_neg=false;
    while(true){
        // char g=getchar();
        char g = getc(fp);
        if(g=='-'){
            assert(fi==-1);
            is_neg=true;
            continue;
        }
        if('0'<=g && g<='9'){
            x*=10;
            x+=g-'0';
            if(cnt==0){
                fi=g-'0';
            }
            cnt++;
            assert(fi!=0 || cnt==1);
            assert(fi!=0 || is_neg==false);
            
            assert(!(cnt>19 || ( cnt==19 && fi>1) ));
        } else if(g==endd){
            if(is_neg){
                x= -x;
            }
            // cerr << x << " " << l << " " << r << endl;
            assert(l<=x && x<=r);
            return x;
        } else {
            assert(false);
        }
    }
}
string readString(int l,int r,char endd){
    string ret="";
    int cnt=0;
    while(true){
        // char g=getchar();
        char g=getc(fp);
        assert(g != -1);
        if(g==endd){
            break;
        }
        cnt++;
        ret+=g;
    }
    assert(l<=cnt && cnt<=r);
    return ret;
}
long long readIntSp(long long l,long long r){
    return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
    return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
    return readString(l,r,'\n');
}
string readStringSp(int l,int r){
    return readString(l,r,' ');
}

const string newln = "\n", space = " ";
const int maxt = 2e4, maxn = 1e5, maxsumn = 1e5, maxa = 1e4;

int maxScore(vector<int>& cardPoints, int k) {
    int l = cardPoints.size();
    int ps[l + 1]; ps[0] = 0;
    for(int i = 1; i <= l; i++)ps[i] = ps[i - 1] + cardPoints[i - 1];
    int ans = ps[k];
    int sum = 0;
    for(int i = l; i >= l - k + 1; i--){
        sum += cardPoints[i - 1];
        ans = max(ans, sum + ps[k - (l - i + 1)]);
    }
    return ans;
}

int main()
{   
    for(int test = 0; test <= 8; test++){
        string in = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(test) + ".in";
        string out = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(test) + ".out";
        fp = fopen (in.c_str(), "r");
        outfile.open(out.c_str());
        int t = readIntLn(1, maxt), sumn = 0;
        while(t--){
            int n = readIntSp(1, maxn), k = readIntLn(1, n);
            sumn += n;
            vector<int> v; 
            for(int i = 0; i < n; i++){
                int x = i == n - 1 ? readIntLn(1, maxa) : readIntSp(1, maxa);
                v.pb(x); 
            }
            outfile << maxScore(v, k) << endl;
        }
        assert(sumn <= maxsumn);
        assert(getc(fp)==-1);
        // assert(getchar()==-1);
        outfile.close();   
    }
} 