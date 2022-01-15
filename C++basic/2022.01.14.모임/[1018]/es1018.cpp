#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n, m;                                //n의 세로의 수, m은 가로의 수
    int result;
    vector<int> v;                           //경우의 수 저장벡터
    string *board;                           //입력받은 보드    

    cin >> n >> m; 

    board = new string[n];                   // 동적배열 할당 (m * n)                    
    
    for(int i = 0; i < n; i ++)              // 보드에 값 저장
        cin >> board[i];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
        }
    }


    sort(v.begin(), v.end());
    return 0;
}