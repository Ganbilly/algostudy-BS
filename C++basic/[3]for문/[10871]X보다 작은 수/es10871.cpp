#include <iostream>
using namespace std;

int main(){

   int n, x, input;

   ios::sync_with_stdio(false);
   cout.tie(NULL);
   cin.tie(NULL);
   
   cin >> n >> x;

   for(int i = 0 ; i < n; i++){
     cin >> input;
     if(input < x){
       cout << input<<' ';
     }
   }

  return 0;
}