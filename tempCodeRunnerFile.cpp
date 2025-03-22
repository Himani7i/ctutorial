#include <stdio.h>
#include <string.h>

int max(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int recurr(char*s1,char*s2, int x, int y, int count){
    if( x == 0 || y == 0){
        return count;
    }
    
    if(s1[x-1]==s2[y-1]){

    x--; 
    y--; 
    return recurr(s1, s2, x,y,count + 1);
    }
    else{
        int MAXX = max(recurr(s1, s2, x, y - 1, count), recurr(s1, s2, x - 1, y, count));
        return MAXX;
    
    }
   
}

int main(){
    char s1[100],s2[100];
    printf("enter first string:");
    scanf("%s", s1);
     printf("enter second string:");
    scanf("%s", s2);

    int x = strlen(s1);
    int y= strlen(s2);
    recurr(s1,s2,x,y,0);
    printf("%d",recurr(s1,s2,x,y,0));
    return 0;

}

