#include<stdio.h>
int fabonnaci(int);




int main()
{
    int i,number,result;
    printf("the num of for writting fabo series");
    scanf("%d",&number);
    for(i=0;i<number;i++){
     result=fabonnaci(i);
    printf("\nfab=%d\n",result);}
    return 0;
}
int fabonnaci(num){
    if(num==0||num==1)
    return num;
    else 
    return fabonnaci(num-1)+fabonnaci(num-2);
    }
