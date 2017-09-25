#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;

int main(){
  int a;
  cin >> a;
  if(a%10 == 9 || a/10 == 9) {
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}
