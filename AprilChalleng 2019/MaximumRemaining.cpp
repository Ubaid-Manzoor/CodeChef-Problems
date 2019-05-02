#include <iostream>
#include <math.h>
#include <typeinfo>
#include<set>
using namespace std;



int main() {
	// your code goes here
	int testcases;
    cin>>testcases;
    
    set<int> Sequence;
    for(int i = 0 ; i < testcases ;i++){
        int number;
        cin>>number;
        Sequence.insert(number);
    }
    
    set<int>::reverse_iterator itr;
    itr = Sequence.rbegin();
    int largestValue  = *itr;
    int SecondLargest = *(++itr);
    cout<<SecondLargest%largestValue<<endl;
	return 0;
}
