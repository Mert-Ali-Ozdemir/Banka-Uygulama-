#include <stdio.h>
#include <math.h>
int main() {
 

  int bakiye,tutar,cek;
  int islem;
  bakiye=5000;

  printf("Lutfen yapmak istediginiz islemi seciniz.\nPara Yatirmak icin:1\nPara Cekmek icin:2\nBakiye Sorgulamak icin:3\n"); scanf("%d.",&islem);

  switch(islem) {
    case 1:
    printf("Yatirmak istediginiz tutari giriniz:"); scanf("%d",&tutar);
    bakiye=tutar+bakiye;  
    printf("Yeni bakiyeniz %d.",bakiye);
    break;
    case 2: printf("Cekmek istediginiz tutari giriniz:"); scanf("%d",&tutar);
    if(tutar>5000){
        printf("Yetersiz Bakiye\n");
        
    }
    else{
        bakiye=bakiye-tutar;
        printf("Guncel bakiye %d dir.",bakiye);
    }
    
    break;
    


    case 3:
    printf("Guncel bakiye %d dir.",bakiye);
  }
  



    return 0;
}