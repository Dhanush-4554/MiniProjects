#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<char> flames ={'F','L','A','M','E','S'};

    string name1;
    string name2;
    string crush;
    string unique;
    
    int n;

    int choice;
    cout<<"\n\tFLAMES\nChoice-1: Enter 1 to Play the game\nChoice-2: Enter 0 to exit game\n";

    cin>>choice;
    
    int a = 1;
    if(choice==1){
            cout<<"\n\nEnter your name: ";
            cin>>name1;
            cout<<"Enter your crush name: ";
            cin>>name2;
            for(int i =0; i<name2.size();i++){
                crush.push_back(name2[i]);
            }

            for(int i =0; i<name1.size();i++){
                tolower(name1[i]);
            }
            for(int i =0; i<name2.size();i++){
                tolower(name2[i]);
            }
            for(int i =0; i<name1.size();i++){
                for(int j =0; j<name2.size();j++){
                    if(name1[i]==name2[j]){
                        name1[i]=name2[j]='0';
                    }
                }
            }
            for(int i =0; i<name1.size();i++){
                if(name1[i]!='0'){
                    unique.push_back(name1[i]);
                }
            }
            for(int i =0; i<name2.size();i++){
                if(name2[i]!='0'){
                    unique.push_back(name2[i]);
                }
            }
            n = unique.size(); 
            for(int i =0, index =0; flames.size()>1; i++){
                index = (index+n-1)%flames.size();
                flames.erase(flames.begin()+index);
            }
            switch(flames[0]){
                case 'F':
                        cout<< "\n\nCongragulations! " << crush <<  " is your FRIEND !!\n\n";
                        break;
                case 'L':
                        cout <<"\n\nCongragulations! " << crush <<  " is in LOVE with YOU !!\n\n";
                        break;
                case 'A':
                        cout << "\n\nyes! "<< crush << " is ATTRACTED towards you !!\n\n";
                        break;
                case 'M':
                        cout << "\n\nCongragulations! YOU and "<< crush << " Will get MARRIED. Start your Family planning!!\n\n";
                        break;
                case 'E':
                        cout<< "\n\nWARNING: "<< crush << " will be your ENEMY!! Be AWARE\n\n";
                        break;
                case 'S':
                        cout << "\n\nhehe! flames says You both are SIBLINGS\n\n";
                        break;
            }
    }
    else{
         cout<<"\nThanks For Coming!\nshare your experience with your friends\nHave a Good Day :)\n\n";
    }
    return 0;
}