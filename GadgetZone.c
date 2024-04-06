#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8
struct user{
	char fullName[50];
	char email[50];
	char password[50];
	char username[50];
	char phone[50];
};

void pay()
{
    int pay,card_no,card_exp,cvv,upi;
    lol:
    printf("\n\nHow would you like to pay you bill???\n\n");
    printf("1. Cash\n");
    printf("2. Credit OR Debit Card\n");
    printf("3. Online\n\n");
    printf("PAYMENT OPTION: ");
    scanf("%d",&pay);
    switch(pay)
    {
    case 1:
        printf("Purchase Successful !!!\n");
        printf("Your order will arrive soon\n");
        printf("Thanks for Purchasing <3 Please Visit Soon :)");
        break;
    case 2:
        printf("\nEnter Card details --->\n\n");
        printf("Enter Card Number: ");
        scanf("%d",&card_no);
        printf("\nEnter Expiry Date: ");
        scanf("%d",&card_exp);
        printf("\nEnter CVV: ");
        scanf("%d",&cvv);
        printf("\n\nPurchase Successful !!!\n");
        printf("Your order will arrive soon\n");
        printf("Thanks for Purchasing <3 Please Visit Soon :)\n");
        break;
    case 3:
        printf("Enter your UPI ID: ");
        scanf("%d",&upi);
        printf("\n\nPurchase Successful !!!\n");
        printf("Your order will arrive soon\n");
        printf("Thanks for Purchasing <3 Please Visit Soon :)\n");
        break;
    default:
        printf("Error, Please enter valid input");
    goto lol;
    }

}

void takeinput(char ch[50]){
	fgets(ch,50,stdin);
	ch[strlen(ch) - 1] = 0;
}

char generateUsername(char email[50],char username[50]){
	//abc123@gmail.com
	for(int i=0;i<strlen(email);i++){
		if(email[i] == '@') break;
		else username[i] = email[i];
	}
}

void takepassword(char pwd[50]){
	int i=0;
	char ch;
	while(1){
		ch = getch();
		if(ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		}else if(ch == BCKSPC){
			if(i=0){
				i--;
				printf("\b \b");
			}
		}else{
			pwd[i++] = ch;
			printf("* \b");
		}
	}
}

void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t   The Gadget Zone");
        printf("\n\t   -----------------");
        printf("\nDate:%s",date);
        printf("\nInvoice To: ");
        puts(name);
        printf("\n");
        printf("-----------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n---------------------------------------");
        printf("\n\n");
}
void generateBillBody(char item[50],int qty, int bill)
{

    printf("%s\t",item);
        printf("%d\t\t",qty);
        printf("%d\t\t",qty*bill);
        printf("\n");
}
void generateBillFooter(int total){
    printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float cgst=netTotal-(0.9*netTotal),grandTotal=netTotal + 2*cgst;//netTotal + cgst + sgst
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%d",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n---------------------------------------\n");
}

