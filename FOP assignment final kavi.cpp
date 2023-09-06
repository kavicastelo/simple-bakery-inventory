#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
using namespace std;


///Logic Functions

   /// Update & Insert Function
void insertfirst(int data, char foodname[25], int quantity, float price);
void insertmid(int pos, int data, char foodname[25], int quantity, float price);
void insertend(int data, char foodname[25], int quantity, float price);
void updatefood(int udata, int uquantity);

void insertfirst2(int data2, char packagename[25], int quantity2, float price2);
void insertmid2(int pos, int data2, char packagename[25], int quantity2, float price2);
void insertend2(int data2, char packagename[25], int quantity2, float price2);
void updatepackage(int udata2, int uquantity2);

     /// Display Function
void foodlist();
void packagelist();
void order_view(int order, int quantity, int or_no);
void order_view2(int order2, int quantity2, int or_no2);
void main_menu();
void Help();

    ///Delete & Count Function
void deletefood(int serial);
void deletepackage(int serial2);
int countitem();
int countitem2();

   


///extra design Function

void cls();
void echo(char print[]);
void br(int line);
void pre(int tab);
void span(int space);
void ccolor(int clr);
void pwellcome();
void loadingbar();
void middle1(void);
void middtab1(void);

void backuploader(void);
void welcomescreen();
void login();
void dtime();

        ///START Structure Here

struct Node{

	char foodname[50];
	int quantity;
	float price;
	int data;
	struct Node *next;

};
struct Node2{
	
	char packagename[50];
	int quantity2;
	float price2;
	int data2;
	struct Node2 *next2;

};

   ///Global Type

typedef struct Node node ;

node *head, *list;

typedef struct Node2 node2 ;

node2 *head2, *list2;

