#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b ; 
    char c ;
    float d;
    double e;

     cin >> a >> b >> c >> d >> e;
     cout<<a<<endl<<b<<endl<<c<<endl;
     printf("%0.2f",*&d);
     cout<<endl;
     printf("%0.9lf",*&e);
     return 0;
}