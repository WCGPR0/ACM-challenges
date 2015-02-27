#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string myString;
    vector<int> myVector;
        while (getline(cin, myString, ',')) {
            for (char& myChar: myString) {
                if (myChar == '\n') break;
                myVector.push_back(stoi(myString));
            }
        //Custom sort 
            for (int i = 0; i )
            
        }
    sort(myVector.begin(), myVector.end(), greater<int>());
    for (vector<int>::iterator it = myVector.begin() ; it != myVector.end(); ++it)
    cout <<' ' << *it;
    return 0;
}

int mySort (int a, int b) {
    if ()
    
}
