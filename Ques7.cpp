#include<iostream>
using namespace std;

int main(){
    int score1,score2,score3;
    cout<< " enter score1:";
    cin>> score1;
    cout<< " enter score2:";
    cin>> score2;
    cout<< " enter score3:";
    cin>> score3;

    if(score1 > score2 && score1 > score3){
        cout<< " player 1 is winer with score:"<< score1;
    }
    else if(score2 > score1 && score2 > score3){
        cout<< " player 2 is winer with score:"<< score2;
    }
    else{
        cout<< " player 3 is winer with score:"<< score3;
    }
    return 0;
}