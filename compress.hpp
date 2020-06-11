#pragma once
namespace itertools{

    class compress{
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
        compress(T container, std::vector <bool> b){};

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
