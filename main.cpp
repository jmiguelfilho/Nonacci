//
//  main.cpp
//  Nonacci
//
//  Created by João Miguel on 11/07/20.
//  Copyright © 2020 João Miguel. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

template <int N>

class Nonacci{
public:
    
    ostream *pos;//Único atributo 
    Nonacci(): pos(NULL){
        
    }
    int termo(int v){
        
        if(v<=N)
            return 1;
        
        else
        {
            int acum =0;
            for(int i=N; i>=1; i--)
                acum+=termo(v -i);
            return acum;
        }
    }
    ostream& operator<<(int v){
        
        if(!pos)
            return cout;// (Throw Exception)
        
        return *pos<< termo(v);
    }
    
};

template<int N>
Nonacci<N>& operator<<(ostream& os, Nonacci<N> &ldo)
{
    ldo.pos = &os;
    return ldo;
}


int main(int argc, const char * argv[]) {
    
    Nonacci<4> X;
    int v=6;
    
    cout << X << v << endl;
  
    return 0;
}
