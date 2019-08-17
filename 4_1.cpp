#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

inline void keep_window_open(){char ch; cin >> ch;}

int main(){
  
  vector<string> words;
  for(string temp; cin>>temp; ){
    words.push_back(temp);
  }
  cout << "Words amount: " << words.size() << '\n';
  
  sort(words.begin(), words.end());
  for(int i = 0; i < words.size(); ++i){
    if(i == 0 || words[i-1] != words[i]){
      cout << words[i] << '\n';
    }
  }



  cout << '\n';
  return 0;

}
