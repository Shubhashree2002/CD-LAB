#include<stdio.h>
#include<stdlib.h>
int isKeyword(char s[]){
    char kw[7][10]={"int","float","char","bool","printf","if","else"};
    int i=0;
    for(i=0;i<7;i++){
        if(strcmp(s,kw[i]) == 0)
        return 1;
    }
    return 0;
}
int isConstant(char s[]){
    char cons[2][10]={"#define","const"};
    int i=0;
    for(i=0;i<7;i++){
        if(strcmp(s,cons[i]) == 0)
        return 1;
    }
    return 0;
}

int main(){
    char inp[100];
    printf("Enter the Statement: ");
    gets(inp);
    char mod[100];
    int i=0;
    while(inp[i]!=' ' && inp[i]!='\0'){
        mod[i]=inp[i];
        i+=1;
    }
    mod[i]='\0';
    i++;
    char con[10];
    if(isConstant(mod)){
        int j=0;
        while(inp[i]!='='){
            con[j]=inp[i];
            i++;
            j++;
        }
        con[j]='\0';
        printf("%s is a Constant\n",con);
    }else if(isKeyword(mod)){
        printf("%s is a Keyword\n",mod);
    }else{
    printf("not a keyword or constant");
    }
    
    return 0;
}
