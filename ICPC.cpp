#include <iostream>
#include <cmath>
#include <array> //C++11
#include <deque> //両端キュー
#include <forward_list> //単方向リスト	C++11
#include <list> //双方向リスト
#include <queue> //FIFOキュー
#include <stack> //LIFOスタック
#include <vector> //ベクタ配列
#include <map> //連想配列
#include <set> //集合
#include <unordered_map> //非順序連想配列 C++11
#include <unordered_set> //非順序集合 C++11
#include <algorithm> //アルゴリズム
#include <regex> //正規表現 C++11

// 1. コンパイル時のコマンド: g++ main.cpp -std=c++11

/* dataset.txtの内容
        12 23
        123 65
        0 0
*/
// 2. a.out を出力時の実行方法
// cat dataset.txt | ./a.out
// 3. 保存
// cat dataset.txt | ./a.out > aaa.txt
// !出力末尾の改行コードに注意

using namespace std;
int main(){
        int x,y;
        vector<int> unko(12);
        cin >> x>>y;
        while( x != 0 && y!= 0 ) {
                cout<<"x = "<<x<<endl;
                cout<<"y = "<<y<<endl;
                cin>>x>>y;
        }
        return 0;
}
