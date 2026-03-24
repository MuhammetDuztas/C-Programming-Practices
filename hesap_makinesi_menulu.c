#include <stdio.h>

int main(){
	float sonuc=0.0;
	float sayi1=0.0;
	float sayi2=0.0;
	int menu=0;
	while(menu!=5){
		printf("\n1. ve 2. sayiyi giriniz");
		scanf("%f %f",&sayi1,&sayi2);
		printf("Menu seciniz \n1.Toplama \n2.Cikarma \n3.carpma \n4.bolme \n5.Programdan cikis");
		scanf("%d",&menu);
		if(menu==1){
			sonuc=sayi1+sayi2;
		}
		else if(menu==2){
			sonuc=sayi1-sayi2;
		}
		else if(menu==3){
			sonuc=sayi1*sayi2;
		}
		else if(menu==4){
			sonuc=sayi1/sayi2;
		}
		else if(menu!=5){
			printf("Yanlis menu degeri girdiniz");
		}
		else{
			printf("programdan ciktiniz");
		}
		if(menu<5 && menu>=1){
			printf("sonuc = %f",sonuc);
		}
	}
	return 0;
}
