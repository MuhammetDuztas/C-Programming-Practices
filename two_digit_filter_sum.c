#include <stdio.h>

int main(){
int sayi=0;
int sayac=0;
int toplam1=0;
int toplam2=0;
printf("iki basamakli tam sayilari girin");
for(sayac=1; sayac<21; sayac++){

	printf("\n%d. tam sayiyi girin: ",sayac);
	scanf("%d",&sayi);
	if(sayi>=10 && sayi<100){
		if(sayi%2==1){
			toplam1=toplam1+sayi;
		}
		else{
			toplam2=toplam2+sayi;
		}
	}
}
	printf("Tek sayilarin toplami =%d",toplam1);
	printf("\nCift sayilarin toplami =%d",toplam2);
	
	return 0;
}
