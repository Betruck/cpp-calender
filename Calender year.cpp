#include<iostream>
using namespace std;

int year(int month){

switch(month) {
  case 1:
    for(int i = 1; i <= 31; i++){
        cout << i << "\t";
        if(i % 7 == 0){
            cout << endl;
        }
    }
    break;
  case 2:
    for(int i = 1; i <= 30; i++){
        cout << i << "\t";
        if(i % 7 == 0){
            cout << endl;
        }
    }
    break;
  case 3:
    for(int i = 1; i <= 28; i++){
        cout << i << "\t";
        if(i % 7 == 0){
            cout << endl;
        }
    }
    break;
  case 4:
    for(int i = 1; i <= 29; i++){
        cout << i << "\t";
        if(i % 7 == 0){
            cout << endl;
        }
    }
}
}

int main(){
    int cou = 0;
    for(int i=0; i < 5; i++){
        cou++;
        if(cou == 3){
            year(3);
            cout << endl << endl;
            i--;
        }
        if(cou == 8){ i--; }
        year(i);
        cout << endl << endl;
        if(i == 2){
            i = 0;
        }
        if(cou == 12){
            break;
        }
    }
}
