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
    int k,r;
    cin >> k >> r;
    int mul = k;
    for(int i = 1;i <=100;i++) {
        if((mul * i ) % 10 == 0 || (mul * i) % 10 == r) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}