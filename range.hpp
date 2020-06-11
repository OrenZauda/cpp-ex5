#pragma once


namespace itertools{

    class range{

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

        int start;
        int last;
        iterator it;
        
        range(int _start, int _end){
           start= _start;
            last= _end;
        };

        iterator begin(){
            it.ptr=&start;
            return it;
        }
        iterator end(){
         it.ptr=&last;
         return it;
        };
        
       
        
    };

  

};