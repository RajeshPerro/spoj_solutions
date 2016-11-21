/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * File: main.cpp
 * Author: rajesh
 *
 * Created on October 27, 2016, 02:54 PM
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * File: main.cpp
 * Author: rajesh
 *
 * Created on October 26, 2016, 10:36 PM
 */
#include<iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
char input_s[1000010];
int main(void){
 int i,num,curA=0,curB=0,previousA=0,previousB=0;
 scanf("%d",&num);
 scanf("%s",input_s);
 for(i=0;i<num;i++){
 char character = input_s[i];
 if(character == 'A'){
 curA = min(previousA,previousB+2);
 curB = min(previousA+1,previousB+1);
 }
 else{
 curA = min(previousB+1,previousA+1);
 curB = min(previousB,previousA+2);
 }
 previousB = curB;
 previousA = curA;
 }
 cout<<curA;
 return 0;
}
