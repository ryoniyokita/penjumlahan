#include <stdio.h>
#include <conio.h>
int main(){
	
	int jml;
	int hpl, total;
	
	printf("jumlah copy A4 / : ");
	scanf("%i", &jml);
	if (jml<50) hpl= 120;
	else
	if (jml>150) hpl= 120;
	else hpl= 110;
	
	total = hpl*jml;
	printf("harga perlembar: Rp%d\n", hpl);
	printf("total harga: Rp%d", total);
	
	return 0;
}