int main(){

	system("panaderia Bakery House Management System");
	system("mode con: cols=100 lines=30");
	
	

    welcomescreen();
    login();
	loadingbar(); cls();
	pwellcome();
	Sleep(300);
	cls();
	
	dtime();

	int c=0; int any;
	int cardno[100];
	float cardmoney[100];
	float totalmoney = 0;
	int total_order[100];
	int order_quantity[100];
	int order=0;
	int uquantity;
	int citem;
	
	//special package
	int c2=0; int any2;
	int cardno2[100];
	float cardmoney2[100];
	float totalmoney2 = 0;
	int total_order2[100];
	int order_quantity2[100];
	int order2=0;
	int uquantity2;
	int citem2;

	head = NULL;
	insertfirst(1,"Birthday Cakes",25,1000.00);
	insertend(2,"Pastries    ",300,50.00);
	insertend(3,"Cookies",200,250);
	insertend(4,"Egg Rolls  ",300,50.00);
	insertend(5,"Fish Rolls  ",250,45.00);
	insertend(6,"Egg Buns   ",250,50.00);
	insertend(7,"Fish Buns  ",350,45.00);
	insertend(8,"Sandwiches",100,40.00);
	insertend(9,"Burgers",150,120);
	insertend(10,"Hot Dogs  ",150,80);
	insertend(11,"Coffee",200,50.00);
	insertend(12,"Cool Drinks  ",150,100.00);
	
	head2 = NULL;
	insertfirst2(1,"Birthday Party(25 people)",3,20000.00);
	insertend2(2,"Family Party(5 people)",5,4500.00);
	insertend2(3,"Family Party(10 people)",3,9000.00);
	insertend2(4,"Anniversary(10 people)",2,12000.00);
	insertend2(5,"Anniversary(25 people)",1,28000.00);
	

	mainmenu:
	br(1);

	main_menu();

	int main_menu_choice;

	br(1); pre(4); fflush(stdin); scanf("%d",&main_menu_choice);

	if((main_menu_choice >=1 && main_menu_choice <=5)){

		if(main_menu_choice == 1){

			foodlist:

			cls();
			printf("=> 0. Main Menu ");
			foodlist();


		}

		else if( main_menu_choice == 2){

			adminpanelchoice:

			int admin_panel_choice;

			cls(); middle1() ;   pre(4);  printf("1. Main Menu\n\n\t"); Sleep(300);
			printf("Please Enter Password or ( 1 to Back in Main Menu ) : ");


			fflush(stdin);  scanf("%d",&admin_panel_choice);

			if(admin_panel_choice==123456){



				node *temp;

				temp = list;

				adminchoise:

				cls();  br(3); pre(4); echo(">>>> Admin Panel <<<<   \n\n");
				pre(4);
				printf(" 1. Total Cash Today \n\n");Sleep(250);pre(4);
				printf(" 2. View Card Pay \n\n");Sleep(250);pre(4);
				printf(" 3. Add Bakery Item \n\n");Sleep(250);pre(4);
				printf(" 4. Delete Item \n\n");Sleep(250);pre(4);
				printf(" 5. Instant Item List \n\n");Sleep(250);pre(4);
				printf(" 6. Item Counter \n\n");Sleep(250);pre(4);
				printf(" 7. Backup System\n\n");Sleep(250);pre(4);
				printf(" 8. Instant Order Preview\n\n");Sleep(250);pre(4);
				printf(" 9. Special Packages Detail\n\n");Sleep(250);pre(4);
				printf(" 0. Main Menu \n\n");
				printf("Enter Your From 1-0: ");
				Sleep(250);

				int adminchoise;



				fflush(stdin);   scanf("%d",&adminchoise);

				if(adminchoise==1){

					cls();  middle1(); pre(4);   printf("Todays Total Cash : %0.2f  \n",totalmoney);

					Sleep(2000);

					goto adminchoise;
				}
				else if(adminchoise==2){

					if(c!=0){

						cls();  br(3); pre(4);

						printf(" ____________________________\n");pre(4);
						printf("|   Card NO.   |   Money $   |\n");pre(4);
						printf("------------------------------\n");pre(4);

						for(int z=1; z<=c;z++){

							printf("|  %d  | %0.2f |\n",cardno[z],cardmoney[z]);pre(4);
							printf("------------------------------\n");pre(4);
							Sleep(150);

						}
						Sleep(1500);
					}

					if(c==0){

						cls();  middle1(); pre(4);
					printf("No Card History\n");}
					Sleep(1500);
					goto adminchoise;
				}

				else if(adminchoise==3){

					foodadd:
					cls();

					char ffoodname[25];
					int fquantity;
					int fdata;
					float fprice;
					int fposi;


					br(3);pre(4);      printf(" Enter Bakery Item Name :  ");

					fflush(stdin);     scanf("%[^\n]s",ffoodname);
					fquantity:
					fflush(stdin);

					br(2);pre(4);
					printf(" Enter Item Quantity :  ");

					scanf("%d",&fquantity); fflush(stdin);

                        foodserial:
					br(2);pre(4);  printf(" Enter Item Serial :  ");
                      scanf("%d",&fdata);
                            node *exist;
                            exist = list;
                      while(exist->data!=fdata){
                            if(exist->next==NULL){
                                break;
                            }
                        exist=exist->next;
                      }
                      if(exist->data==fdata){
                       cls(); br(5);pre(3);  printf(" Bakery Item Serial Already Exist, Please Re-Enter  "); Sleep(2000);
                       goto foodserial;
                      }

                    fprice:
                      fflush(stdin);

					br(2);pre(4);  printf(" Enter Item Price :  ");fflush(stdin);

					scanf("%f",&fprice);



					br(2);pre(4);  printf("Submitting your data");for(int cs=0;cs<4;cs++){printf(" .");Sleep(500);}


					insertend(fdata,ffoodname,fquantity,fprice);

					br(2);pre(4);      printf("Adding Item  Successfull.......\n");

					Sleep(2000);

					goto adminchoise;

				}
				else if(adminchoise==4){

					cls();
					middle1();pre(2);
					printf("Enter Serial No of the Item To Delete : ");
					fdelete:
					int fdelete;
					fflush(stdin); scanf("%d",&fdelete);
					node *temp;
					temp=list;
					while(temp->data != fdelete){
						temp = temp->next;
					}
					if(temp->data==fdelete){
						deletefood(fdelete);
					}
					else{
						br(2); pre(2); printf("Please Enter Correct Number :  "); Sleep(500);
						goto fdelete;
					}


					goto adminchoise;
				}

				else if(adminchoise==5){

					cls();    foodlist(); Sleep(1000);

					br(2);pre(4);  printf("1. <-- back  \n\n");pre(5);



					fflush(stdin);   scanf("%d",&any);

					goto adminchoise;

				}

				else if(adminchoise==6){

					citem = countitem();
					cls();
					for(int cs=1;cs<=citem;cs++){
						middle1(); pre(4);
						printf("Item Counting ");
						printf(" %d ",cs);
						Sleep(150);
						cls();
					}
					cls();
					middle1();pre(4);
					printf("Total Item Item is --> %d  \n",citem); Sleep(2000);
					goto adminchoise;

				}

                        ///Backup System
				else if(adminchoise==7){


					char date[35]=__DATE__;

					strcat(date,".txt");
					FILE *fptr;
					fptr=fopen(date,"w");
					backuploader();
					if(fptr==NULL){
						br(3); pre(3); printf("Error!"); Sleep(500);
						goto adminchoise;
					}
					fprintf(fptr,"Total Cash Today : %0.2f\n\n\n",totalmoney);
					fprintf(fptr,"Card No ------- Money \n\n");
					for(int l=1; l<=c;l++){
						fprintf(fptr,"%d ------- %0.2f \n",cardno[l],cardmoney[l]);
					}
					br(2);pre(4); printf("Backup Successfull..."); Sleep(1500);



					fclose(fptr);
					goto adminchoise;
				}
				else if(adminchoise==8){

					cls();br(2);pre(2);
					ccolor(26);
					printf("\n\t\t"); ccolor(240);
					printf("______________________________________________________ "); ccolor(26);
					printf("\n\t\t");  ccolor(240);
					printf("|  Order No.  |   Item Name   |  Quantity |  In Stock |"); ccolor(26);
					printf("\n\t\t");  ccolor(240);
					printf("------------------------------------------------------"); ccolor(26);
					for(int o=1;o<=order;o++){
						order_view(total_order[o],order_quantity[o],o);
					}

					br(2);pre(4);  printf("1. <-- back  \n\n");pre(5);

					fflush(stdin);   scanf("%d",&any);

					goto adminchoise;



				}
				else if(adminchoise==9){
					
					specialpackagechoice:
					
					int special_package_choice;
					
					node2 *temp2;
					temp2 = list2;
					
					specialchoice:
					
					cls();  br(3); pre(4); echo(">>>> Special Packages <<<<   \n\n");
				    pre(4);
			     printf(" 1. Total Cash Today \n\n");Sleep(250);pre(4);
			     printf(" 2. View Card Pay \n\n");Sleep(250);pre(4);
			     printf(" 3. Add Packages \n\n");Sleep(250);pre(4);
			     printf(" 4. Delete Packages \n\n");Sleep(250);pre(4);
			     printf(" 0. Admin Panal \n\n");
				 printf("Enter Your From 1-0: ");
				 Sleep(250);
				 
				 int specialchoice;
				 
				 fflush(stdin);   scanf("%d",&specialchoice);
				 
				if(specialchoice==1){

					cls();  middle1(); pre(4);   printf("Todays Total Cash : %0.2f  \n",totalmoney2);

					Sleep(2000);

					goto specialchoice;
				}
				else if(specialchoice==2){

					if(c2!=0){

						cls();  br(3); pre(4);

						printf(" ____________________________\n");pre(4);
						printf("|   Card NO.   |   Money $   |\n");pre(4);
						printf("------------------------------\n");pre(4);

						for(int z2=1; z2<=c2;z2++){

							printf("|  %d  | %0.2f |\n",cardno2[z2],cardmoney2[z2]);pre(4);
							printf("------------------------------\n");pre(4);
							Sleep(150);

						}
						Sleep(1500);
					}

					if(c2==0){

						cls();  middle1(); pre(4);
					printf("No Card History\n");}
					Sleep(1500);
					goto specialchoice;
				}
				else if(specialchoice==3){

					packageadd:
					cls();

					char ppackagename[25];
					int pquantity;
					int pdata;
					float pprice;
					int pposi;


					br(3);pre(4);      printf(" Enter Package Name :  ");

					fflush(stdin);     scanf("%[^\n]s",ppackagename);
					pquantity:
					fflush(stdin);

					br(2);pre(4);
					printf(" Enter Packages Quantity :  ");

					scanf("%d",&pquantity); fflush(stdin);

                        packageserial:
					br(2);pre(4);  printf(" Enter Package Serial :  ");
                      scanf("%d",&pdata);
                            node2 *exist2;
                            exist2 = list2;
                      while(exist2->data2!=pdata){
                            if(exist2->next2==NULL){
                                break;
                            }
                        exist2=exist2->next2;
                      }
                      if(exist2->data2==pdata){
                       cls(); br(5);pre(3);  printf(" Package Serial Already Exist, Please Re-Enter  "); Sleep(2000);
                       goto packageserial;
                      }

                    pprice:
                      fflush(stdin);

					br(2);pre(4);  printf(" Enter Package Price :  ");fflush(stdin);

					scanf("%f",&pprice);



					br(2);pre(4);  printf("Submitting your data");for(int cs2=0;cs2<4;cs2++){printf(" .");Sleep(500);}


					insertend2(pdata,ppackagename,pquantity,pprice);

					br(2);pre(4);      printf("Adding Package  Successfull.......\n");

					Sleep(2000);

					goto specialchoice;

				}
				else if(specialchoice==4){

					cls();
					middle1();pre(2);
					printf("Enter Serial No of the Package To Delete : ");
					pdelete:
					int pdelete;
					fflush(stdin); scanf("%d",&pdelete);
					node2 *temp2;
					temp2=list2;
					while(temp2->data2 != pdelete){
						temp2 = temp2->next2;
					}
					if(temp2->data2==pdelete){
						deletepackage(pdelete);
					}
					else{
						br(2); pre(2); printf("Please Enter Correct Number :  "); Sleep(500);
						goto pdelete;
					}


					goto specialchoice;
				}
				else if(specialchoice==0){
					
					goto adminchoise;
				}	
				
				}
				else if(adminchoise==0){

					goto mainmenu;
				}

				else{
					br(2); pre(4); printf("Please Select From List :  "); Sleep(500);
					goto adminchoise;
				}



			}

			else if(admin_panel_choice==1){
				goto mainmenu;
			}
			else{
				br(2); pre(4);  printf("Please Enter Correct Choice");
				goto adminpanelchoice;
			}

		}
		
		else if(main_menu_choice==4){
			cls();
			Help();

			goto mainmenu;

		}

		else if(main_menu_choice==5){
			system("Color 04");
			cls();
			middle1(); pre(3); printf("Thank You For Using Our System. \n\n\n\n\n\n\n");
			Sleep(1000);

			exit(1);

		}
		
		else if(main_menu_choice == 3){

			packagelist:

			cls();
			printf("=> 0. Main Menu ");
			packagelist();
			
				    //package choises
	int get_package_choice;


	br(2); pre(3);fflush(stdin);
	printf("Place Your Package: ") ;
	scanf("%d",&get_package_choice);

	if(get_package_choice==0){
		goto mainmenu;
	}

	node2 *temp2;

	temp2 = list2 ;

	while(temp2->data2 != get_package_choice){

		temp2 = temp2->next2;
		if(temp2==NULL){
			br(2); pre(4);  echo("Please Choice From List: "); br(2); Sleep(1000);
			goto packagelist;
		}

	}
	if(get_package_choice == temp2->data2){

		pcquantity:
		br(2); pre(4);
		printf("Enter Package Quantity : ");

		int pcquantity;

		fflush(stdin); scanf("%d",&pcquantity); cls();



		if(pcquantity==0){
			cls(); middle1();pre(3); printf("Quantity Can not be Zero "); Sleep(2000);
			cls();
			goto packagelist;
		}
		else if(pcquantity>temp2->quantity2){
			cls(); middle1();pre(3); printf("Out of Stock ! "); Sleep(2000);

			goto packagelist;
		}

		middle1();pre(4);  printf("Choice package %s  its price is %0.2f \n\n",temp2->packagename,temp2->price2*pcquantity);pre(4);
		printf("1. Confirm to buy this \n\n");pre(4);
		printf("2. Package List \n\n");
		printf("Press 1 to confirm and 2 to back to list :");

		confirm2:
		int confirm2;

		fflush(stdin); scanf("%d",&confirm2);

		if(confirm2 == 1 ){

			br(2);pre(4);
			printf(" 1. Cash ");
			br(2);pre(4);
            printf(" 2. Credit\n");
            printf("Select Method Of payment 1-2: ");
			payment2:
			int payment2;

			fflush(stdin);  scanf("%d",&payment2);

			if(payment2==1){


				totalmoney2 += temp2->price2*pcquantity;
				order2++;
				total_order2[order2]=get_package_choice;
				order_quantity2[order2]=pcquantity;
				uquantity2 = temp2->quantity2 - pcquantity;

				updatepackage(get_package_choice,uquantity2);


				cls();middle1();pre(4);  printf("===>THANK YOU<===");
				br(2);pre(4);  printf("Package Ordered Successfully ...");
				br(2);pre(4);  printf("1. Wanna Buy Another Package ? ");
				br(2);pre(4);  printf("2. Main Menu \n");
				br(2);pre(4);   printf("Select: ");
				ppmenu:
				int pp_menu;

				fflush(stdin);  scanf("%d",&pp_menu);

				if(pp_menu==1){goto packagelist;}
				else if(pp_menu==2){goto mainmenu;}
				else{br(2);pre(4);printf("Please Choice from list : "); goto ppmenu;}

			}

			///package list Credit Card Option

			else if(payment2==2){

				int card_number2[100];

				c2++;

				cls();middle1();pre(4); printf("Enter Your Card No : ");

				fflush(stdin);   scanf("%d",&card_number2[c2]);



				cardno2[c2] = card_number2[c2];

				int pin2;

				br(2);pre(2);  printf("Enter Your Card Pin [we never save your pin]  : ");

				fflush(stdin);     scanf("%d",&pin2);

				cardmoney2[c2] = temp2->price2*pcquantity;

				totalmoney2 += temp2->price2*pcquantity;
				order2++;
				total_order2[order2]=get_package_choice;
				order_quantity2[order2]=pcquantity;

				uquantity2 = temp2->quantity2 - pcquantity;

				updatepackage(get_package_choice,uquantity2);

				br(2);pre(4);  printf("Payment Success...");
				br(2);pre(4);    printf("1. Wanna Buy Another Package ? ");
				br(2);pre(4);    printf("2. Main Menu \n");
				br(2);pre(4);   printf("select: ");
				ppmenu2:
				int pp_menu2;

				scanf("%d",&pp_menu2);

				if(pp_menu2==1){goto packagelist;}
				else if(pp_menu2==2){goto mainmenu;}
				else{br(2);pre(4);printf("Please Choice from list : "); goto ppmenu2;}

			}

			else{

				br(2);pre(4);   printf("Enter Choice from List : ");

				goto payment2;


			}


		}    ///END package list Confirm Y/y



		else if(confirm2 == 2){

			goto packagelist;

		}

		else{
			br(2);pre(4);    printf("Enter Choice from List : ");

			goto confirm2;


		}  ///end package confirm;


	}  ///end get package choice if line


	else{

		br(2);pre(4);  echo("Please Choose From List "); br(2); Sleep(300);

		goto packagelist;

	}  ///end get food choice
		}

	}
	else{
		br(2); pre(4); printf("Please Enter Correct Choice"); Sleep(300);
		goto mainmenu;
	}


    // food list choises
	int get_food_choice;


	br(2); pre(3);fflush(stdin);
	printf("Place Your Order: ") ;
	scanf("%d",&get_food_choice);

	if(get_food_choice==0){
		goto mainmenu;
	}

	node *temp;

	temp = list ;

	while(temp->data != get_food_choice){

		temp = temp->next;
		if(temp==NULL){
			br(2); pre(4);  echo("Please Choice From List: "); br(2); Sleep(1000);
			goto foodlist;
		}

	}
	if(get_food_choice == temp->data){

		fcquantity:
		br(2); pre(4);
		printf("Enter Item Quantity : ");

		int fcquantity;

		fflush(stdin); scanf("%d",&fcquantity); cls();



		if(fcquantity==0){
			cls(); middle1();pre(3); printf("Quantity Can not be Zero "); Sleep(2000);
			cls();
			goto foodlist;
		}
		else if(fcquantity>temp->quantity){
			cls(); middle1();pre(3); printf("Out of Stock ! "); Sleep(2000);

			goto foodlist;
		}

		middle1();pre(4);  printf("Choice item %s  its price is %0.2f \n\n",temp->foodname,temp->price*fcquantity);pre(4);
		printf("1. Confirm to buy this \n\n");pre(4);
		printf("2. Item List \n\n");
		printf("Press 1 to confirm and 2 to back to list :");

		confirm:
		int confirm;

		fflush(stdin); scanf("%d",&confirm);

		if(confirm == 1 ){

			br(2);pre(4);
			printf(" 1. Cash ");
			br(2);pre(4);
            printf(" 2. Credit\n");
            printf("Select Method Of payment 1-2: ");
			payment:
			int payment;

			fflush(stdin);  scanf("%d",&payment);

			if(payment==1){


				totalmoney += temp->price*fcquantity;
				order++;
				total_order[order]=get_food_choice;
				order_quantity[order]=fcquantity;
				uquantity = temp->quantity - fcquantity;

				updatefood(get_food_choice,uquantity);


				cls();middle1();pre(4);  printf("===>THANK YOU<===");
				br(2);pre(4);  printf("Item Ordered Successfully ...");
				br(2);pre(4);  printf("1. Wanna Buy Another Delicious ? ");
				br(2);pre(4);  printf("2. Main Menu \n");
				br(2);pre(4);   printf("Select: ");
				psmenu:
				int ps_menu;

				fflush(stdin);  scanf("%d",&ps_menu);

				if(ps_menu==1){goto foodlist;}
				else if(ps_menu==2){goto mainmenu;}
				else{br(2);pre(4);printf("Please Choice from list : "); goto psmenu;}

			}

			///food list Credit Card Option

			else if(payment==2){

				int card_number[100];

				c++;

				cls();middle1();pre(4); printf("Enter Your Card No : ");

				fflush(stdin);   scanf("%d",&card_number[c]);



				cardno[c] = card_number[c];

				int pin;

				br(2);pre(2);  printf("Enter Your Card Pin [we never save your pin]  : ");

				fflush(stdin);     scanf("%d",&pin);

				cardmoney[c] = temp->price*fcquantity;

				totalmoney += temp->price*fcquantity;
				order++;
				total_order[order]=get_food_choice;
				order_quantity[order]=fcquantity;

				uquantity = temp->quantity - fcquantity;

				updatefood(get_food_choice,uquantity);

				br(2);pre(4);  printf("Payment Success...");
				br(2);pre(4);    printf("1. Wanna Buy Another Delicious ? ");
				br(2);pre(4);    printf("2. Main Menu \n");
				br(2);pre(4);   printf("select: ");
				psmenu2:
				int ps_menu2;

				scanf("%d",&ps_menu2);

				if(ps_menu2==1){goto foodlist;}
				else if(ps_menu2==2){goto mainmenu;}
				else{br(2);pre(4);printf("Please Choice from list : "); goto psmenu2;}

			}

			else{

				br(2);pre(4);   printf("Enter Choice from List : ");

				goto payment;


			}


		}    ///END food list Confirm Y/y



		else if(confirm == 2){

			goto foodlist;

		}

		else{
			br(2);pre(4);    printf("Enter Choice from List : ");

			goto confirm;


		}  ///end food confirm;


	}  ///end get food choice if line


	else{

		br(2);pre(4);  echo("Please Choose From List "); br(2); Sleep(300);

		goto foodlist;

	} ///end get food choice
	
}

