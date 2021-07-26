#include <iostream>
#include <windows.h>
using namespace std;
const int row=3;
const int col=3;
int arr[row][col];
bool check_at_that_position(int a,int b){
    if (arr[a][b]==0 || arr[a][b]==1){
        return true;
    }
    return false;
}
bool game_ended(){
    int num=2;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (arr[i][j]==num){
                return false;
            }
            num++;
        }
    }
    return true;
}
bool player_1_won(){
    int sum=0;
    for (int i=0;i<3;i++){
        sum=0;
        for (int j=0;j<3;j++){
            if (arr[i][j]==1){
                sum++;
            }
        }
        if (sum==3){
            return true;
        }
    }
    int sum1=0;
    for (int i=0;i<3;i++){
        sum1=0;
        for (int j=0;j<3;j++){
            if (arr[j][i]==1){
                sum1++;
            }
        }
        if (sum1==3){
            return true;
        }
    }
    if (arr[0][0]==1 && arr[1][1]==1 && arr[2][2]==1){
        return true;
    }
    if (arr[0][2]==1 && arr[1][1]==1 && arr[2][0]==1){
        return true;
    }
    return false;
}
bool player_0_won(){
    for (int i=0;i<3;i++){
        int sum=0;
        for (int j=0;j<3;j++){
            if (arr[i][j]==0){
                sum++;
            }
        }
        if (sum==3){
            return true;
        }
    }
    for (int i=0;i<3;i++){
        int sum=0;
        for (int j=0;j<3;j++){
            if (arr[j][i]==0){
                sum++;
            }
        }
        if (sum==3){
            return true;
        }
    }
    if (arr[0][0]==0 && arr[1][1]==0 && arr[2][2]==0){
        return true;
    }
    if (arr[0][2]==0 && arr[1][1]==0 && arr[2][0]==0){
        return true;
    }
    return false;
}
void print(){
    cout<<"\t\t\t\tTIC TAC TOE GAME"<<endl;
    cout<<"\t\tTWO PLAYERS"<<endl;
    cout<<"\t\tPLAYER[X]-->1"<<endl;
    cout<<"\t\tPLAYER[Y]-->0"<<endl;
    cout<<"\t\t\t\t   |   |   "<<endl;
    cout<<"\t\t\t\t"<<arr[0][0]<<"  | "<<arr[0][1]<<" | "<<arr[0][2]<<" "<<endl;
    cout<<"\t\t\t\t___|___|___"<<endl;
    cout<<"\t\t\t\t   |   |   "<<endl;
    cout<<"\t\t\t\t"<<arr[1][0]<<"  | "<<arr[1][1]<<" | "<<arr[1][2]<<" "<<endl;
    cout<<"\t\t\t\t___|___|___"<<endl;
    cout<<"\t\t\t\t   |   |   "<<endl;
    cout<<"\t\t\t\t"<<arr[2][0]<<"  | "<<arr[2][1]<<" | "<<arr[2][2]<<" "<<endl;
    cout<<"\t\t\t\t   |   |   "<<endl;
}
int main(){
    int num=2;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arr[i][j]=num;
            num++;
        }
    }
    bool chance=false;
    while (true){
        system("cls");
        print();
        chance=!chance;
        if (chance){
            cout<<"\t\tPLAYER [1] TURN"<<endl;
            int choice;
            cin>>choice;
            switch (choice){
                case 2:
                    if (check_at_that_position(0,0)){
                        if (arr[0][0]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][0]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 3:
                    if (check_at_that_position(0,1)){
                        if (arr[0][1]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][1]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 4:
                    if (check_at_that_position(0,2)){
                        if (arr[0][2]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][2]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 5:
                    if (check_at_that_position(1,0)){
                        if (arr[1][0]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][0]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 6:
                    if (check_at_that_position(1,1)){
                        if (arr[1][1]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][1]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 7:
                    if (check_at_that_position(1,2)){
                        if (arr[1][2]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][2]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 8:
                    if (check_at_that_position(2,0)){
                        if (arr[2][0]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][0]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 9:
                    if (check_at_that_position(2,1)){
                        if (arr[2][1]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][1]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 10:
                    if (check_at_that_position(2,2)){
                        if (arr[2][2]==0){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][2]=1;
                        if (player_1_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 1 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                default:
                    cout<<"ENTER A VALID OPTION..."<<endl;
                    chance=!chance;
                    Sleep(2000);
                    break;
            }
        }
        else {
            cout<<"\t\tPLAYER [0] TURN"<<endl;
            int choice;
            cin>>choice;
            switch (choice){
                case 2:
                    if (check_at_that_position(0,0)){
                        if (arr[0][0]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][0]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 3:
                    if (check_at_that_position(0,1)){
                        if (arr[0][1]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][1]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 4:
                    if (check_at_that_position(0,2)){
                        if (arr[0][2]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[0][2]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 5:
                    if (check_at_that_position(1,0)){
                        if (arr[1][0]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][0]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 6:
                    if (check_at_that_position(1,1)){
                        if (arr[1][1]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][1]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 7:
                    if (check_at_that_position(1,2)){
                        if (arr[1][2]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[1][2]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 8:
                    if (check_at_that_position(2,0)){
                        if (arr[2][0]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][0]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 9:
                    if (check_at_that_position(2,1)){
                        if (arr[2][1]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][1]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                case 10:
                    if (check_at_that_position(2,2)){
                        if (arr[2][2]==1){
                            cout<<"YOUR OPPONENTS NUMBER IS ALREADY PRESENT AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                        else {
                            cout<<"YOUR NUMBER IS ALREADY PLACED AT THE INDEX"<<endl;
                            chance=!chance;
                            Sleep(2000);
                            break;
                        }
                    }
                    else {
                        arr[2][2]=0;
                        if (player_0_won()){
                            system("cls");
                            print();
                            cout<<"\t\tPLAYER 0 WON THE MATCH..."<<endl;
                            cout<<"\t\tCONGRATULATIONS..."<<endl;
                            return 0;
                        }
                        if (game_ended()){
                            system("cls");
                            print();
                            cout<<"\t\tGAME DRAWN..."<<endl;
                            cout<<"\t\tGAME ENDED..."<<endl;
                            return 0;
                        }
                        break;
                    }
                default:
                    cout<<"ENTER A VALID OPTION..."<<endl;
                    chance=!chance;
                    Sleep(2000);
                    break;
            }
        }
    }
    return 0;
}