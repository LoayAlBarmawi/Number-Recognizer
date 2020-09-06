#include<stdio.h>
int main (){
    int num[8][8]={

    };
   int h=checkhorizontal(num);
   int v=checkvertical(num);
   int d=checkdiagonal(num);
   int id=checkinversediagonal(num);
   printf("h=%d v=%d d=%d id=%d\n",h,v,d,id);
   if(v==1&&h==0&&d==0&&id==0){
       printf("1");
   }
   if(v==0&&h==2&&d==0&&id==1){
       printf("2");
   }
   if(v==1&&h==2&&d==0&&id==1){
       printf("3");
   }
   if(v==1&&h==1&&d==0&&id==1){
       printf("4");
   }
   if(v==3&&h==3&&d==0&&id==0){
       printf("5");
   }
   if(v==2&&h==3&&d==0&&id==0){
       printf("6");
   }
   if(v==1&&h==3&&d==0&&id==0){
       printf("7");
   }if(v==2&&h==3&&d==1&&id==0){
       printf("8");
   }if(v==4&&h==4&&d==0&&id==0){
       printf("9");
   }
}
int checkhorizontal(int x[][8]){
    int lc=0,hc=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(x[i][j]==1){
                hc++;
            }
            else{
               if(hc>=3){
                   lc++;
                   hc=0;
               }
               else{
                   hc=0;
               }
            }
        }
    }
    return lc;
}
int checkvertical(int x[][8]){
    int lc=0,vc=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(x[j][i]==1){
                vc++;
            }
            else{
               if(vc>=3){
                   lc++;
                   vc=0;
               }
               else{
                   vc=0;
               }
            }
        }
    }
    return lc;
}
int checkdiagonal(int x[][8]){
    int lc=0,dc=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==j){
                if(x[i][j]==1){
                dc++;
                }
            else{
               if(dc>=3){
                   lc++;
                   dc=0;
               }
               else{
                   dc=0;
               }
            }}
        }
    }
    return lc;
}
int checkinversediagonal(int x[][8]){
    int lc=0,idc=0;
    for(int i=0;i<8;i++){
        for(int j=7;j>0;j--){
            if(i+j==7){
                if(x[i][j]==1){
                idc++;
                }
            else{
               if(idc>=3){
                   lc++;
                   idc=0;
               }
               else{
                   idc=0;
               }
            }}
        }
    }
    return lc;
}
