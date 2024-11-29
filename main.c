//
#include<stdio.h>
#include<stdlib.h>
void menu(int i);
void select_account(float balance[5],char account[5][5]);
void deposite(float balance[5]);
void withdraw(float balance[5]);
void check_rate_money(float balance[5]);
void transfer_money(float balance[5]);
void end_program();
main(){
	int select=0,i,j;
	float balance[5];
	char account[5][5];
	printf(" ===================================\n\n");
	printf(" \t    ATM BANKING\n\n");
	printf(" ===================================\n");
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
	printf(" Input your number account: ");
	scanf("%s",&account[i][j]);
	printf(" Input your money: ");
	scanf("%f",&balance[i]);
	system("cls");
	}
	printf(" ===================================\n\n");
	printf(" \t    ATM BANKING\n\n");
	printf(" ===================================\n");
	}
	select_account(balance,account);
	printf(" Your balance: %.2f\n",balance[5]);
	printf(" -----------------------------------\n");
	printf(" Select menu: ");
	scanf("%d",&select);
	
	if(select==1){
		deposite(balance);
	}
	else if(select==2){
		withdraw(balance);
	}
	else if(select==3){
		check_rate_money(balance);
	}
	else if(select==4){
		transfer_money(balance);
	}
	else if(select==5){
		end_program();
	}
}

void select_account(float balance[5],char account[5][5]){
	int out=0,number,password;
	printf(" Please input your banking number: ");
	scanf("%d",&number);
	if(number==00001){
		printf(" Hello! Mr.Nobi\n Please enter your 4 Number of password: ");
		scanf("%d",&password);
		printf(" Your balance is %.2f",balance[0]);
		balance[5]+=balance[0];
	}
	else if(number==00002){
		printf(" Hello! Mr.Dekituski\n Please enter your 4 Number of password: ");
		scanf("%d",&password);
		printf(" Your balance is %.2f",balance[1]);
		balance[5]+=balance[1];
	}
	else if(number==00003){
		printf(" Hello! Miss Shisuka\n Please enter your 4 Number of password: ");
		scanf("%d",&password);
		printf(" Your balance is %.2f",balance[2]);
		balance[5]+=balance[2];
	}
	else if(number==00004){
		printf(" Hello! Mrs. Rena\n Please enter your 4 Number of password: ");
		scanf("%d",&password);
		printf(" Your balance is %.2f",balance[3]);
		balance[5]+=balance[3];
	}
	else if(number==00005){
		printf(" Hello! Miss Takeda\n Please enter your 4 Number of password: ");
		scanf("%d",&password);
		printf(" Your balance is %.2f",balance[4]);
		balance[5]+=balance[4];
	}
	else{
		printf(" No this number account in system.");
	}
	do{
	printf("\n ");
	system("pause");
	system("cls");
	printf(" ===================================\n\n");
	printf(" \t    ATM BANKING\n\n");
	printf(" ===================================\n");
	printf(" 1.Deposite\n 2.Withdraw\n 3.Check rate of money\n 4.Transfer money\n 5.End program\n");
	printf(" -----------------------------------\n");
	}while(out!=0);
}
void deposite(float balance[5]){
	float deposite;
	printf(" Please input your deposite: ");
	scanf("%f",&deposite);
	balance[5]+=deposite;
	printf(" Your balance: %2.f",balance[5]);
	printf("\n -----------------------------------\n");
}
void withdraw(float balance[5]){
	float withdraw;
	printf(" Please input your withdraw: ");
	scanf("%f",&withdraw);
		if(withdraw>balance[5])
			printf(" ERROR!! Your money isn't enoung for withdraw!!\n");
		else
			balance[5]-=withdraw;
			printf(" Your balance: %.2f\n",balance[5]);
}
void check_rate_money(float balance[5]){
	int number;
	float uk=40.38,usa=30.62,eur=35.12,jpy=2.78,hkd=4.47,sgd=23.04;
	printf(" 1.UK:  40.38\n 2.EUR: 35.12\n 3.USA: 30.62\n 4.SGD: 23.04\n 5.HKD: 4.47\n 6.JPY: 2.78\n");
	printf("\n -----------------------------------\n");
	printf(" Please,Enter number 1-5 each regions,if you want to transfer money \n and Enter 7 for don't want to transfer money.\n");
	printf(" Enter number: ");
	scanf("%d",&number);
	if(number==1){
		balance[5]/=uk;
		printf(" Your balance in UK: %.2f",balance[5]);
	}
	else if(number==2){
		balance[5]/=eur;
		printf(" Your balance in USA: %.2f",balance[5]);
	}
	else if(number==3){
		balance[5]/=usa;
		printf(" Your balance in USA: %.2f",balance[5]);
	}
	else if(number==4){
		balance[5]/=sgd;
		printf(" Your balance in USA: %.2f",balance[5]);
	}
	else if(number==5){
		balance[5]/=hkd;
		printf(" Your balance in USA: %.2f",balance[5]);
	}
	else if(number==6){
		balance[5]/=jpy;
		printf(" Your balance in USA: %.2f",balance[5]);
	}
	else if(number==7){
		printf(" -----------------------------------\n");
	}
}
void transfer_money(float balance[5]){
	int number;
	float transfer;
	printf(" Please...Enter number of account who's you want to transfer: ");
	scanf("%d",&number);
	if(number==1){
		printf(" Input your money to transfer: ");
		scanf("%f",&transfer);
		if(transfer>balance[5])
			printf(" ERROR!! Your money isn't enoung for transfer!!");
		else{
		balance[5]-=transfer;
		balance[0]+=transfer;
		printf(" Your balance: %.2f",balance[5]);
		}
	}
	
	else if(number==2){
		printf(" Input your money to transfer: ");
		scanf("%f",&transfer);
		if(transfer>balance[5]){
			printf(" ERROR!! Your money isn't enoung for transfer!!");
		}
		else{
		balance[5]-=transfer;
		balance[1]+=transfer;
		printf(" Your balance: %.2f",balance[5]);
		}
	}
	else if(number==3){
		printf(" Input your money to transfer: ");
		scanf("%f",&transfer);
		if(transfer>balance[5]){
			printf(" ERROR!! Your money isn't enoung for transfer!!");
		}
		else{
		balance[5]-=transfer;
		balance[2]+=transfer;
		printf(" Your balance: %.2f",balance[5]);
		}
		
	}
	else if(number==4){
		printf(" Input your money to transfer: ");
		scanf("%f",&transfer);
		if(transfer>balance[5]){
			printf(" ERROR!! Your money isn't enoung for transfer!!");
		}
		else{
		balance[5]-=transfer;
		balance[3]+=transfer;
		printf(" Your balance: %.2f",balance[5]);
		}
		
	}
	else if(number==5){
		printf(" Input your money to transfer: ");
		scanf("%f",&transfer);
		if(transfer>balance[5]){
			printf(" ERROR!! Your money isn't enoung for transfer!!");
		}
		else{
		balance[5]-=transfer;
		balance[4]+=transfer;
		printf(" Your balance: %.2f",balance[5]);
		}
	}

}
void end_program(){
	printf(" -----------------------------------\n");
	printf("\t--- Thank you ---");
}
