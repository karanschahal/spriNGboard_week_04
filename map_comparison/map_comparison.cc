#include <iostream>
#include <vector>

/////////////////////////////////////////
// INCLUDE NECESSARY HEADER FILES HERE //
/////////////////////////////////////////
#include <map>
#include <unordered_map>
#include <iomanip>

using namespace std;

void func_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_map ===" << endl;

  ////////////////////////////////////////////////
  // CREATE AN EMPTY map MAPPING int TO string. //
  ////////////////////////////////////////////////
  map<int, string> myMap;

  ////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,     //
  // INSERT EACH ITEM IN items INTO THE MAP //
  ////////////////////////////////////////////
  for (pair<int,string> p : items){
      myMap.insert(p);
  }

  //////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,       //
  // PRINT OUT EACH KEY-VALUE PAIR IN THE MAP //
  //////////////////////////////////////////////
  for (pair<int,string> p : items){
      cout << p.first << ": " << p.second << endl;
  }

  cout << endl << "=== END func_map ===" << endl;
}

void func_unordered_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_unordered_map ===" << endl;

  //////////////////////////////////////////////////////////
  // CREATE AN EMPTY unordered_map MAPPING int TO string. //
  //////////////////////////////////////////////////////////
  unordered_map<int, string> myUnorderedMap;

  /////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,      //
  // INSERT EACH ITEM IN items INTO THE MAP. //
  // AFTER EACH INSERTION, PRINT OUT:        //
  //   o  THE SIZE OF THE MAP                //
  //   o  THE NUMBER OF BUCKETS              //
  //   o  THE LOAD FACTOR                    //
  // IN THE FOLLOWING FORMAT:                //
  //   o  "[N,B,LF] = [3,10,0.4432]"         //
  /////////////////////////////////////////////
  for (const auto& item : items) {
    myUnorderedMap[item.first] = item.second;
    cout << "[N, B, LF] = [" << myUnorderedMap.size() << "," << myUnorderedMap.bucket_count() << "," << myUnorderedMap.load_factor() << "]" << endl; 
  }

  ///////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,        //
  // PRINT OUT EACH KEY-VALUE PAIR IN THE MAP. //
  ///////////////////////////////////////////////
  for (auto& item : myUnorderedMap){
      cout << item.first << ": " << item.second << endl;
  }

  cout << endl << "=== END func_unordered_map ===" << endl;
}

int main ()
{
  vector<pair<int,string>> items = {
    {3, "three"},
    {13, "thirteen"},
    {2, "two"},
    {7, "seven"},
    {11, "eleven"},
    {20, "twenty"},
    {5, "five"},
    {96, "ninety six"},
    {97, "ninety seven"},
    {23, "twenty three"},
    {4, "four"},
    {59, "fifty nine"},
    {17, "seventeen"},
    {1, "one"}
  };

  func_map(items);
  func_unordered_map(items);

  return 0;
}

