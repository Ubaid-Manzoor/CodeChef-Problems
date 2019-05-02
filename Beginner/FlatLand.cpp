#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;

bool isPerfectSquare(int num){
    float actuallNum = sqrt(num);
    int afterTypeCast = (int)(actuallNum);
    if(actuallNum > afterTypeCast){
        return 0;
    }
    return 1;
}

int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	for(int i = 0 ; i < testcases ; i++){
	    int numberOfCircles;
	    cin>>numberOfCircles;
	    int j = numberOfCircles;
	    int numberOfSquare = 0;
	    while(j > 0){
	        if(isPerfectSquare(j)){
	            numberOfSquare += 1;
	            j = numberOfCircles - j; 
	            numberOfCircles = j;
	        }else{
	            j--;
	        }
	    }
	    cout<<numberOfSquare<<endl;
	}
	return 0;
}
