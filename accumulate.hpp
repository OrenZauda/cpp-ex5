#pragma once
namespace itertools{
    
    template <typename T> 

    class accumulate{

        public:
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

        iterator it;
        accumulate(T container){};
        accumulate(T container, int (*func) (int a, int b)){};

        iterator begin(){
            iterator it;
            return it;
        }
        iterator end(){
        iterator it;
         return it;
        };





    };

  
}
