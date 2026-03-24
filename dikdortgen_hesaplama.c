#include <stdio.h>


struct dikdortgen{
	int solustkosex;
	int solustkosey;
	int xuzunluk;
	int yuzunluk;
};
void sagaltkose(struct dikdortgen d){
	int sagx;
	int sagy;
	sagx=d.solustkosex+d.xuzunluk;
	sagy=d.solustkosey+d.yuzunluk;
	printf("Sag alt kose: %d,%d",sagx,sagy);
	
}
int alan(struct dikdortgen d){
	return d.xuzunluk*d.yuzunluk;
}
int main(){
	struct dikdortgen d[4];
	d[0].solustkosex=20;
	d[0].solustkosey=20;
	d[0].xuzunluk=50;
	d[0].yuzunluk=40;
	sagaltkose(d[0]);
	int a=alan(d[0]);
	printf("\nAlan=%d",a);
}

