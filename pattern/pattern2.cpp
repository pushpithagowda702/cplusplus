#include <iostream>
using namespace std;

int main() {
  int rows;
  int cols;
  cout<<"Enter height: ";
  cin>>rows;
  cout<<"Enter width: ";
  cin>>cols;
  for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
      if(j==0 || i==0 || i==rows-1 || j==cols-1) {
        cout<<"*";
      } else {
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}