void cls(){

	system("cls");

}

void echo(char print[]){

	printf("%s",print);
}

void br(int line){
	for(int i=0; i<line;i++){
		printf("\n");
	}
}

void pre(int tab){

	for(int i=0; i<tab;i++){
		printf("\t");
	}

}
void span(int space){

	for(int i=0; i<space;i++){
		printf(" ");
	}

}

void main_menu(){
	system("Color 07");

	cls();
	br(5); pre(3); echo(">> 1. Bakery Item List"); Sleep(400);
	br(2); pre(3); echo(">> 2. Admin Panel"); Sleep(400);
	br(2); pre(3); echo(">> 3. Special Packages");  Sleep(400);
	br(2); pre(3); echo(">> 4. Help");  Sleep(400);
	br(2); pre(3); echo(">> 5. Exit");  Sleep(400);
	br(8); pre(3); dtime();

	br(1);

}

void Help()
{
	system("mode 100,100");
	system("cls");
	system("color 0A");

		cout<<"\n----------------------------- HELP ------------------------------------\n";
		cout<<"\n\n";

		cout<<"  Main menu\n";
		cout<<"    |\n";
		cout<<"    |--- Item list\n";
		cout<<"    |        |\n";
		cout<<"    |        |____ Order an Item\n";
		cout<<"    |	           	|\n";
		cout<<"    |	           	|____ 1 Place order\n";
		cout<<"    |	           	|\n";
		cout<<"    |	           	|____ 2 Item quantity\n";
		cout<<"    |	                |\n";
		cout<<"    |	           	|____ 3 Confirm\n";
		cout<<"    |		                    |\n";
		cout<<"    |		                    |____ 3.1 Confirm to buy\n";
		cout<<"    |                               |            |\n";
		cout<<"    |                               |            |____ 3.1.1 Cash\n";
		cout<<"    |                               |            |____ 3.1.2 Credit\n"; 
		cout<<"    |		                    |____ 3.2 Item list\n";
		cout<<"    |    \n";
		cout<<"    |    \n";
		cout<<"    |--- Admin panel\n";
		cout<<"    |        |\n";
		cout<<"    |        |____ ONLY ADMIN CAN ACCESS THIS SECTION\n"; 
		cout<<"    |    \n";
		cout<<"    |--- Package list\n";
		cout<<"    |        |\n";
		cout<<"    |        |____ Order a package\n";
		cout<<"    |	           	|\n";
		cout<<"    |	           	|____ 1 Place order\n";
		cout<<"    |	           	|\n";
		cout<<"    |	           	|____ 2 Package quantity\n";
		cout<<"    |	                |\n";
		cout<<"    |	           	|____ 3 Confirm\n";
		cout<<"    |		                    |\n";
		cout<<"    |		                    |____ 3.1 Confirm to buy\n";
		cout<<"    |                               |            |\n";
		cout<<"    |                               |            |____ 3.1.1 Cash\n";
		cout<<"    |                               |            |____ 3.1.2 Credit\n"; 
		cout<<"    |		                    |____ 3.2 Package list\n";
		cout<<"    |   \n";
		cout<<"    |   \n";
		cout<<"    |--- Exit the Program\n";
		cout<<"\n\n\n  ";

		system("pause"); cls();

		cout<<"\n\n\tBakery main menu\n";
		cout<<"\n\t1. Item list - You can buy bakery products individually \n\n"; 
		cout<<"\t2. Admin panal - Access allows only admin !Don't try to the access! \n\n";  
		cout<<"\t3. specal package - You can celebrate your special occations in here.select your package! \n\n";
		cout<<"\t4. Exit - Exit the application\n\n";
		
		middle1(); pre(2); printf("Contact the Software developer for advice on technical issues! \n\n\n");
		br(1); pre(3); printf("Gmail: kkavindu221@gmail.com ");
		br(1); pre(3); printf("TP : +94 773431660 ");
		
        getch();
		system("mode 88,30");
}

