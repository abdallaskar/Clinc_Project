#include <stdio.h>
#include "interface.h"

////pasword admin 1234 ///



int main(void){
	
	patient  data_base[20]={{"abdalla","male",25,123}};
	reservation  arr_reservation[10]={{"2:30",123},{"3:00"},{"3:30"},{"4:00"},{"4:30"},{"5:00"},{"5:30"}};
	
	int index=0;
	int id=0, age=0;
	char inname[10];
	char ingender[10];
    int choise=0,user_choise=0,pasword=0,admin_choise=0;
	
	while(1){
		do{
		printf("if you want admin mode enter number : 1\n");
		printf("if you want user mode enter number : 2\n");
		printf("if you want close the program enter number  : 3\n");
		scanf("%d",&choise);
		printf("\n");
		}while(vaild_choice(choise));
		
		switch(choise){
			
			case 1:{
				do{
				printf("pleas enter your pasword : ");
				scanf("%d",&pasword);
				printf("\n\n");
				}while(!valid_pas(pasword));
				do{
				printf("Add new patient record : 1 \n");
				printf("Edit patient record : 2\n");
				printf("Reserve a slot with the doctor : 3 \n");
				printf("Cancel reservation : 4\n");
				scanf("%d",&admin_choise);
				}while(!valid_admin_chiose(admin_choise));
				
				switch(admin_choise){
					case 1:{
						
						printf("enter your id : ");
						scanf("%d",&id);
						printf("enter your name : ");
						scanf("%s",inname);
						printf("enter your gender : ");
						scanf("%s",ingender);
						printf("enter your age : ");
						scanf("%d",&age);
						printf("\n\n");
						
						add_new_patient(data_base,20,&index,inname,ingender,age,id);
						
						
						
					}break;
					case 2: {
						printf("enter your id : ");
						scanf("%d",&id);
						int a=id_existing(data_base,20,id);
						if(a==-1){
						   
						}else{
							
						printf("enter your name : ");
						scanf("%s",inname);
						printf("enter your gender : ");
						scanf("%s",ingender);
						printf("enter your age : ");
						scanf("%d",&age);
						edit_patient_record(data_base,20,inname,ingender,age,id);
						}
					}break;
					
					
					case 3:{
						add_reservation(arr_reservation,7);
						
					}break;
					
					case 4:{
						int id_cansaled=0;
						printf("pleas enter id you want to cansaled : ");
						scanf("%d",&id_cansaled);
						Cancel_reservation(arr_reservation,7,id_cansaled);

					}break;
					
				}
				
			}break;
			
			case 2:{
				do{
				printf("to View patient record enter number : 1 \n");
				printf("to View today\'s reservations enter number : 2\n");
				scanf("%d",&user_choise);
				}while(vaild_choice_user(user_choise));
				
				
				switch(user_choise){
					case 1:{
						int id_informtion=0;
						printf("To View patient record pleas enter id :");
						scanf("%d",&id_informtion);
						printf("\n\n");
						View_patient_record(data_base,20,id_informtion);
						
					}break;
					
					case 2:{
						
						View_today_reservations(arr_reservation,10);
					}break;
					
				}
				
				
			}break;
			
			case 3:{
				return 0;	
			}
			
			break ;
			
		}
	}
	

	return 0;
}	
	
