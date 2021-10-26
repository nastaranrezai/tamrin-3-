#include <iostream> 
#include <stdlib.h>  
using namespace std; 
 
int main()
{
  int n, i;
  cin >> n;
  for(i= 1; i <= n; i++)
  {
    int f= i % 2;
    if(f != 0) cout <<"*";
    if(f == 0)  cout <<"#";
  }
  return 0; 
}