void insertend(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	temp->next = NULL;


	if(head==NULL){
		head = temp;
		list = head;
	}
	else{

		while(head->next != NULL){
			head = head->next;
		}

		head->next = temp;
	}

}

void insertfirst(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data ;

	temp->price = price;

	strcpy(temp->foodname,foodname);

	temp-> quantity = quantity;


	temp->next = head;

	head = temp;

	list = head ;

}

void insertmid(int pos, int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	while(head->next->data != pos ){


		head = head->next ;

	}

	temp->next = head->next;
	head->next = temp ;

	//    free(temp);
}

void deletefood(int serial){

	node *temp;
	temp=(node *)malloc(sizeof(node));

	temp = list;


	if(temp->data != serial){

		while(temp->next->data != serial){
			temp = temp->next;
		}

		if(temp->next->data == serial){

			temp->next = temp->next->next;
			cls();
			printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++){printf(" .");Sleep(400);}

			printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		}
		else{
			printf("\n\n\n\n\t\t\tCoffee Item Not Found\n"); Sleep(500);
		}

		head = temp ;

	}
	else{

		temp = temp->next;
		cls();
		printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++){printf(" .");Sleep(400);}

		printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		head = temp ;

		list=head;
	}
}

void updatefood(int udata, int uquantity){

	node *temp;
	temp = list;

	while(temp->data!=udata){
		temp = temp->next;

	}
	if(temp->data == udata){
		temp->quantity = uquantity;
	}

}
//package data

