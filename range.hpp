#pragma once
#include <iostream>


namespace itertools{
    using namespace std;
    class range{

        public:
        
        class iterator{
            public:
            int ptr;
            bool operator!=(iterator a)  {
              //  cout<<"range!="<<endl;
                return (this->ptr!=a.ptr);
            }
            iterator& operator++(){
                this->ptr++;
                return *this;
            }
               int operator*(){
                  // cout<<"**range"<<endl;
                return this->ptr;
            }
        };

        public:

        int start;
        int last;
        iterator it;
        
        range(int _start, int _end){
           start= _start;
            last= _end;
        };

        iterator begin(){
            it.ptr=start;

            return it;
        }
        iterator end(){
         it.ptr=last;
         return it;
        };
        
       
        
    };

  

};