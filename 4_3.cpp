#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

inline void keep_window_open(){char ch; cin >> ch;}
void ask_about(string dep, int num);


int main(){
  char q; 
  vector<int> v;
  for(int i = 1; i <= 100; i++){
    v.push_back(i);
  }
  while(v.size() != 1){
    cout << "Y-yes, N-no" << '\n';
    ask_about("bigger", v[v.size()/2-1]);
    cin >> q;
    if(q == 'Y' || q == 'y'){
      v.erase(v.begin(), v.begin()+(v.size()/2));
    }else if(q == 'N' || q == 'n'){
      v.erase(v.end()-(v.size()/2), v.end());
    }else{
      exit(1);
    }
  }
  cout << "Your number is: " << v[v.size()-1];

  cout << '\n';
  return 0;

}

void ask_about(string dep, int num){
  if(dep != "equal"){
    cout << "Is your number " + dep + " than " << num << '\n'; 
  }else{
    cout << "Is your number " << num << "?" << '\n';
  }
}