void insertend2(int data2, char packagename[25], int quantity2, float price2){

	node2 *temp2;

	temp2=(node2 *)malloc(sizeof(node2));

	temp2->data2 = data2;

	temp2->price2 = price2;

	temp2-> quantity2 = quantity2;

	strcpy(temp2->packagename,packagename);

	temp2->next2 = NULL;


	if(head2==NULL){
		head2 = temp2;
		list2 = head2;
	}
	else{

		while(head2->next2 != NULL){
			head2 = head2->next2;
		}

		head2->next2 = temp2;
	}

}

void insertfirst2(int data2, char packagename[25], int quantity2, float price2){

	node2 *temp2;

	temp2=(node2 *)malloc(sizeof(node2));

	temp2->data2 = data2 ;

	temp2->price2 = price2;

	strcpy(temp2->packagename,packagename);

	temp2-> quantity2 = quantity2;


	temp2->next2 = head2;

	head2 = temp2;

	list2 = head2 ;

}

void insertmid2(int pos2, int data2, char packagename[25], int quantity2, float price2){

	node2 *temp2;

	temp2=(node2 *)malloc(sizeof(node2));

	temp2->data2 = data2;

	temp2->price2 = price2;

	temp2-> quantity2 = quantity2;

	strcpy(temp2->packagename,packagename);

	while(head2->next2->data2 != pos2 ){


		head2 = head2->next2 ;

	}

	temp2->next2 = head2->next2;
	head2->next2 = temp2 ;

	//    free(temp);
}

