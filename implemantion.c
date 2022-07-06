
#include <stdio.h>
#include "interface.h"


  //** cheack user choice **//

int vaild_choice_user(int num){
	
	if(num<1 || num>2){
		printf(" number not correct pleas try again  \n\n");
		return 1;
	}
		
	else{
	return 0;
	}
}	


//** cheack main program choice **//
int vaild_choice(int num){
	
	if(num<1 || num>3){
		printf(" number not correct pleas try again  \n\n");
		return 1;
	}
		
	else{
	return 0;
	}
}
//** cheack pasword corretence  **//
int valid_pas(int pas){
	if(pas==1234)
		return 1;
	else
		printf(" pasword not correct pleas try again  \n\n");
		return 0;
	
}
//** cheack admin choice **//
int valid_admin_chiose(int num){
	if(num<1 || num >4)
		return 0;
	else
		return 1;
	
}

//** cheack id existing **//
int id_existing(patient arr[],int size,int id){
	int index=-1;
   for(int i=0 ; i<size;i++){
	   if(id==arr[i].id){
		  index=i; 
	   }  
   }
	
   return index;	
}

//** copy array to array **//
void asimgnt_arr(char arr[],char new[],int size){
	
	for(int i=0; i< size ;i++){
	  arr[i]=new[i];
	}
}

//** add new patient in data base **//
void add_new_patient(patient arr[],int size,int* index,char name[],char gender[],int age,int id){
	if(id_existing(arr,size,id)!=-1){
		printf("can\'t enter this id, id is already existing\n\n");
	}else if((size-1)==*index){
	
	   printf("can\'t enter this patient, data base is full\n\n");
	}else{
	
    asimgnt_arr(arr[*index].name,name,10);	
	asimgnt_arr(arr[*index].gender,gender,10);
	arr[*index].id=id;
	arr[*index].age=age;
	*index++;
		
	}
	
	
}

//** edit patient inforametion **//
void edit_patient_record(patient arr[],int size,char name[],char gender[],int age,int id){
	int a=id_existing(arr,size,id);
	if(a==-1){
		printf("id not found \n");			
	}else{
		    asimgnt_arr(arr[a].name,name,10);	
	        asimgnt_arr(arr[a].gender,gender,10);
	        arr[a].age=age;
		
	}
}

//** add new reservation **//
void  add_reservation(reservation  arr[],int size){
	int id=0;
	char ti[10];
	for(int i =0; i < size ;i++){
		if(arr[i].id==0){
			printf("%s  ",arr[i].time);
		}
	}
	printf("\nenter time : ");
	scanf("%s",&ti);
	printf("enter id  : ");
	scanf("%d",&id);
	
	for(int i =0; i < size ;i++){
		if(compare_arr(arr[i].time,ti,4)){
			arr[i].id=id;
			//flag=i;
		}
	}
}
//** compare two array **//
int compare_arr(char arr[],char aray[],int size){
	
	 for(int i=0;i<size ;i++){
		 if(arr[i]!=aray[i])
		   return 0;
	 }
	return 1;
}

//** show patient inforametion **//
void View_patient_record(patient arr[],int size,int id){
	int flag = -1;
	for(int i=0;i<size ;i++){
		if(arr[i].id==id){
			printf("name : %s   \n",arr[i].name);
			printf("gender : %s  \n",arr[i].gender);
			printf(" age : %d   \n",arr[i].age);
			printf("id : %d   \n\n",arr[i].id);
			flag = i;
			break;
		}
	}
	if(flag == -1)
	printf("id not found \n\n");
}

//** cancel reservation **//
void Cancel_reservation(reservation  arr[],int size ,int id ){
	for(int i=0;i<size;i++){
		if(arr[i].id==id){
			arr[i].id=0;
		}
	}
}
//** View today reservations **//
void View_today_reservations(reservation  arr[],int size ){
	for(int i=0 ;i< size ;i++){
		if(arr[i].id!=0){
			printf("%s  %d  \n",arr[i].time,arr[i].id);
			
		}
		
	}
	printf("\n");
}