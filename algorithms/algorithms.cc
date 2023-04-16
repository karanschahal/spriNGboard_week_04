#include <iostream>
#include <vector>

////////////////////////////////////
// INCLUDE NECESSARY HEADERS HERE //
////////////////////////////////////
#include <algorithm>
#include <numeric>

using namespace std;

void print_vector (const vector<int>& v);

void test_algorithms (int N)
{
  //////////////////////////////
  // CREATE A VECTOR v OF int //
  // WITH SIZE N              //
  // FILLED WITH ZEROS        //
  //////////////////////////////
  vector<int> v(N, 0);

  print_vector(v);

  ///////////////////////////////
  // USE iota TO FILL v        //
  // WITH VALUES STARTING AT 5 //
  ///////////////////////////////
  iota(v.begin(), v.end(), 5);

  print_vector(v);

  ///////////////////////////////////////
  // USE reverse TO REVERSE THE VALUES //
  // BETWEEN THE THIRD AND FIFTH FROM  //
  // LAST POSITIONS                    //
  ///////////////////////////////////////
  reverse(v.end()-6, v.end()-4);

  print_vector(v);

  /////////////////////////////////////
  // USE fill TO FILL THE FIRST FOUR //
  // VALUES WITH 20s                 //
  /////////////////////////////////////
  fill(v.begin(), v.begin()+4, 20);

  print_vector(v);

  ////////////////////////////////////////
  // USE sort TO SORT ALL BUT THE FIRST //
  // AND LAST VALUES                    //
  ////////////////////////////////////////
  sort(v.begin()+1, v.end()-1);

  print_vector(v);

  ///////////////////////////////////////////
  // USE sort WITH A COMPARISON LAMBDA     //
  // TO SORT ALL EVEN NUMBERS TO THE       //
  // FRONT AND ALL ODD NUMBERS TO THE BACK //
  ///////////////////////////////////////////
  sort(v.begin(), v.end(), [](int a, int b) {
      return a % 2 == 0 && b % 2 == 1;
  });

  print_vector(v);
}

int main ()
{
  test_algorithms(15);
}

void print_vector (const vector<int>& v)
{
  cout << "v = ";
  for (auto& elem : v) {
    cout << elem << " ";
  }
  cout << endl;
}

