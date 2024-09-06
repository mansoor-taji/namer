#include<iostream>
using namespace std;


int main() {
 string name1;
 int score1;
 
 string name2;
 int score2;
 
 cout << "Enter your name: ";
 cin >> name1;
  
  cout << "Enter your score: ";
  cin >> score1;
  
  cout << "Enter your name: ";
  cin >> name2;
   
  cout << "Enter your score: ";
  cin >> score2;

  
  if(score1 > score2){
    cout << name1 + "'s Score is Higer than " + name2;
  } else {
  	cout << name2 + "'s Score is Higer than " + name1;
  }
   
  return 0;
}