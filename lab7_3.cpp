#include<iostream>
#include<cmath>
using namespace std;

int adiff(int a,int b)
{
  while(a>=180 or b>=180)
  {
    a = a-360;
    b = b-360;
  }
  int c = abs(a-b);
  while(c >= 180)
  {
    c=c-360;
  }
  return abs(c); 
}


int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244)<< endl;
}
