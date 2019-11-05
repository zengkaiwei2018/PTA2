//
//  main.c
//  PTA2
//
//  Created by s20181105306 on 2019/11/5.
//  Copyright © 2019 s20181105306. All rights reserved.
//

#include<stdio.h>
int main(){
    int a[10]={0},n,i,j,num,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        while(num){
            a[num%10]++;
            num/=10;
        }
    }
    for(i=0;i<10;i++)
        if(max<a[i])
            max=a[i];
    printf("%d:",max);
    for(i=0;i<10;i++)
        if(max==a[i])
            printf(" %d",i);
    return 0;
}
