#pragma once

#include <vector>
namespace itertools{

    class filterfalse{
       class iterator{
            public:
            int * ptr;
            bool operator!=(iterator a){
                return false;
            }
            iterator operator++(){
                iterator it = *this;
                it.ptr++;
                return it;
            }
               int operator*(){
               
                return 3;
            }
        };
        public:
        template <typename T> 
        filterfalse(bool (*func) (int a), T container){};
        template <typename T> 

        filterfalse(T strct, std::vector<int>  v){};
        
        

        iterator begin(){
            iterator it;
            return it;
        }
        iterator end(){
        iterator it;
         return it;
        };


    };

  

};
