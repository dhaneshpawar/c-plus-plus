#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    char str[] = "Geeks-for-Geeks"; 
  
    // Returns first token  
    char token[] = substr(str, "- ks"); 

    for(int i=0;i<token.length();i++)
    {
        cout << token[i];
    }
    
    return 0;
}
