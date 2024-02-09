#include "/home/daanish/Daanish/CP/jngen-master/random.h"
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

const int maxt = 2e4, maxn = 1e5, maxsumn = 1e5, maxa = 1e4;

// corner cases
void fun0(){
 	string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(0) + ".in";
    outfile.open(outdir.c_str());
    int t = 3;
    outfile << t << endl;
    
    int n = 1, k = 1;
    outfile << n << " " << k << endl << rnd.next(1, maxa) << endl;
    
    n = maxn / 2 - 1; k = 1;
    outfile << n << " " << k << endl;
    for(int i = 1; i <= n - 1; i++){
        outfile << rnd.next(1, maxa / 2) << " ";
    }outfile << rnd.next(maxa / 2 + 1, maxa) << endl;

    n = maxn / 2; k = n / 2;
    outfile << n << " " << k << endl;
    for(int i = 1; i <= n; i++){
        outfile << rnd.next(1, maxa) << " \n"[i == n];
    }

    outfile.close();	
}

// All possible input arrays
void fun1(){
 	string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(1) + ".in";
    outfile.open(outdir.c_str());
    int t = pow(5, 6);
    outfile << t << endl;
    for(int i = 0; i < t; i++){
        int n = 6, k = 3;
        outfile << n << " " << k << endl;
        int x = i;
        for(int j = 0; j < n; j++){
            outfile << ((x % 5) + 1) << " \n"[j == n - 1];
            x /= 5;
        }
    }

    outfile.close();    
}

// ans is prefix / suffix
void fun2(){
 	string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(2) + ".in";
    outfile.open(outdir.c_str());
    int t = 2;
    outfile << t << endl;
    int n = maxn / 2, k = n / 3;
    outfile << n << " " << k << endl;
    for(int i = 1; i <= k; i++){
    	outfile << rnd.next(maxa / 2, maxa) << " ";
    }
    for(int i = k + 1; i <= n; i++){
        outfile << rnd.next(1, maxa / 2) << " \n"[i == n];
    }

    k = n / 4;
    outfile << n << " " << k << endl;
    for(int i = 1; i <= n - k; i++){
        outfile << rnd.next(1, maxa / 2) << " ";
    }
    for(int i = n - k + 1; i <= n; i++){
        outfile << rnd.next(maxa / 2, maxa) << " \n"[i == n];
    }

    outfile.close();	
}

// maxans
void fun3(){
 	string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(3) + ".in";
    outfile.open(outdir.c_str());
    int t = 1;
    outfile << t << endl;
    int n = maxn, k = n;
    outfile << n << " " << k << endl;
    for(int i = 1; i <= n; i++)outfile << maxa << " \n"[i == n];
    outfile.close();	
}

// minans
void fun4(){
    string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(4) + ".in";
    outfile.open(outdir.c_str());
    int t = 1;
    outfile << t << endl;
    int n = maxn, k = n;
    outfile << n << " " << k << endl;
    outfile << 1 << " ";
    for(int i = 2; i <= n - 1; i++)outfile << maxa << " ";
    outfile << 1 << endl;
    outfile.close();    
}

void fun5(){
 	string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(5) + ".in";
    outfile.open(outdir.c_str());
    int t = 10;
    outfile << t << endl;
    int n = maxn / t;
    for(int i = 0; i < t; i++){
    	int k = n / 2;
        int k1 = rnd.next(1, k - 1), k2 = k - k1;
    	outfile << n << " " << k << endl;
    	for(int j = 1; j <= k1; j++){
    		outfile << rnd.next(maxa / 2, maxa) << " ";
    	}
        for(int j = k1 + 1; j <= n - k2; j++){
            outfile << rnd.next(1, maxa / 2) << " ";
        }
        for(int j = n - k2 + 1; j <= n; j++){
            outfile << rnd.next(maxa / 2, maxa) << " \n"[j == n];
        }
    }
    outfile.close();	
}

void fun6(){
    string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(6) + ".in";
    outfile.open(outdir.c_str());
    int t = 100;
    outfile << t << endl;
    int n = maxn / t;
    for(int i = 0; i < t; i++){
        int k = n / 2;
        int k1 = rnd.next(1, k - 1), k2 = k - k1;
        outfile << n << " " << k << endl;
        for(int j = 1; j <= k1; j++){
            outfile << rnd.next(maxa / 2, maxa) << " ";
        }
        for(int j = k1 + 1; j <= n - k2; j++){
            outfile << rnd.next(1, maxa / 2) << " ";
        }
        for(int j = n - k2 + 1; j <= n; j++){
            outfile << rnd.next(maxa / 2, maxa) << " \n"[j == n];
        }
    }
    outfile.close();    
}

void fun7(){
    string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(7) + ".in";
    outfile.open(outdir.c_str());
    int t = 1000;
    outfile << t << endl;
    int n = maxn / t;
    for(int i = 0; i < t; i++){
        int k = n / 2;
        int k1 = rnd.next(1, k - 1), k2 = k - k1;
        outfile << n << " " << k << endl;
        for(int j = 1; j <= k1; j++){
            outfile << rnd.next(maxa / 2, maxa) << " ";
        }
        for(int j = k1 + 1; j <= n - k2; j++){
            outfile << rnd.next(1, maxa / 2) << " ";
        }
        for(int j = n - k2 + 1; j <= n; j++){
            outfile << rnd.next(maxa / 2, maxa) << " \n"[j == n];
        }
    }
    outfile.close();    
}

void fun8(){
    string outdir = "/home/daanish/Daanish/pmrf/TAship/Navgurukul/Problems/MaximumPoints/" + to_string(8) + ".in";
    outfile.open(outdir.c_str());
    int t = 10000;
    outfile << t << endl;
    int n = maxn / t;
    for(int i = 0; i < t; i++){
        int k = n / 2;
        int k1 = rnd.next(1, k - 1), k2 = k - k1;
        outfile << n << " " << k << endl;
        for(int j = 1; j <= k1; j++){
            outfile << rnd.next(maxa / 2, maxa) << " ";
        }
        for(int j = k1 + 1; j <= n - k2; j++){
            outfile << rnd.next(1, maxa / 2) << " ";
        }
        for(int j = n - k2 + 1; j <= n; j++){
            outfile << rnd.next(maxa / 2, maxa) << " \n"[j == n];
        }
    }
    outfile.close();    
}

int main(){
    fun0();
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    fun6();
    fun7();
    fun8();
}