void deletepackage(int serial2){

	node2 *temp2;
	temp2=(node2 *)malloc(sizeof(node2));

	temp2 = list2;


	if(temp2->data2 != serial2){

		while(temp2->next2->data2 != serial2){
			temp2 = temp2->next2;
		}

		if(temp2->next2->data2 == serial2){

			temp2->next2 = temp2->next2->next2;
			cls();
			printf("\n\n\n\n\t\t\tDeleting Package %d ",serial2);for(int c2s=0;c2s<4;c2s++){printf(" .");Sleep(400);}

			printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		}
		else{
			printf("\n\n\n\n\t\t\tAnniversary Item Not Found\n"); Sleep(500);
		}

		head2 = temp2 ;

	}
	else{

		temp2 = temp2->next2;
		cls();
		printf("\n\n\n\n\t\t\tDeleting Package %d ",serial2);for(int c2s=0;c2s<4;c2s++){printf(" .");Sleep(400);}

		printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		head2 = temp2 ;

		list2=head2;
	}
}

void updatepackage(int udata2, int uquantity2){

	node2 *temp2;
	temp2 = list2;

	while(temp2->data2!=udata2){
		temp2 = temp2->next2;

	}
	if(temp2->data2 == udata2){
		temp2->quantity2 = uquantity2;
	}

}

