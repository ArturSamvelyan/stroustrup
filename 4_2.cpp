#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

inline void keep_window_open(){char ch; cin >> ch;}
double sum(vector<double> v);



int main(){
  
  vector<double> v;
  for(double x; cin >> x; ){
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  cout << "Sum: " << sum(v) << '\n';
  cout << "Average: " << sum(v)/v.size() << '\n';
  cout << "Min: " << v[0] << '\n';
  cout << "Max: " << v[v.size()-1] << '\n';

  cout << '\n';
  return 0;

}


double sum(vector<double> v){
  double s = 0;
  for(double d: v){
    s += d;
  }
  return s;
}
