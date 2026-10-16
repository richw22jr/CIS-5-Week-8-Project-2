#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout; using std::endl;
const int scoreAt0 = 25; // change this number Done**

// Project 2 — Richard Webster
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 50; // change this number **Done
  int A = 0, B = 0, C = 0, D = 0, F = 0,
  
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 75; // change this number **Done

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  

  scores[0] = scoreAt0;
  const int scoreAt27 = 75; // change this number **Done
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  cout << "[" << i << "] " << scores[i] << endl;
  }
  
   for (int i = 0; i < N; ++i) {
    if (scores[i] >= 90) 
     { 
      ++A;
     }
    if (scores[i] >= 80 && scores[i] <= 89)
     { 
      ++B;
     }
    if (scores[i] >= 70 && scores[i] <= 79)
     {
      ++C;
     }
    if (scores[i] >= 60 && scores[i] <= 69)
     {
      ++D;
     }
    if (scores[i] < 60)
     {
      ++F;
     }
    
  }
  cout << "A: " << A << endl;
  cout << "B: " << B << endl;
  cout << "C: " << C << endl;
  cout << "D: " << D << endl;
  cout << "F: " << F << endl;
  cout << "These 5 Numbers at up to " << A + B + C + D + F << endl;
  cout << "The students at the following indexes need to come to office hours: " << endl;
  
  int i = 0 ;
  while (i < N) {
    if (scores[i] < 60) {
      cout << "Student at index [" << i << "]" << " needs to come to office hours" << endl;
    } i++;
  }
  cout << endl;
   

  return 0;
}