int countitem(){

	node *temp;

	temp = list;

	int countitem=0;

	if(temp==NULL){
		countitem = 0;
	}
	else{
		countitem = 1;
		while(temp->next != NULL){
			countitem++;
			temp = temp->next;
		}

	}


	return countitem;

}

int countitem2(){

	node2 *temp2;

	temp2 = list2;

	int countitem2=0;

	if(temp2==NULL){
		countitem2 = 0;
	}
	else{
		countitem2 = 1;
		while(temp2->next2 != NULL){
			countitem2++;
			temp2 = temp2->next2;
		}

	}


	return countitem2;

}
void foodlist(){

	ccolor(0);

	printf("\n\t\t"); ccolor(240);
	printf("______________________________________________________ ");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("|  Item No.  |   Item Name   |  Price  |   In Stock   |");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("-------------------------------------------------------");ccolor(26);

	node *temp;

	temp = list;

	while(temp != NULL){

		ccolor(26);


		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |    %0.2f   |    %d    |",temp->data,temp->foodname, temp->price, temp->quantity);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("-------------------------------------------------------");


		temp = temp->next ;

		Sleep(100);

	}

	ccolor(26);

	//  free(temp);

}
void packagelist(){

	ccolor(0);

	printf("\n\t\t"); ccolor(240);
	printf("_________________________________________________________________________ ");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("|  Package No.  |   Package Name             |  Price      |   Available |");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("--------------------------------------------------------------------------");ccolor(26);

	node2 *temp2;

	temp2 = list2;

	while(temp2 != NULL){

		ccolor(26);


		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |    %0.2f   |    %d    |",temp2->data2,temp2->packagename, temp2->price2, temp2->quantity2);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("--------------------------------------------------------------------------");


		temp2 = temp2->next2 ;

		Sleep(100);

	}

	ccolor(26);

	//  free(temp);

}


