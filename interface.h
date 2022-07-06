

typedef struct{
	
	char name[10];
	char gender[10];
	int age;
	int id;
	
}patient;


typedef struct{
	
	char time[10];
	int id;
	
}reservation;



int compare_arr(char arr[],char aray[],int size);
int vaild_choice_user(int num);
int valid_pas(int pas);
int vaild_choice(int num);
int valid_admin_chiose(int num);
int id_existing(patient arr[],int size,int id);
void add_new_patient(patient arr[],int size,int* index,char name[],char gender[],int age,int id);
void edit_patient_record(patient arr[],int size,char name[],char gender[],int age,int id);
void  add_reservation(reservation  arr[],int size);
void Cancel_reservation(reservation  arr[],int size ,int id );
void View_patient_record(patient arr[],int size,int id);
void asimgnt_arr(char arr[],char new[],int size);
void View_today_reservations(reservation  arr[],int size );