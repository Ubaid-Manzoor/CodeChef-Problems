#include <iostream>
#include <math.h>
#include <set>
#include <typeinfo>
using namespace std;


int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	for(int i = 0 ; i < testcases ; i++){
	    set<int> setOfPositions;
	    
	    int N,X;
	    cin>>N>>X;
	    
	    string commands;
	    cin>>commands;
	    
	    setOfPositions.insert(X);
	    for(int j = 0 ; j < commands.size() ; j++){
	        if(commands[j] == 'L'){
	            X--;
	        }else{
	            X++;
	        }
	        setOfPositions.insert(X);
	    }
	    cout<<setOfPositions.size()<<endl;
	}
	
    
	return 0;
}
