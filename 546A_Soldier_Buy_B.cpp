#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >> w;
    int sum = (w * (w + 1)) / 2;
    sum *= k;
    if(n >= sum) cout << 0 << endl;
    else cout << sum - n << endl;
    return 0;
}