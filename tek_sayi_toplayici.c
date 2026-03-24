#include <stdio.h>

int main(){
	short sayac=0;
	int sayi=0;
	int toplam=0;
	int onay=0;
	
	for(sayac=1; sayac<=10; sayac++){
		printf("%d. tam sayiyi girin",sayac);
		scanf("%d",&sayi);
		if(sayi%2==1 || sayi%2==-1){
			printf("Bu bir tek sayi. Onaylamak icin pozitif bir sayi yazin");
			scanf("%d",&onay);
			if(onay>0){
				toplam=toplam+sayi;
			}
		}
	}
	printf("Toplam=%d",toplam);
	
	return 0;
	
}
