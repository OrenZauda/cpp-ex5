#pragma once
#include <iostream>

namespace itertools{
    using namespace std;
    template <typename T> 
    
    
    class accumulate{
        
        public:
        
        T  c;
        using v1= decltype(c.begin());
        using v2= decltype(*(c.begin()));
        v2 (*func) (v2 a, v2 b) ;
        int flag;


        class iterator{
           
            public:
            v1 ptr;
            v2 acum ;
            int flag;
            v2 (*Fun) (v2 a, v2 b) ;
            iterator(v1 it, int fl):ptr(it),acum(*ptr),flag(fl){
                
            }  
            iterator(v1 it):ptr(it),acum(*ptr){

            }  

            iterator(v1 it,v2 (*f) (v2 a, v2 b),int fl):ptr(it),acum(*ptr),flag(fl){
                Fun=f;

            } 
        

            bool operator!=(iterator a){
                return ptr!=a.ptr;
            }
            auto operator++(){
                if(flag==1){
                    ++ptr;
                acum+=*ptr;
                }
                if(flag==2){
                    ++ptr;
                    acum= Fun(acum,*ptr);
                }
                return ptr;

                
            }
            
            v2 operator*(){
               
                return acum; 
               


            }
        };
        
        
        
        accumulate(T cont):c(cont){
        flag=1;
        }
        accumulate(T cont, v2 (*f)(v2 a, v2 b)):c(cont){
        func= f;

        flag=2;
        }
        
        auto begin(){
        iterator it{c.begin(),func,flag};
        return it;
        }

        auto end(){      
        iterator it{c.end()};
        return it;      
        }





    };
  
}
