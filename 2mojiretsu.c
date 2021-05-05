#include <stdio.h>
#include <string.h>

char *findfirst(char*str, char*sub) {
    char *a, *b;
    int i,m;
    if (*sub == 0) {
        return str;
    }
    for (; *str != 0; str += 1) {
        if (*str != *sub) {
            continue;
        }
       else if(*str==*sub){
          a=str; b=sub;m=0;
         for (i=0;*(b+i)!=0;i++){
           if (*(a+i)==*(b+i)){
             m=m+1;
             }
          } 
        }
       if(m==i){return a;} 
       else if(m!=i){continue;}
    }
    return NULL;
}


int main(int argc, char *argv[]) {
    char *s1, *s2, *s;

    s1 = argv[1];
    s2 = argv[2];
    if((s=findfirst(s1, s2))) {
        printf("%s\n", s);
    }
    else {
        printf("\n");
    }
    return 0;
}
