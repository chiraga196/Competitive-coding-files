#include <bits/stdc++.h>
#include<chrono>
using namespace std;
#define ff first
#define pb push_back
#define ss second
#define ll long long
#define MAX 5000
#define mpi map<int,int>
#define mpl map<long,long>
#define pll pair<long,long>
#define pld pair<long,long> , double
#define SKILLER ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//const int Maxn = 1e5+1, Mod = 1e9 + 7;
//int fact[Maxn],ifact[Maxn];
bool sortByVal(const pair<pld> &a, 
               const pair<pld> &b) 
{ 
    return (a.second < b.second); 
} 
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
}
ll power(ll n,ll r){
    if(r==0){
        return 1;
    }
    if(r==1)return n;
    return (power(n,r/2)%Mod * power(n,r-(r/2))%Mod) % Mod;
}
template<typename T, typename T1>
T mod(T x, T1 p) {
    x %= p;
    if (x < 0)
        x += p;
    return x;
}
template<typename T>
T inverse(T x, T p) {
    x = mod(x, p);
    if (x == 1)
        return x;
    return mod(1LL * (-p / x) * (inverse(p % x, p)) , p);
}
bool primeCheck(int n) {
    if (n == 2 || n == 3 || n == 5) return true;
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i <= n; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
           return false; 
    return true; 
}
ll gcd(ll a, ll b){
    if(a==0)return b;
    return gcd(b%a,a);
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
int main(){
    //auto start=std::chrono::steady_clock::now();
   /*     fact[0] = 1;
for(int i = 1; i < Maxn; i++) {
    fact[i] = 1LL * fact[i - 1] * i % Mod;
}
ifact[0] = 1;
for(int i = 1; i < Maxn; i++) {
    ifact[i] = 1LL * ifact[i - 1] * inverse(i, Mod) % Mod;
}  */
    SKILLER
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputf.in", "r", stdin);
    // for writing output to output.txt
    freopen("outputf.in", "w", stdout);
    #endif        
   ll t;
   while(t--){

   }
    //auto end = std::chrono::steady_clock::now();
      //double elapsed=double (std::chrono::duration_cast < std::chrono::nanoseconds> (end-start).count());
   //std::cout<<"elapsed "<<elapsed/1e9;
    return 0;
}
