#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<string , int> TeamGoalDiff,TeamPoints;
bool cmp(string& a , string& b){
    if(TeamPoints[a] > TeamPoints[b]){
        return 1;
    }else if(TeamPoints[a]==TeamPoints[b]&&TeamGoalDiff[a]>TeamGoalDiff[b]){
          return 1;
    }  
    else{
        return 0;
    }
}

int main() {

	// your code goes here
	int testcases;
	cin >> testcases;
	for(int i = 0 ; i < testcases ; i++){
	    TeamGoalDiff.erase(TeamGoalDiff.begin() , TeamGoalDiff.end());
	    TeamPoints.erase(TeamPoints.begin() , TeamPoints.end());
	    set <string> Allteams;
	    for(int j = 0 ; j < 12 ; j++){
	        string team1,team2;
	        int team1Score , team2Score;
	        string vs;
	        cin>>team1>>team1Score>>vs>>team2Score>>team2;
	        Allteams.insert(team1);
	        if(TeamPoints.find(team1) == TeamPoints.end()){
	                TeamPoints.insert(make_pair(team1 , 0));
	                TeamGoalDiff.insert(make_pair(team1 , 0));
	        }
	        if(TeamPoints.find(team2) == TeamPoints.end()){
	                TeamPoints.insert(make_pair(team2 , 0));
	                TeamGoalDiff.insert(make_pair(team2 , 0));
	        }
	        if(team1Score > team2Score){
	            TeamPoints[team1] += 3;
	        }else if(team1Score == team2Score) {
	            TeamPoints[team1] += 1;
	            TeamPoints[team2] += 1;
	        }else{
	            TeamPoints[team2] += 3;
	        }
	        TeamGoalDiff[team1] += team1Score - team2Score;
	        TeamGoalDiff[team2] += team2Score - team1Score;
	    }
	    vector<string> SortedTeam(Allteams.begin() , Allteams.end());
	    sort(SortedTeam.begin() , SortedTeam.end() , cmp);
	    cout<<SortedTeam[0]<<" "<<SortedTeam[1]<<endl;
	}
	return 0;
}