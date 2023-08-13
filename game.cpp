#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	
	int skor1,skor2;
	char player1,player2;
	
	skor1=0;
	skor2=0;
	
while (true) {
	printf("1-Tas\n");
	printf("2-Kagit\n");
	printf("3-Makas\n");
	
	
	printf("Oyuncu_1 secenegi : \n"); player1 = getch();
	
	system("cls");
	
	printf("1-Tas\n");
	printf("2-Kagit\n");
	printf("3-Makas\n");
	
	
	printf("Oyuncu_2 secenegi: \n"); player2 = getch();
	
	system("cls");
	
	if (player1=='1') {
		if(player2=='2') {
		
			printf("Oyuncu_2 kazandi!\n");
			printf("Oyuncu_1 secimi : tas  |  Oyuncu_2 secimi : kagit\n");
			skor2++;
		}
		else if (player2=='3') {
			printf("Oyuncu_1 kazandi!\n");
			printf("Oyuncu_1 secimi : tas  |  Oyuncu_2 secimi : makas\n");
			skor1++;
		}
		else {
			printf("Berabere!\n");
			printf("Oyuncu_1 secimi : tas  |  Oyuncu_2 secimi : tas\n");
		}
	}
	
	
	if (player1=='2') {
		if(player2=='1') {
		
			printf("Oyuncu_1 kazandi!\n");
			printf("Oyuncu_1 secimi : kagit  |  Oyuncu_2 secimi : tas\n");
			skor1++;
		}
		else if (player2=='3') {
			printf("Oyuncu_2 kazandi!\n");
			printf("Oyuncu_1 secimi : kagit  |  Oyuncu_2 secimi : makas\n");
			skor2++;
		}
		else {
			printf("Berabere!\n");
			printf("Oyuncu_1 secimi : kagit  |  Oyuncu_2 secimi : kagit\n");
		}
	}
	
	
	if (player1=='3') {
		if(player2=='2') {
		
			printf("Oyuncu_1 kazandi!\n");
			printf("Oyuncu_1 secimi : makas  |  Oyuncu_2 secimi : kagit\n");
			skor1++;
		}
		else if (player2=='1') {
			printf("Oyuncu_2 kazandi!\n");
			printf("Oyuncu_1 secimi : makas  |  Oyuncu_2 secimi : tas\n");
			skor2++;
		}
		else {
			printf("Berabere!\n");
			printf("Oyuncu_1 secimi : makas  |  Oyuncu_2 secimi : makas\n");
		}
	}
	
	if (skor1==5) {
	system("cls");
	printf("Oyuncu_1 kazandi ! | Skor 5-%d ",skor2);
	break;
 }
	if (skor2==5) {
		system("cls");
		printf("Oyuncu_2 kazandi ! | Skor %d-5 ",skor1);
		break;
	}
	
	
	
	
	
}




}