#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //string userInput;
    int x, y;
    while (cin >> x) {
    int sum = 0;
    int length = (int) log10 ((double) x + 1);
    y = x % 10;
    sum += pow(y,(length + 1));
    for (int i = 1; i < length+1; i++) {
        y = ((int) (x / (pow(10,i))) % 10);
        sum += pow(y,(length+1));
    }
           cout << ((sum == x) ? "True" : "False") << endl;
    }
}

