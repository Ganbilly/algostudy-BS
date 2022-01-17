#include <iostream>

using namespace std;

int **arr;

void star(int startx, int starty, int size){

    

    for(int i = 0; i < 9; i++){
        
    }

}

int main(){

    int n;

    cin >> n;
    
    *arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n]{0};
    }
    star(0, 0, n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0)
                cout << '*';
            else if(arr[i][j] == 1)
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}