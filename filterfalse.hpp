#pragma once
//#include <boost/function.hpp>
#include <vector>
namespace itertools{

        template <typename T,typename T1> 

    class filterfalse{
        
        T container;
        using v1= decltype(container.begin());
        using v2= decltype(*(container.begin()));
        T1 fun2;

        class iterator{
            public:
            v1 ptr;
            v1 endd;
            T1 f2;
            T c;

           
            iterator(v1 it, T1 a,T cn,v1 e):ptr(it),f2(a),c(cn),endd(e){

            }
            iterator(v1 it,T cc):ptr(it),c(cc){
                
            }
            bool operator!=(iterator a){
               

                return ptr!=a.ptr;
            }
            iterator operator++(){
                ++ptr;

                while(f2(*ptr)&&(ptr!=endd)){
                    ++ptr;
                }
                

               
               return *this;
            }
               
            v2 operator*(){
            
                return *ptr;
            }
        };
        public:
       

        filterfalse(T1 strct,T cont):container(cont),fun2(strct){
        };
        
        

        iterator begin(){
            iterator it{container.begin(),fun2,container,container.end()};

            return it;

            
        }
        iterator end(){
        iterator it{container.end(),fun2,container,container.end()};
         return it;
        };


    };

  

};
