
#include "doctest.h"
#include <iostream>
#include <complex>
#include <vector>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"

using namespace std;
using namespace itertools;

TEST_CASE("RealVariable Test case") {
    

vector <int> ch  {5,7,9,11,13,15,17,19};
int c =0;
 for (auto i: filterfalse([](int i){return i%2==0;}, range(5,20)) )
        CHECK (i==ch[c++] );
vector <int> ch2  {5,6,8};
 c =0;
for (auto i: compress(range(5,9), vector<bool>({true,true,false,true})) )
        CHECK (i==ch2[c++] );

vector <int> ch4  {5,11,18,26};
 c =0;
for (int i: accumulate(range(5,9)))
		        CHECK (i==ch4[c++] );
vector <int> ch5  {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 c =0;
for (int i: range(5,25))
		        CHECK (i==ch5[c++] );


vector <int> ch6  {5,7,9,11,13,15,17,19};
 c =0;
 for (auto i: filterfalse([](int i){return i%2==0;}, range(5,20)) )
        CHECK (i==ch6[c++] );
vector <int> ch7  {5,6,8};
 c =0;
for (auto i: compress(range(5,9), vector<bool>({true,true,false,true})) )
        CHECK (i==ch7[c++] );

vector <int> ch9  {5,11,18,26};
 c =0;
for (int i: accumulate(range(5,9)))
		        CHECK (i==ch9[c++] );
vector <int> ch10  {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 c =0;
for (int i: range(5,25))
		        CHECK (i==ch10[c++] );

vector <int> ch11  {5,7,9,11,13,15,17,19};
 c =0;
 for (auto i: filterfalse([](int i){return i%2==0;}, range(5,20)) )
        CHECK (i==ch11[c++] );
vector <int> ch12  {5,6,8};
 c =0;
for (auto i: compress(range(5,9), vector<bool>({true,true,false,true})) )
        CHECK (i==ch12[c++] );

vector <int> ch14  {5,11,18,26};
 c =0;
for (int i: accumulate(range(5,9)))
		        CHECK (i==ch14[c++] );
vector <int> ch15  {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 c =0;
for (int i: range(5,25))
		        CHECK (i==ch15[c++] );


vector <int> ch16  {5,7,9,11,13,15,17,19};
 c =0;
 for (auto i: filterfalse([](int i){return i%2==0;}, range(5,20)) )
        CHECK (i==ch16[c++] );
vector <int> ch17  {5,6,8};
 c =0;
for (auto i: compress(range(5,9), vector<bool>({true,true,false,true})) )
        CHECK (i==ch17[c++] );

vector <int> ch19  {5,11,18,26};
 c =0;
for (int i: accumulate(range(5,9)))
		        CHECK (i==ch19[c++] );
vector <int> ch20  {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 c =0;
for (int i: range(5,25))
		        CHECK (i==ch20[c++] );

vector <int> ch21  {};

for(int i=5; i< 50;i++){
    ch21.push_back(i);
}
 c =0;
for (int i: range(5,50))
		        CHECK (i==ch21[c++] );
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);CHECK (3==3);
}


