// find minimum cost to convert 3 x 3 matrix into magic square

#include<bits/stdc++.h>
using namespace std;
int ms1(int a[3][3]){
    int sum1 = 0;
    sum1  = abs(8-a[0][0]) + abs(3-a[0][1]) + abs(4-a[0][2]) + abs(1-a[1][0]) + abs(5-a[1][1]) + abs(9-a[1][2]) + abs(6-a[2][0]) + abs(7-a[2][1]) + abs(2-a[2][2]);
    return sum1;
    
}
int ms2(int a[3][3]){
    int sum2;
    sum2  = abs(6-a[0][0]) + abs(1-a[0][1]) + abs(8-a[0][2]) + abs(7-a[1][0]) + abs(5-a[1][1]) + abs(3-a[1][2]) + abs(2-a[2][0]) + abs(9-a[2][1]) + abs(4-a[2][2]);
    return sum2;
}
int ms3(int a[3][3]){
    int sum3;
    sum3  = abs(2-a[0][0]) + abs(7-a[0][1]) + abs(6-a[0][2]) + abs(9-a[1][0]) + abs(5-a[1][1]) + abs(1-a[1][2]) + abs(4-a[2][0]) + abs(3-a[2][1]) + abs(8-a[2][2]);
    return sum3;
}
int ms4(int a[3][3]){
    int sum4;
    sum4  = abs(4-a[0][0]) + abs(9-a[0][1]) + abs(2-a[0][2]) + abs(3-a[1][0]) + abs(5-a[1][1]) + abs(7-a[1][2]) + abs(8-a[2][0]) + abs(1-a[2][1]) + abs(6-a[2][2]);
    return sum4;
}
int ms5(int a[3][3]){
    int sum5;
    sum5  = abs(8-a[0][0]) + abs(1-a[0][1]) + abs(6-a[0][2]) + abs(3-a[1][0]) + abs(5-a[1][1]) + abs(7-a[1][2]) + abs(4-a[2][0]) + abs(9-a[2][1]) + abs(2-a[2][2]);
    return sum5;
}
int ms6(int a[3][3]){
    int sum6;
    sum6  = abs(6-a[0][0]) + abs(7-a[0][1]) + abs(2-a[0][2]) + abs(1-a[1][0]) + abs(5-a[1][1]) + abs(9-a[1][2]) + abs(8-a[2][0]) + abs(3-a[2][1]) + abs(4-a[2][2]);
    return sum6;
}
int ms7(int a[3][3]){
    int sum7;
    sum7 = abs(2-a[0][0]) + abs(9-a[0][1]) + abs(4-a[0][2]) + abs(7-a[1][0]) + abs(5-a[1][1]) + abs(3-a[1][2]) + abs(6-a[2][0]) + abs(1-a[2][1]) + abs(8-a[2][2]);
    return sum7;
}
int ms8(int a[3][3]){
    int sum8;
    sum8  = abs(4-a[0][0]) + abs(3-a[0][1]) + abs(8-a[0][2]) + abs(9-a[1][0]) + abs(5-a[1][1]) + abs(1-a[1][2]) + abs(2-a[2][0]) + abs(7-a[2][1]) + abs(6-a[2][2]);
    return sum8;
}
int main(){
    int a[3][3];
    for(int i  = 0 ; i<3 ; i++){
        for(int j =0 ; j<3 ; j++){
            cin>>a[i][j];
        }
    }
    int b[8] = {ms1(a), ms2(a) , ms3(a) , ms4(a), ms5(a) , ms6(a) , ms7(a) , ms8(a)};
    
   
    int min = INT_MAX;
    for(int i = 0 ; i<8 ; i++){
        if(min > b[i]){
            min = b[i];
        }
    }
    cout<<min;
    
     
 return 0;
}