int function()
{
    int b1;
    printf("\n\n??? Would You Like To Shop Further ???\n\n");
                printf("1 = YES || 0 = NO  ----->  ");
                scanf("%d",&b1);
                return b1;
}
void headphones()
{
            printf("--------------------------------------\n");
            printf("|             Categories:-           |\n");
            printf("|------------------------------------|\n");
            printf("|1. Wired Earphones                  |\n");
            printf("|2. Neckbands                        |\n");
            printf("|3. Truly Wireless Earphones         |\n");
            printf("|4. Wired Headphones                 |\n");
            printf("|5. Wireless Headphones              |\n");
            printf("--------------------------------------\n");
}
void fridgecat()
{
            printf("-------------------------------------\n");
            printf("|             Categories:-          |\n");
            printf("|-----------------------------------|\n");
            printf("|1. 121-200L                        |\n");
            printf("|2. 201-231L                        |\n");
            printf("|3. 301-400L                        |\n");
            printf("-------------------------------------\n");
}
void main()
{

    int s23=0,m33=0,m13=0;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,o,phone;
    int q,ipt,ask_user,z,y,apple,SONY,high;
    int ask,app,mid_range,high_range,low_range;
    int boat_input,boat_low,last,tr;
    int n,qty,input,tv,fridge,ac,panasonic,voltas,bluestar;
    int boat_wired,boatNB,boat_wireless,boatWHP,boatWLHP,sony_wired,sonyNb,sony_wireless,sonyWHP,sonyWLHP,jbl_wired,jblNB,jbl_wireless,jblWHP,jblWLHP;
    int r,s,t,u,v,w,x,opt;
    int i14m=0,i14=0,i14p=0;
    int mi11=0,mi13p=0,pad=0;
    int m1=0,m2=0,pro=0;
    int TUF=0,ebook=0,vbook=0;
    int s15=0,intel15,s14=0;
    int boat100=0,boat220=0,boat105=0;
    int rockerz335=0,rockerz255=0,rockerz330=0;
    int air131=0,air141=0,air413=0;
    int boat900=0,boat1000=0,boat200=0;
    int rockerz450=0,rockerz558=0,rockerzPOLO=0;
    int MDR1=0,MDR2=0,MDR3=0;
    int wi1=0,wi2=0,wi3=0;
    int wf1=0,wf2=0,wf3=0;
    int s450=0,s110=0,s750=0;
    int wh1=0,wh2=0,wh3=0;
    int c50=0,c200=0,run=0;
    int tune1=0,tune2=0,tune3=0;
    int wave1=0,wave2=0,wave3=0;
    int q100=0,q300=0,q350=0;
    int BT510=0,BT710=0,BT650=0;
    int TCL1=0,TCL2=0,TCL3=0;
    int Toshiba1=0,Toshiba2=0,Toshiba3=0;
    int Bravia1=0,Bravia2=0,Bravia3=0;
    int W1=0,W2=0,W3=0,W4=0,W5=0,W6=0,W7=0,W8=0,W9=0;
    int L1=0,L2=0,L3=0,L4=0,L5=0,L6=0,L7=0,L8=0,L9=0;
    int H1=0,H2=0,H3=0,H4=0,H5=0,H6=0,H7=0,H8=0,H9=0;
    int Daikin1=0,Daikin2=0,Daikin3=0;
    int CG1=0,CG2=0,CG3=0;
    int Voltas1=0,Voltas2=0,Voltas3=0;

    int total=0;
        int bill=0;

        char date[30];
        system("color 0b");
	FILE *fp;
	int opt1,usrFound = 0;
	struct user user;
	char password2[50];
    printf("----------WELCOME TO THE GADGET ZONE !!!----------\t\t\t\n\n");
    start0:
	printf("\nPlease choose your operation: \n");
	printf("\n1.Signup");
	printf("\n2.Login");
	printf("\n3.Exit");

	printf("\n\nYour choice:\t");
	scanf("%d",&opt1);
	fgetc(stdin);
	char username[50],pword[50];
    struct user usr;
	switch(opt1){
		case 1:

			system("cls");
			printf("\nEnter your Full Name:\t");
			takeinput(user.fullName);

			printf("-----------------------------------------");
			printf("\nEnter your Email ID:\t");
			takeinput(user.email);
			printf("-----------------------------------------");
			printf("\nEnter your Contact No:\t");
			takeinput(user.phone);
			printf("-----------------------------------------");
			start1:
			printf("\nEnter your Password:\t");
			takepassword(user.password);
			printf("\n\nConfirm your Password:\t");
			takepassword(password2);

			if(!strcmp(user.password,password2)){
				generateUsername(user.email,user.username);
				fp = fopen("Users.dat","a+");
				fwrite(&user,sizeof(struct user),1,fp);
				if(fwrite != 0) {printf("\n\nUser registration success, Your username is %s \n",user.username);
				Sleep(3000);}
				else printf("\n\nSorry! Something went wrong :(");

				fclose(fp);
				system("cls");
			}
			else{
				printf("\n\n---XXXXX Password didn't match XXXXX---\n\nPlease Reenter your Password: \n");
				Beep(750,300);
				goto start1;
			}
		break;

		case 2:
            login:
			printf("\nEnter your username:\t");
			takeinput(username);

			printf("-----------------------------------------");
			printf("\nEnter your password:\t");
			takepassword(pword);

			fp = fopen("Users.dat","r");

			while(fread(&usr,sizeof(struct user),1,fp)){
				if(strcmp(usr.username,username)==0){
					if(strcmp(usr.password,pword)==0){


					}
					else {
						printf("\n\nInvalid Password!");
						Beep(800,300);
						goto login;
					}
					usrFound = 1;
				}
			}

			fclose(fp);
			break;

		case 3:
			printf("\nGoodBye, Hope You Enjoyed! See you soon :)\n");

        default:
            printf("\nInvalid Input, Try Again \n");
            goto start0;

	}
    char name[50];

    start:
    system("cls");
    printf("----------WELCOME TO THE GADGET ZONE !!!----------\t\t\t\n\n");
    printf("|------------------------------|\n");
    printf("| Press 1 for SmartPhones      |\n");
    printf("| Press 2 for Laptops          |\n");
    printf("| Press 3 for HeadPhones       |\n");
    printf("| Press 4 for Televisions      |\n");
    printf("| Press 5 for Refridgerators   |\n");
    printf("| Press 6 for Air Conditioners |\n");
    printf("|------------------------------|\n\n");
    printf("Enter : ");
    scanf("%d",&input);

   switch(input)
   {
    case 1:
    if(input==1)
    {
        system("cls");
        printf("\nTop Mobile Brands: \n");
        printf("                        _______\n");
        printf("-----------            |-------|\n");
        printf("1. SAMSUNG             |       |\n");
        printf("-----------            |       |\n");
        printf("2. APPLE               |       |\n");
        printf("-----------            |       |\n");
        printf("3. XIAOMI              |_______|\n");
        printf("-----------            |___O___| \n\n");
        printf("Enter : ");
        scanf("%d",&phone);
        if(phone==1)
        {
            int samsung;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Samsung Galaxy S23 5G :--\n\n Price: Rs.79,999\n Colour: Green\n RAM: 8GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Samsung Galaxy M33 5G :--\n\n Price: Rs.17,999\n Colour: Deep Ocean Blue\n RAM: 6GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Samsung Galaxy M13 :--\n\n Price: Rs.12,999\n Colour: Aqua Green\n RAM: 6GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&samsung);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(samsung)
            {
                case 1:
                     s23++;
                a=function();
                if(a==1)
                {

                    goto start;
                }
                else if(a==0)
                {
                    goto end;

                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                    m33++;
                bill=bill+qty*17999;
                a=function();
                if(a==1)
                {

                    goto start;
                }
                else if(a==0)
                {
                    goto end;

                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                m13++;
                a=function();
                if(a==1)
                {

                    goto start;
                }
                else if(a==0)
                {
                    goto end;

                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");



            }


        }
        if(phone==2)
        {
            int apple;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Apple iphone 14 Mini :--\n\n Price: Rs.57,999\n Colour: Blue\n RAM: 8GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Apple iphone 14 :--\n\n Price: Rs.61,999\n Colour: Red\n RAM: 6GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Apple iphone 14 Pro :--\n\n Price: Rs.1,19,999\n Colour: Space Black\n RAM: 8GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&apple);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(apple)
            {
                case 1:
                    i14m++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                    i14++;
               a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                i14p++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");


            }

        }
        if(phone==3)
        {
            int xiaomi;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Xiaomi 11i 5G :--\n\n Price: Rs.22,199\n Colour: Stealth Black\n RAM: 8GB\n Storage: 128GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Xiaomi 13 pro :--\n\n Price: Rs.79,999\n Colour: Ceramic Black\n RAM: 12GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Xiaomi Pad 5 :--\n\n Price: Rs.28,999\n Colour: Gray\n RAM: 6GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&xiaomi);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(xiaomi)
            {
                case 1:
                    mi11++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                    mi13p++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                pad++;
            a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");
            }
        }


    }
    break;


   case 2:
   if(input==2)
    {
        int laptop;
        system("cls");
        printf("\nTop Laptop Brands: \n");
        printf("                        ________________ \n");
        printf("-----------            |----------------| \n");
        printf("1. APPLE               |                | \n");
        printf("-----------            |                | \n");
        printf("2. ASUS                |________________| \n");
        printf("-----------            (#################) \n");
        printf("3. HP                   (#################)   \n");
        printf("-----------              (-----------------)         \n\n");
        printf("Enter : ");
        scanf("%d",&laptop);
if(laptop==1)
{
    int apple;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Apple 2020 MacBook Air Laptop M1 chip :--\n\n Price: Rs.84,490\n Colour: Silver\n RAM: 8GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Apple 2022 MacBook Air Laptop M2 chip :--\n\n Price: Rs.1,05,999\n Colour: Space Grey\n RAM: 8GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Apple 2021 MacBook Pro :--\n\n Price: Rs.3,19,990\n Colour: Silver\n RAM: 32GB\n Storage: 1TB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&apple);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(apple)
            {
                case 1:
                m1++;
               a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                m2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
              pro++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");



            }

}
if(laptop==2)
{

    int asus;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. ASUS TUF Gaming A15 :--\n\n Price: Rs.59,990\n Colour: Graphite Black\n RAM: 8GB\n Storage: 512GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. ASUS Vivobook 16X (2022) :--\n\n Price: Rs.49,990\n Colour: Transparent Silver\n RAM: 8GB\n Storage: 512GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. ASUS Eeebook 14 :--\n\n Price: Rs.23,990\n Colour: Dreamy White\n RAM: 4GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&asus);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(asus)
            {
                case 1:
                TUF++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                ebook++;                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                    vbook++;                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");



            }
}
if(laptop==3)
{
    int hp;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. HP 15s - Ryzen 5-5500U :--\n\n Price: Rs.45,390\n Colour: Natural Silver\n RAM: 8GB\n Storage: 512GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. HP 15s, 11th Gen Intel Core i3 :--\n\n Price: Rs.40,450\n Colour: Natural Silver\n RAM: 8GB\n Storage: 512GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. HP 14s, 11th Gen Intel Core i3 - 1115G4 :--\n\n Price: Rs.38,490\n Colour: Natural Silver\n RAM: 8GB\n Storage: 256GB\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&hp);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(hp)
            {
                case 1:
                s15++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                intel15++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
              s14++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");



            }
}
    }
    break;
    case 3:
   if(input==3)
   {
   int headphone;
   system("cls");
        printf("\nTop Headphone Brands: \n");
        printf("\n");
        printf("-----------                      (----) \n");
        printf("1. Boat                         (      ) \n");
        printf("-----------                    |        |    \n");
        printf("2. SONY                        |        |    \n");
        printf("-----------                    O        O     \n");
        printf("3. JBL\n");
        printf("----------- \n\n");
        printf("Enter : ");
        scanf("%d",&headphone);
        if(headphone==1)
        {
           headphones();
            int type;
            scanf("%d",&type);
            switch(type)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Boat BassHeads 100 :--\n\n Price: Rs.399\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Boat BassHeads 220 :--\n\n Price: Rs.449\n Colour: Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Boat BassHeads 105 :--\n\n Price: Rs.449\n Colour: Green\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&boat_wired);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(boat_wired)
            {
                case 1:
               boat100++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 2:
                boat220++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 3:
                boat105++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Boat Rockerz 335 :--\n\n Price: Rs.1,299\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Boat Rockerz 255 Pro+ :--\n\n Price: Rs.1,299\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Boat Rockerz 330 V2 :--\n\n Price: Rs.1,499\n Colour: Raging Red\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&boatNB);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(boatNB)
            {
                case 1:
              rockerz335++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
               rockerz255++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
                rockerz330++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 3:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. boAt Airdopes 131 :--\n\n Price: Rs.999\n Colour: Viper Green\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. boAt Airdopes 141 :--\n\n Price: Rs.1,299\n Colour: Teal Green\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. boAt Airdopes 413 ANC :--\n\n Price: Rs.2,499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&boat_wireless);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(boat_wireless)
            {
                case 1:
                air131++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                air141++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
              air413++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 4:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. boAt Bassheads 900 :--\n\n Price: Rs.849\n Colour: White\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. boAt Immortal 1000D :--\n\n Price: Rs.2,099\n Colour: BlackSabre\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. boAt Immortal 200 :--\n\n Price: Rs.1,799\n Colour: Raging Red\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&boatWHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(boatWHP)
            {
                case 1:
                boat900++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                 boat1000++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                case 3:
                boat200++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 5:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Boat Rockerz 450 Batman DC Edition :--\n\n Price: Rs.1,299\n Colour: KnightBlack\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Boat Rockerz 558 :--\n\n Price: Rs.1,999\n Colour: Camouflage\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Boat Rockerz 450 POLO :--\n\n Price: Rs.3,990\n Colour: Beige\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&boatWLHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(boatWLHP)
            {
                case 1:
                rockerz450++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                rockerz558++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
                rockerzPOLO++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");

            }
             break;
            default:
            printf("\nXXX---ERROR---XXX\n");

        }

   }
    if(headphone==2)
        {
           headphones();
            int TYPE;
            scanf("%d",&TYPE);
            switch(TYPE)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony MDR-EX15AP EX :--\n\n Price: Rs.790\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony MDR-EX155AP :--\n\n Price: Rs.1,099\n Colour: Dark Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony MDR-EX150AP :--\n\n Price: Rs.1,299\n Colour: Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&sony_wired);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(sony_wired)
            {
                case 1:
                    MDR1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 2:
             MDR2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 3:
MDR3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony WI-C100 :--\n\n Price: Rs.2,790\n Colour: Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony WI-XB400 :--\n\n Price: Rs.3,950\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony WI-SP510 :--\n\n Price: Rs.6,990\n Colour: White\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&sonyNb);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(sonyNb)
            {
                case 1:
                    wi1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                wi2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
               wi3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 3:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony WF-C500 :--\n\n Price: Rs.8,990\n Colour: Dark Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony WF-L900 :--\n\n Price: Rs.19,990\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony WF-1000XM4 :--\n\n Price: Rs.24,990\n Colour: Silver\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&sony_wireless);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(sony_wireless)
            {
                case 1:
               wf1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                wf2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
              wf3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 4:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony MDR-XB450AP :--\n\n Price: Rs.2,490\n Colour:  Red\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony MDR-ZX110AP :--\n\n Price: Rs.1,599\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony MDR-7506 :--\n\n Price: Rs.5,799\n Colour: Blue \n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&sonyWHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(sonyWHP)
            {
                case 1:
                s450++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                s110++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                case 3:
               s750++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 5:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony WH-CH510 :--\n\n Price: Rs.4,990\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony WH-CH720N :--\n\n Price: Rs.14,990\n Colour: Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony WH-1000XM4 :--\n\n Price: Rs.29,990\n Colour: Silver\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&sonyWLHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(sonyWLHP)
            {
                case 1:
                wh1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                wh2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
              wh3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");

            }
             break;
            default:
            printf("\nXXX---ERROR---XXX\n");

        }

   }
     if(headphone==3)
        {
           headphones();
            int TyPe;
            scanf("%d",&TyPe);
            switch(TyPe)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. JBL C50HI :--\n\n Price: Rs.499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. JBL C200SI :--\n\n Price: Rs.749\n  Colour: Dark Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. JBL Endurance Run :--\n\n Price: Rs.1,199\n Colour: Dark Grey\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&jbl_wired);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(jbl_wired)
            {
                case 1:
                c50++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 2:
                c200++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                case 3:
               run++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }
                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. JBL Tune 215BT :--\n\n Price: Rs.1,499\n Colour: Yellow\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. JBL Endurance RunBT :--\n\n Price: Rs.1,699\n Colour: Orange\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3.JBL Endurance RunBT :--\n\n Price: Rs.1,999\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&jblNB);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(jblNB)
            {
                case 1:
                 tune1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
               tune2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
               tune3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 3:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. JBL Wave Buds :--\n\n Price: Rs.3,490\n Colour: Mint Green\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. JBL Tune 230NC :--\n\n Price: Rs.5,990\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. JBL Live Pro+ :--\n\n Price: Rs.9,990\n Colour: White\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&jbl_wireless);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(jbl_wireless)
            {
                case 1:
                wave1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
            wave2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
               wave3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 4:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. JBL Quantum 100 :--\n\n Price: Rs.2,499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. JBL Quantum 300 :--\n\n Price: Rs.4,499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. JBL Quantum 350 :--\n\n Price: Rs.8,499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&jblWHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(jblWHP)
            {
                case 1:
               q100++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
             q300++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }


                break;
                case 3:
               q350++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");
            }
            break;
            case 5:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. JBL Tune 510BT :--\n\n Price: Rs.3,499\n Colour: Black\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. JBL Tune 710BT :--\n\n Price: Rs.5,499\n Colour: Blue\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. JBL Live 650BTNC :--\n\n Price: Rs.10,999\n Colour: White\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&jblWLHP);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(jblWLHP)
            {
                case 1:
                BT510++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 2:
                BT710++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                case 3:
                BT650++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;
                default:printf("\nERROR INVALID INPUT\n");

            }
             break;
            default:
            printf("\nXXX---ERROR---XXX\n");

        }

   }
   else{
    printf("\nXXX---ERROR---XXX\n");
   }
    case 4:
    if(input==4)
    {
        system("cls");
        printf("\nTop Television Brands: \n");
        printf("                                    __________________\n");
        printf("------------------                 |                  |\n");
        printf("1. TCL                             |                  |\n");
        printf("------------------                 |                  |\n");
        printf("2. TOSHIBA                         |                  |\n");
        printf("------------------                 |__________________|\n");
        printf("3. BRAVIA                                   ||       \n");
        printf("------------------                       ___||___      \n\n");
        printf("Enter : ");
        scanf("%d",&tv);
        if(tv==1)
        {
            int tcl;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. TCL Android Smart LED TV :--\n\n Price: Rs.21,990\n Colour: Black\n Quality: 4K Ultra HD\n Size: 43 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. TCL Android Smart LED TV :--\n\n Price: Rs.16,990\n Colour: Black\n Quality: Full HD\n Size: 40 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. TCL Bezel-Less Series Smart LED Google TV :--\n\n Price: Rs.25,990\n Colour: Black\n Quality: 4K Ultra HD\n Size: 43 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&tcl);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(tcl)
            {
                case 1:
                TCL1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                TCL2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                TCL3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");
            }

        }
        if(tv==2)
        {
            int toshiba;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Toshiba Bezelless Series Smart LED Google TV :--\n\n Price: Rs.27,999\n Colour: Black\n Quality: 4K Ultra HD\n Size: 43 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Toshiba V Series Smart Android LED TV :--\n\n Price: Rs.21,999\n Colour: Black\n Quality: Full HD\n Size: 43 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Toshiba V Series Smart Android LED TV :--\n\n Price: Rs.13,990\n Colour: Black\n Quality: HD\n Size: 32 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&toshiba);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(toshiba)
            {
                case 1:
                Toshiba1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
                Toshiba2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
                Toshiba3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");


            }

        }
        if(tv==3)
        {
            int bravia;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Sony Bravia Smart LED Google TV 1 :--\n\n Price: Rs.57,990\n Colour: Black\n Quality: 4K Ultra HD\n Size: 55 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Sony Bravia Smart LED Google TV 2 :--\n\n Price: Rs.42,990\n Colour: Black\n Quality: 4K Ultra HD\n Size: 43 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Sony Bravia Smart LED Google TV 3 :--\n\n Price: Rs.78,840\n Colour: Black\n Quality: 4K Ultra HD\n Size: 55 inches\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&bravia);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(bravia)
            {
                case 1:
                Bravia1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
               Bravia2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
               Bravia3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");
            }
        }
    }
    break;

   case 5:
    if(input==5)
    {
        system("cls");
        printf("\nTop Refrigerators Brands:         ________ \n");
        printf("-------------                    |        | \n");
        printf("1. Whirlpool                     | ]      | \n");
        printf("-------------                    |________| \n");
        printf("2. LG                            |        | \n");
        printf("-------------                    | ]      | \n");
        printf("3. Haier                         |        | \n");
        printf("-------------                    |________| \n\n");
        printf("Enter : ");
        scanf("%d",&fridge);
        if(fridge==1)
        {
            int whirlpool1;
            int whirlpool2;
            int whirlpool3;
            int category1;
            fridgecat();
            scanf("%d",&category1);
            switch(category1)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Whirlpool 184 L Direct-Cool Refrigerator:--\n\n Price: Rs.12,990\n Colour: Sapphire Blue\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Whirlpool 192 L Direct Cool Refrigerator:--\n\n Price: Rs.15,990\n Colour: Sapphire Antelia\n Stars: 4\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Whirlpool 176 L Direct Cool Refrigerator :--\n\n Price: Rs.19,990\n Colour: Dark Grey\n Stars: 4\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&whirlpool1);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(whirlpool1)
            {
                case 1:
                    W1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else
                {
                    goto end;
                }

                break;


                case 2:
               W2++;
                  a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                    printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
                W3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                default:
                printf("Kindly enter a valid input to proceed!");

        }break;
        case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Whirlpool 207 L Inverter Direct-Cool Refrigerator :--\n\n Price: Rs.18,490\n Colour: Sapphire Abyss\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - - \n\n");
            printf("2. Whirlpool 210 L Inverter Direct-Cool Refrigerator :--\n\n Price: Rs.20,990\n Colour: Wine Abyss\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - - \n\n");
            printf("3. Whirlpool 230 L Direct Cool Refrigerator :--\n\n Price: Rs.25,990\n Colour: Dark Grey\n Stars: 4\n\n");
            printf("- - - - - - - - - - - - - - - - - - - \n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&whirlpool2);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(whirlpool2)
            {
                case 1:
                W4++;
                  a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
               W5++;
                  a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
              W6++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                 default:
                printf("Kindly enter a valid input to proceed!");
            }break;
            case 3:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Whirlpool 330 L Inverter Direct-Cool Refrigerator :--\n\n Price: Rs.33,990\n Colour:  Silver\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Whirlpool 360 L Inverter Direct-Cool Refrigerator :--\n\n Price: Rs.40,950\n Colour: Steel Onyx\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Whirlpool 327 L Direct Cool Refrigerator :--\n\n Price: Rs.37,000\n Colour: Ceramic Black\n Stars: 4\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&whirlpool3);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(whirlpool3)
            {
                case 1:
                W7++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
                W8++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
               W9++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                 default:
                printf("Kindly enter a valid input to proceed!");


            }break;
            }
        }
        if(fridge==2)
        {
            int LG1,LG2,LG3,category2;
            fridgecat();
            scanf("%d",&category2);
            switch(category2)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. LG 185 L Inverter Direct-Cool Refrigerator:--\n\n Price: Rs.17,490\n Colour: Scarlet Charm\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. LG 185 L Direct-Cool Refrigerator:--\n\n Price: Rs.15,990\n Colour: Blue Euphoria\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. LG 190L Direct-Cool Refrigerator:--\n\n Price: Rs.16,190\n Colour: Blue Plumeria\n Stars: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&LG1);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(LG1)
            {
                case 1:
            L1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                    printf("Your bill amount is %d\n",bill);
                }
                break;


                case 2:
                L2++;
                  a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                    printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
                L3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                default:
                printf("Kindly enter a valid input to proceed!");


            }break;

                case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. LG 224 Inverter Direct-Cool Refrigerator:--\n\n Price: Rs.17,990\n Colour: Scarlet Charm\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. LG 201 Direct-Cool Refrigerator:--\n\n Price: Rs.20,990\n Colour: Shiny Steel\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. LG 22 Direct-Cool Refrigerator:--\n\n Price: Rs.25,990\n Colour: Blue Plumeria\n Stars: 4\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&LG2);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(LG2)
            {
                case 1:
                L4++;                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
               L5++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
                L6++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                  default:
                printf("Kindly enter a valid input to proceed!");

            }
            break;
            case 3:

            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. LG 343 L Frost-Free Smart Refrigerator :--\n\n Price: Rs.44,990\n Colour: Dark Green\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. LG 360 L Smart Inverter Refrigerator:--\n\n Price: Rs.34,990\n Colour: Dazzle Steel\n Stars: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. LG 398 L Frost-Free Smart Inverter Refrigerator:--\n\n Price: Rs.50,990\n Colour: Cermaic Black\n Stars: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&LG3);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(LG3)
            {
                case 1:
                L7++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
               L8++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
              L9++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                deault:
                printf("XXX---ERROR---XXX");
            }break;
            }
        }
        if(fridge==3)
        {
            int Haier1,Haier2,Haier3;
            int category3;
            fridgecat();
            scanf("%d",&category3);
            switch(category3)
            {
                case 1:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Haier 185L Direct Cool Refrigerator:--\n\n Price: Rs.14,490\n Colour: Holyleaf Green\n Star: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Haier 175L Direct Cool Refrigerator:--\n\n Price: Rs.12,490\n Colour: Marine Erica\n Star: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Haier 190L Direct Cool Refrigerator:--\n\n Price: Rs.15,990\n Colour: Red Opal\n Star: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&Haier1);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(Haier1)
            {
                case 1:
               H1++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
          H2++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
                H3++;
                 a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                default:
                printf("XXX---ERROR---XXX");
            }break;
            case 2:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Haier 210L Refrigerator:--\n\n Price: Rs.20,990\n Colour: Dazzle Steel \n Star: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Haier 225 L Frost Free Refrigerator:--\n\n Price: Rs.25,990\n Colour: Blue Plumeria \n Star: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Haier 230L Frost Free Refrigerator:--\n\n Price: Rs.29,990\n Colour: Silver\n Star: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&Haier2);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(Haier2)
            {
                case 1:
                H4++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
              H5++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
            H6++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                default:
                printf("XXX---ERROR---XXX");
            }break;
            case 3:
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Haier 325L Frost Free Inverter Refrigerator :--\n\n Price: Rs.38,990\n Colour: Dark Grey\n Star: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Haier 328L Frost Free Inverter Refrigerator:--\n\n Price: Rs.43,990\n Colour: Dazzle Steel\n Star: 2\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Haier 375 L Triple Inverter Frost Free Refrigerator:--\n\n Price: Rs.50,990\n Colour: Black\n Star: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&Haier3);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(Haier3)
            {
                case 1:
              H7++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 2:
              H8++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                case 3:
              H9++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else{
                   printf("Your bill amount is %d\n",bill);
                }
                break;
                default:
                printf("XXX---ERROR---XXX");
            }
           default:
           printf("\nXXX---ERROR---XXX\n");
            }
        }
        else{
            printf("\nXXX---ERROR---XXX\n");
        }
        }
    }
    case 6:
      if(input==6)
      {
          system("cls");
        printf("\nTop Air Conditioner Brands: \n");
        printf("                                   ____________________\n");
        printf("------------------                 |                  |\n");
        printf("1. DAIKIN                          |________18________|\n");
        printf("------------------\n");
        printf("2. CARRIER GLOBAL\n");
        printf("------------------\n");
        printf("3. VOLTAS\n");
        printf("------------------\n\n");
        printf("Enter : ");
        scanf("%d",&ac);
        if(ac==1)
        {
            int daikin;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Daikin Inverter Split AC 1 :--\n\n Price: Rs.45,490\n Colour: White\n Ton: 1.5\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Daikin Inverter Split AC 2 :--\n\n Price: Rs.32,990\n Colour: White\n Ton: 1\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Daikin Inverter Split AC 3 :--\n\n Price: Rs.37,999\n Colour: White\n Ton: 1\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&daikin);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(daikin)
            {
                case 1:
                Daikin1++;;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
               Daikin2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
               Daikin3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");
            }

        }
        if(ac==2)
        {
            int carrier_global;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Carrier AI Flexicool Inverter Split AC :--\n\n Price: Rs.34,999\n Colour: White\n Ton: 1.5\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Carrier Inverter Split AC :--\n\n Price: Rs.39,880\n Colour: White\n Ton: 1.5\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Carrier Fixed Speed Inverter Split AC :--\n\n Price: Rs.31,990\n Colour: White\n Ton: 1\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&carrier_global);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(carrier_global)
            {
                case 1:
                CG1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
            CG2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
               CG3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");


            }

        }
        if(ac==3)
        {
            int voltas;
            printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("               SELECT:\n");
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
            printf("1. Voltas Inverter Split AC :--\n\n Price: Rs.31,999\n Colour: White\n Ton: 1.4\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("2. Voltas Inverter Split AC :--\n\n Price: Rs.39,790\n Colour: White\n Ton: 1.5\n Stars: 5\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("3. Voltas Fixed Speed Window AC :--\n\n Price: Rs.28,999\n Colour: White\n Ton: 1.5\n Stars: 3\n\n");
            printf("- - - - - - - - - - - - - - - - - - -\n\n");
            printf("CHOOSE FROM ABOVE : ");
            scanf("%d",&voltas);
            printf("\n\nENTER THE QUANTITY : ");
            scanf("%d",&qty);
            switch(voltas)
            {
                case 1:
               Voltas1++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 2:
               Voltas2++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;


                case 3:
              Voltas3++;
                a=function();
                if(a==1)
                {
                    goto start;
                }
                else if(a==0)
                {
                    goto end;
                }
                else
                {
                    printf("\nERROR INVALID INPUT\n");
                }
                break;

                default:
                    printf("\nXXX---ERROR---XXX\n");
            }
        }
    }
    break;

    default:
        printf("\nXXX---ERROR---XXX\n");
      }

      end:
    system("cls");
    strcpy(date,__DATE__);
   generateBillHeader(username,date);
   if (s23>0)
   {
       generateBillBody("Samsung S23",qty,79999);
       total=total+79999;
   }
    if(m33>0)
    {
        generateBillBody("Samsung M33 5G",qty,17999);
       total=total+17999;
    }
     if(m13>0)
    {
        generateBillBody("Samsung M13",qty,12999);
       total=total+12999;
    }
     if(i14m>0)
    {
        generateBillBody("Iphone 14 Mini",qty,57999);
       total=total+57999;
    }
    if(i14>0)
    {
        generateBillBody("Iphone 14 ",qty,61999);
       total=total+61999;
    }

     if(mi11>0)
    {
        generateBillBody("Xiaomi 11i 5G",qty,22199);
       total=total+22199;
    }
     if(mi13p>0)
    {
        generateBillBody("Xiaomi 13 pro",qty,79999);
       total=total+79999;
    }
    if(pad>0)
    {
        generateBillBody("Xiaomi Pad 5",qty,28999);
       total=total+28999;
    }
    if(m1>0)
    {
        generateBillBody("MacBook Air M1 chip",qty,84490);
       total=total+84490;
    }
      if(m2>0)
    {
        generateBillBody("MacBook Air M2 chip",qty,105999);
       total=total+105999;
    }
       if(pro>0)
    {
        generateBillBody("MacBook Air M1 chip",qty,319990);
       total=total+319990;
    }

     if(TUF>0)
    {
        generateBillBody("ASUS TUF Gaming A15",qty,59990);
       total=total+59990;
    }
     if(ebook>0)
    {
        generateBillBody("ASUS Vivobook 16X",qty,49990);
       total=total+49990;
    }
     if(vbook>0)
    {
        generateBillBody("ASUS Eeebook 14",qty,23990);
       total=total+23990;
    }
     if(s15>0)
    {
        generateBillBody("HP 15s",qty,45390);
       total=total+45390;
    }
    if(intel15>0)
    {
        generateBillBody("HP 15s,Intel Core i3",qty,40450);
       total=total+40450;
    }
     if(s14>0)
    {
        generateBillBody("HP 14s,Intel Core i3",qty,38490);
       total=total+38490;
    }
    if(boat100>0)
    {
        generateBillBody("Boat BassHeads 100",qty,399);
       total=total+399;
    }
     if(boat200>0)
    {
        generateBillBody("Boat BassHeads 200",qty,449);
       total=total+449;
    }
     if(boat105>0)
    {
        generateBillBody("Boat BassHeads 105",qty,449);
       total=total+449;
    }
     if(rockerz335>0)
    {
        generateBillBody(" Boat Rockerz 335",qty,1299);
       total=total+1299;
    }
     if(rockerz255>0)
    {
        generateBillBody("Boat Rockerz 255 Pro+",qty,1299);
       total=total+1299;
    }
     if(rockerz330>0)
    {
        generateBillBody("Boat Rockerz 330 V2",qty,1499);
       total=total+1499;
    }
     if(air131>0)
    {
        generateBillBody("boAt Airdopes 131",qty,999);
       total=total+999;
    }
     if(air141>0)
    {
        generateBillBody("boAt Airdopes 141",qty,1299);
       total=total+1299;
    }
     if(air413>0)
    {
        generateBillBody("boAt Airdopes 413 ANC",qty,2499);
       total=total+2499;
    }
      if(boat900>0)
    {
        generateBillBody("boAt Bassheads 900",qty,849);
       total=total+849;
    }
      if(boat1000>0)
    {
        generateBillBody("boAt Immortal 1000D",qty,2099);
       total=total+2099;
    }
      if(boat200>0)
    {
        generateBillBody("boAt Immortal 200",qty,1799);
       total=total+1799;
    }
    if(rockerz450>0)
    {
        generateBillBody("boAt rockerz 450",qty,1299);
        total=total+1299;
    }
    if(rockerz558>0)
    {
        generateBillBody("boAt rockerz 558",qty,1999);
        total=total+1999;
    }
    if(rockerzPOLO>0)
    {
        generateBillBody("boAt rockerz POLO",qty,3990);
        total=total+3990;
    }

     if(MDR1>0)
    {
        generateBillBody("Sony MDR-EX15AP EX",qty,790);
       total=total+790;
    }
     if(MDR2>0)
    {
        generateBillBody("Sony MDR-EX155AP",qty,1099);
       total=total+1099;
    }
     if(MDR3>0)
    {
        generateBillBody("Sony MDR-EX150AP",qty,1299);
       total=total+1299;
    }
      if(wi1>0)
    {
        generateBillBody("Sony WI-C100",qty,2790);
       total=total+2790;
    }
      if(wi2>0)
    {
        generateBillBody("Sony WI-XB400",qty,3950);
       total=total+3950;
    }
      if(wi3>0)
    {
        generateBillBody("Sony WI-SP510",qty,6990);
       total=total+6990;
    }
      if(wf1>0)
    {
        generateBillBody("Sony WF-C500",qty,8990);
       total=total+8990;
    }
      if(wf2>0)
    {
        generateBillBody("Sony WF-L900",qty,19990);
       total=total+19990;
    }
      if(wf3>0)
    {
        generateBillBody("Sony WF-1000XM4",qty,24990);
       total=total+24990;
    }
      if(s450>0)
    {
        generateBillBody("Sony MDR-XB450AP",qty,2490);
       total=total+2490;
    }
      if(s110>0)
    {
        generateBillBody("Sony MDR-ZX110AP",qty,1599);
       total=total+1599;
    }
      if(s750>0)
    {
        generateBillBody("Sony MDR-7506",qty,5799);
       total=total+5799;
    }
    if(wh1>0)
    {
        generateBillBody("Sony WH-CH510",qty,4990);
       total=total+4990;
    }
    if(wh2>0)
    {
        generateBillBody("Sony WH-CH720N",qty,14990);
       total=total+14990;
    }
    if(wh3>0)
    {
        generateBillBody("Sony WH-1000XM4",qty,29990);
       total=total+29990;
    }
    if(c50>0)
    {
        generateBillBody("JBL C50HI",qty,499);
        total=total+499;
    }
    if(c200>0)
    {
        generateBillBody("JBL C200HI",qty,749);
        total=total+749;
    }
    if(run>0)
    {
        generateBillBody("JBL Endurance Run",qty,1199);
        total=total+1199;
    }
    if(tune1>0)
    {
        generateBillBody("JBL Tune 215BT",qty,1499);
        total=total+1499;
    }
    if(tune2>0)
    {
        generateBillBody("JBL Endurance RunBT",qty,1699);
        total=total+1699;
    }
    if(tune3>0)
    {
        generateBillBody("JBL Endurance RunBT",qty,1999);
        total=total+1999;
    }
    if(wave1>0)
    {
        generateBillBody("JBL Wave Buds",qty,3490);
        total=total+3490;
    }
    if(wave2>0)
    {
        generateBillBody("JBL Tune 230NC",qty,5990);
        total=total+5990;
    }
    if(wave3>0)
    {
        generateBillBody("JBL Live Pro+",qty,9990);
        total=total+9990;
    }
    if(BT510>0)
    {
        generateBillBody("JBL Quantum 100",qty,3499);
        total=total+3499;
    }
    if(BT710>0)
    {
        generateBillBody("JBL Quantum 300",qty,5499);
        total=total+5499;
    }
    if(BT650>0)
    {
        generateBillBody("JBL Quantum 350",qty,10999);
        total=total+10999;
    }
    if(TCL1>0)
    {
        generateBillBody("TCL Android Smart LED TV",qty,21990);
        total=total+21990;
    }
    if(TCL2>0)
    {
        generateBillBody("TCL Android Smart LED TV",qty,16990);
        total=total+16990;
    }
    if(TCL3>0)
    {
        generateBillBody("TCL Bezel-Less Smart TV",qty,25990);
        total=total+25990;
    }
    if(Toshiba1>0)
    {
        generateBillBody("Toshiba Bezelless Smart TV",qty,27999);
        total=total+27999;
    }
    if(Toshiba2>0)
    {
        generateBillBody("Toshiba V Series Smart TV",qty,21999);
        total=total+21999;
    }
    if(Toshiba3>0)
    {
        generateBillBody("Toshiba V Series Smart TV",qty,13990);
        total=total+13990;
    }
    if(Bravia1>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 1",qty,57990);
        total=total+57990;
    }
    if(Bravia2>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 2",qty,42990);
        total=total+42990;
    }
    if(Bravia3>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 3",qty,78840);
        total=total+78840;
    }
    if(W1>0)
    {
        generateBillBody("Haier 185L Direct Cool Refrigerator",qty,14490);
        total=total+14490;
    }
    if(W2>0)
    {
        generateBillBody("Haier 175L Direct Cool Refrigerator",qty,12490);
        total=total+12490;
    }
    if(W3>0)
    {
        generateBillBody("Haier 190L Direct Cool Refrigerator",qty,15990);
        total=total+15990;
    }
    if(W4>0)
    {
        generateBillBody("Haier 210L Refrigerator",qty,20990);
        total=total+20990;
    }
    if(W5>0)
    {
        generateBillBody("Haier 225 L Frost Free Refrigerator",qty,25990);
        total=total+25990;
    }
    if(W6>0)
    {
        generateBillBody("Haier 230L Frost Free Refrigerator",qty,29990);
        total=total+29990;
    }
    if(W7>0)
    {
        generateBillBody("Haier 325L Frost Free Inverter Refrigerator",qty,38990);
        total=total+38990;
    }
    if(W8>0)
    {
        generateBillBody("Haier 328L Frost Free Inverter Refrigerator",qty,43990);
        total=total+43990;
    }
    if(W9>0)
    {
        generateBillBody("Haier 375 L Triple Inverter Frost Free Refrigerator",qty,50990);
        total=total+50990;
    }
    if(L1>0)
    {
        generateBillBody("LG 185 L Inverter DC Refrigerator",qty,17490);
        total=total+17490;
    }
    if(L2>0)
    {
        generateBillBody("LG 185 L DC Refrigerator",qty,15990);
        total=total+15990;
    }
    if(L3>0)
    {
        generateBillBody("LG 190L DC Refrigerator",qty,16190);
        total=total+16190;
    }
    if(L4>0)
    {
        generateBillBody("LG 224 Inverter DC Refrigerator",qty,17990);
        total=total+17990;
    }
    if(L5>0)
    {
        generateBillBody("LG 201 DC Refrigerator",qty,20990);
        total=total+20990;
    }
    if(L6>0)
    {
        generateBillBody("LG 22 DC Refrigerator",qty,25990);
        total=total+25990;
    }
    if(L7>0)
    {
        generateBillBody("LG 343 L Frost-Free Smart Refrigerator",qty,44990);
        total=total+44990;
    }
    if(L8>0)
    {
        generateBillBody("LG 360 L Smart Refrigerator",qty,34990);
        total=total+34990;
    }
    if(L9>0)
    {
        generateBillBody("LG 398 L Frost-Free Smart Refrigerator",qty,50990);
        total=total+50990;
    }
    if(H1>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 1",qty,57990);
        total=total+57990;
    }
    if(H2>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 2",qty,42990);
        total=total+42990;
    }
    if(H3>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 3",qty,78840);
        total=total+78840;
    }
    if(H4>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 1",qty,57990);
        total=total+57990;
    }
    if(H5>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 2",qty,42990);
        total=total+42990;
    }
    if(H6>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 3",qty,78840);
        total=total+78840;
    }
    if(H7>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 1",qty,57990);
        total=total+57990;
    }
    if(H8>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 2",qty,42990);
        total=total+42990;
    }
    if(H9>0)
    {
        generateBillBody("Sony Bravia Smart LED TV 3",qty,78840);
        total=total+78840;
    }
    if(Daikin1>0)
    {
        generateBillBody("Daikin Inverter Split AC 1",qty,45490);
        total=total+45490;
    }
    if(Daikin2>0)
    {
        generateBillBody("Daikin Inverter Split AC 2",qty,32990);
        total=total+32990;
    }
    if(Daikin3>0)
    {
        generateBillBody("Daikin Inverter Split AC 3",qty,37999);
        total=total+37999;
    }
    if(CG1>0)
    {
        generateBillBody("Carrier AI Flexicool Inverter Split AC",qty,34999);
        total=total+34999;
    }
    if(CG2>0)
    {
        generateBillBody("Carrier Inverter Split AC",qty,39880);
        total=total+39880;
    }
    if(CG3>0)
    {
        generateBillBody("Carrier Fixed Speed Inverter Split AC",qty,31990);
        total=total+31990;
    }
    if(Voltas1>0)
    {
        generateBillBody("Voltas Inverter Split AC",qty,31999);
        total=total+31999;
    }
    if(Voltas2>0)
    {
        generateBillBody("Voltas Inverter Split AC",qty,39790);
        total=total+39790;
    }
    if(Voltas3>0)
    {
        generateBillBody("Voltas Fixed Speed Window AC",qty,28999);
        total=total+28999;
    }
   generateBillFooter(total);
   pay();

}