void order_view(int order, int quantity, int or_no){



	ccolor(26);

	node *temp;

	temp = list;

	while(temp->data != order){

		temp = temp->next;

	}
	if(temp->data == order){

		ccolor(26);

		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |     %d     |     %d     |",or_no,temp->foodname,quantity,temp->quantity);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("-------------------------------------------------------");

		Sleep(100);

	}

	ccolor(26);

}

void order_view2(int order2, int quantity2, int or_no2){



	ccolor(26);

	node2 *temp2;

	temp2 = list2;

	while(temp2->data2 != order2){

		temp2 = temp2->next2;

	}
	if(temp2->data2 == order2){

		ccolor(26);

		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |     %d     |     %d     |",or_no2,temp2->packagename,quantity2,temp2->quantity2);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("-------------------------------------------------------");

		Sleep(100);

	}

	ccolor(26);

}

void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(hConsole, clr);

}


///HEERE PRINTF STYLE FUNCTION

void pwellcome(){
	system("Color 0A");
	ccolor(26);

	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" PANADERIA";
	char welcome4[50]=" BAKERY HOUSE";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			printf(" %c",welcome3[wlc3]);
		}
		else{

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			printf(" %c",welcome4[wlc3]);
		}
		else{

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(100);
	}
	ccolor(26);

}
void loadingbar(void){
	system("Color 09");

	for (int i=15;i<=100;i+=5){

		cls();

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){

			ccolor(160+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}

}
void backuploader(void){

	for (int i=15;i<=100;i+=5){

		cls();
		ccolor(26);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Backing UP DATA...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){

			ccolor(120+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(50);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(50);
		}
	}

}
void login(){
	string userName;
    string userPassword;
    int loginAttempt = 0;
	while (loginAttempt < 5)
	{
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "panaderia" && userPassword == "1234")
        {
            break;
        }
        else
        {
            printf("Invalid login attempt. Please try again.\n");
            loginAttempt++;
        }
    }
    
}
void welcomescreen()
{
	cls();
    system("color 0A");
    cout<<"\n";
 cout<<"                 ....HaVe A NicE dAy....                       \n";
 cout<<"______________________________________________________________  \n";
 cout<<"| __________________________________________________________ |  \n";
 cout<<"||                                                          ||  \n";
 cout<<"|| $     $  $$$$$  $      $$$$$  $$$$$  $$     $$  $$$$$    ||  \n";
 cout<<"|| $     $  $      $      $      $   $  $ $   $ $  $        ||  \n";
 cout<<"|| $  $  $  $$$$   $      $      $   $  $  $ $  $  $$$$     ||  \n";
 cout<<"|| $ $ $ $  $      $      $      $   $  $   $   $  $        ||  \n"; 
 cout<<"|| $$   $$  $$$$$  $$$$$  $$$$$  $$$$$  $       $  $$$$$    ||  \n";
 cout<<"||                                                          ||  \n";
 cout<<"||  $$$    $    $  $    $    $$$  $$$$ $ $  $$$$$    $      ||  \n";
 cout<<"||  $  $  $ $   $$ $   $ $   $  $ $__  $  $   $     $ $     ||  \n";
 cout<<"||  $$$  $$$$$  $ $$  $$$$$  $  $ $    $ $    $    $$$$$    ||  \n";
 cout<<"||  $   $     $ $  $ $     $ $$$  $$$$ $  $ $$$$$ $     $   ||  \n";
 cout<<"||                                                          ||  \n";
 cout<<"||                           ~                              ||  \n";
 cout<<"||                          ~`}                             ||  \n";
 cout<<"||                       ++++++++                           ||  \n";
 cout<<"||                       |      |..                         ||  \n";
 cout<<"||                        |    |..`                         ||  \n";
 cout<<"||                         ++++                             ||  \n";
 cout<<"||                                                          ||  \n";
 cout<<"|| All rights reserved by Panderia Bakery                   ||  \n";
 cout<<"|| Developed by : kavindu kokila                            ||  \n";
 cout<<"||__________________________________________________________||  \n";
 cout<<"|____________________________________________________________|  \n";
}

void dtime(){
	time_t tt;
	struct tm *ti;
	time(&tt);
	ti = localtime(&tt);
	cout<<"LAST UPDATE:"<<asctime(ti);
}

void middle1(void){

	printf("\n\n\n\n\n\n\n");
}

void middtab1(void){
	printf("\t\t\t\t\t");
}