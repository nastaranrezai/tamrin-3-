#include <iostream> 
void s(int a[], int na); 
using namespace std; 
 
int main()
{
  int n, i, x= 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> x;
    a[i] = x;
  }
  s(a, n);
  return 0; 
}

void s(int a[], int na)
{
  int i, j;
  for (i =0; i < na; i++)
  {
    for(j = i+ 1;j < na; j++)
    if(a[i] > a[j])   swap(a[i], a[j]);
  }
  for(i = 0; i < na; i++)
  {
    cout << a[i]<< "\t";
  }
}