#include <iostream>
using namespace std;

int main(){

  int arr[9] = {0};
  int max, index;

  for(int i = 0; i < 9; i++){
    cin >> arr[i];
  }

  max = arr[0];
  index = 0;

  for(int i = 0; i < 9; i++){
    if(max < arr[i]){
      max = arr[i];
      index = i;
    }
  }

  cout << max << '\n' << index + 1;
  return 0;
}