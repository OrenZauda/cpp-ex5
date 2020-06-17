
#pragma once
namespace itertools{

   template  <typename T, typename T2>

    class compress{
        public:
        T cont;
        T2 bools;
        using v1 = decltype(cont.begin());
        using v2 = decltype(*cont.begin());
        using v3 = decltype(bools.begin());

        class iterator{
            public:
            v1 ptr;
            v3 ind;
            v1 endd;
            T2 b;
            iterator(v1 cn, T2 bls,v1 r,v3 g ): endd(cn),b(bls),ptr(r), ind(g){

            }
            iterator(v1 s):ptr(s){

            }
            bool operator!=(iterator a){
                return ptr!=a.ptr;
            }
            iterator operator++(){
                ++ptr;
                ++ind;
                while (!(*ind)&&ptr!=endd){
                ++ptr;
                ++ind; 
                }
                return *this;
            }
               v2 operator*(){
               
                return *ptr;
            }
        };

        compress(T container,T2 b):cont(container),bools(b){};

        iterator begin(){
            iterator it{cont.end(),bools,cont.begin(),bools.begin()};
            return it;
        }
        iterator end(){
        iterator it{cont.end()};
        return it;
        };



    };

    

};
