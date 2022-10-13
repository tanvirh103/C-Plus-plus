        ///2d Array intput from User///

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your 2D array row size:";
    int i,j;
    cin>>i;
    cout<<"Enter your 2D array Column size: ";
    cin>>j;
    int array[i][j];
    cout<<"Enter your array element:";
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>array[x][y];
        }
    }
    cout<<"Your 2D array Element:"<<endl;
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cout<<array[x][y]<<"\t";
        }
        cout<<endl;
    }
    
