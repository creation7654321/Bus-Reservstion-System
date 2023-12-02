#include<iostream>
#include<fstream>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<stdlib.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

 
using namespace std;
void gotoxy(short x,short y)    // coordinate not defined, so to define 
		{
		COORD pos = {x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		}
class registration
{    
static int z;
    char pass[30];
    char FirstName[30];
   
    char LastName[30];
    long long contact;
    char username[10];
    char b[40][40];
    char a;
    int k;
   	int amount;
   	int seatno;
	public:

	
	
    char* getusername(){
	    return(username);
	 }
	 
	char* getLastName(){
	    return(LastName);
	 }
	 
	char* getpassword(){
	    	return(pass);
	 	
 }
 
	 void initalize(){     
     		for (int i=0;i<30;i++){
     		strcpy(b[i],"Empty");
     		}
}
     int calculate_bill(int a,int c)              //This is for calculating payment.
     	{ 
        	amount=c*a;
     	  return(amount);
}
     	
     void bus_stat()
     	 {      
     	   gotoxy(90,2);//driver seat
     	 	cout<<" ______________";
     	 	gotoxy(90,3);
     	 	cout<<"|              |";
     	 	gotoxy(90,4);
     	 	cout<<"|Driver Seat";
			gotoxy(105,4);
			cout<<"|";      
     	 	gotoxy(90,5);
     	 	cout<<"|______________|";
     	
     	 	 gotoxy(10,6);//first seat
     	 	cout<<" ______________";
     	 	gotoxy(10,7);
     	 	cout<<"|              |";
     	 	gotoxy(10,8);
     	 	cout<<"|1."<<b[0];
			gotoxy(25,8);
			cout<<"|";      
     	 	gotoxy(10,9);
     	 	cout<<"|______________|";
     	 	 gotoxy(30,6);//second seat
     	 	cout<<" ______________";
     	 	gotoxy(30,7);
     	 	cout<<"|              |";
     	 	gotoxy(30,8);
     	 	cout<<"|2."<<b[1];
			gotoxy(45,8);
			cout<<"|";      
     	 	gotoxy(30,9);
     	 	cout<<"|______________|";
     	 	gotoxy(70,6);//third seat
     	 	cout<<" ______________";
     	 	gotoxy(70,7);
     	 	cout<<"|              |";
     	 	gotoxy(70,8);
     	 	cout<<"|3."<<b[2];
			gotoxy(85,8);
			cout<<"|";      
     	 	gotoxy(70,9);
     	 	cout<<"|______________|";
     	 		gotoxy(90,6);//fourth seat
     	 	cout<<" ______________";
     	 	gotoxy(90,7);
     	 	cout<<"|              |";
     	 	gotoxy(90,8);
     	 	cout<<"|4."<<b[3];
			gotoxy(105,8);
			cout<<"|";      
     	 	gotoxy(90,9);
     	 	cout<<"|______________|";
     	 	gotoxy(10,10);//5 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,11);
     	 	cout<<"|              |";
     	 	gotoxy(10,12);
     	 	cout<<"|5."<<b[4];
			gotoxy(25,12);
			cout<<"|";      
     	 	gotoxy(10,13);
     	 	cout<<"|______________|";
     	 	 gotoxy(30,10);//6th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,11);
     	 	cout<<"|              |";
     	 	gotoxy(30,12);
     	 	cout<<"|6."<<b[5];
			gotoxy(45,12);
			cout<<"|";      
     	 	gotoxy(30,13);
     	 	cout<<"|______________|";
     	 		gotoxy(70,10);//7th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,11);
     	 	cout<<"|              |";
     	 	gotoxy(70,12);
     	 	cout<<"|7."<<b[6];
			gotoxy(85,12);
			cout<<"|";      
     	 	gotoxy(70,13);
     	 	cout<<"|______________|";
     	 		gotoxy(90,10);//8 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,11);
     	 	cout<<"|              |";
     	 	gotoxy(90,12);
     	 	cout<<"|8."<<b[7];
			gotoxy(105,12);
			cout<<"|";      
     	 	gotoxy(90,13);
     	 	cout<<"|______________|";
     	 		gotoxy(10,14);//9 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,15);
     	 	cout<<"|              |";
     	 	gotoxy(10,16);
     	 	cout<<"|9."<<b[8];
			gotoxy(25,16);
			cout<<"|";      
     	 	gotoxy(10,17);
     	 	cout<<"|______________|";
     	 	 gotoxy(30,14);//10th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,15);
     	 	cout<<"|              |";
     	 	gotoxy(30,16);
     	 	cout<<"|10."<<b[9];
			gotoxy(45,16);
			cout<<"|";      
     	 	gotoxy(30,17);
     	 	cout<<"|______________|";
     	 		gotoxy(70,14);//11th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,15);
     	 	cout<<"|              |";
     	 	gotoxy(70,16);
     	 	cout<<"|11."<<b[10];
			gotoxy(85,16);
			cout<<"|";      
     	 	gotoxy(70,17);
     	 	cout<<"|______________|";
     	 		gotoxy(90,14);//12 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,15);
     	 	cout<<"|              |";
     	 	gotoxy(90,16);
     	 	cout<<"|12."<<b[11];
			gotoxy(105,16);
			cout<<"|";      
     	 	gotoxy(90,17);
     	 	cout<<"|______________|";
     	 		gotoxy(10,18);//13 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,19);
     	 	cout<<"|              |";
     	 	gotoxy(10,20);
     	 	cout<<"|13."<<b[12];
			gotoxy(25,20);
			cout<<"|";      
     	 	gotoxy(10,21);
     	 	cout<<"|______________|";
     	 	 gotoxy(30,18);//14th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,19);
     	 	cout<<"|              |";
     	 	gotoxy(30,20);
     	 	cout<<"|14."<<b[13];
			gotoxy(45,20);
			cout<<"|";      
     	 	gotoxy(30,21);
     	 	cout<<"|______________|";
     	 		gotoxy(70,18);//15th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,19);
     	 	cout<<"|              |";
     	 	gotoxy(70,20);
     	 	cout<<"|15."<<b[14];
			gotoxy(85,20);
			cout<<"|";      
     	 	gotoxy(70,21);
     	 	cout<<"|______________|";
     	 		gotoxy(90,18);//16 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,19);
     	 	cout<<"|              |";
     	 	gotoxy(90,20);
     	 	cout<<"|16."<<b[15];
			gotoxy(105,20);
			cout<<"|";      
     	 	gotoxy(90,21);
     	 	cout<<"|______________|";
     	 		gotoxy(10,22);//17 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,23);
     	 	cout<<"|              |";
     	 	gotoxy(10,24);
     	 	cout<<"|17."<<b[16];
			gotoxy(25,24);
			cout<<"|";      
     	 	gotoxy(10,25);
     	 	cout<<"|______________|";
     	 	 gotoxy(30,22);//18th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,23);
     	 	cout<<"|              |";
     	 	gotoxy(30,24);
     	 	cout<<"|18."<<b[17];
			gotoxy(45,24);
			cout<<"|";      
     	 	gotoxy(30,25);
     	 	cout<<"|______________|";
     	 		gotoxy(70,22);//19th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,23);
     	 	cout<<"|              |";
     	 	gotoxy(70,24);
     	 	cout<<"|19."<<b[18];
			gotoxy(85,24);
			cout<<"|";      
     	 	gotoxy(70,25);
     	 	cout<<"|______________|";
     	 		gotoxy(90,22);//20 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,23);
     	 	cout<<"|              |";
     	 	gotoxy(90,24);
     	 	cout<<"|20."<<b[19];
			gotoxy(105,24);
			cout<<"|";      
     	 	gotoxy(90,25);
     	 	cout<<"|______________|";
     	 		gotoxy(10,26);//21 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,27);
     	 	cout<<"|              |";
     	 	gotoxy(10,28);
     	 	cout<<"|21."<<b[20];
			gotoxy(25,28);
			cout<<"|";      
     	 	gotoxy(10,29);
     	 	cout<<"|______________|";
     	 		 gotoxy(30,26);//22th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,27);
     	 	cout<<"|              |";
     	 	gotoxy(30,28);
     	 	cout<<"|22."<<b[21];
			gotoxy(45,28);
			cout<<"|";      
     	 	gotoxy(30,29);
     	 	cout<<"|______________|";
     	 		gotoxy(70,26);//23th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,27);
     	 	cout<<"|              |";
     	 	gotoxy(70,28);
     	 	cout<<"|23."<<b[22];
			gotoxy(85,28);
			cout<<"|";      
     	 	gotoxy(70,29);
     	 	cout<<"|______________|";
     	 		gotoxy(90,26);//24 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,27);
     	 	cout<<"|              |";
     	 	gotoxy(90,28);
     	 	cout<<"|24."<<b[23];
			gotoxy(105,28);
			cout<<"|";      
     	 	gotoxy(90,29);
     	 	cout<<"|______________|";
     	 		/*	gotoxy(10,30);//25 seat
     	 	cout<<" ______________";
     	 	gotoxy(10,31);
     	 	cout<<"|              |";
     	 	gotoxy(10,32);
     	 	cout<<"|25."<<b[24];
			gotoxy(25,32);
			cout<<"|";      
     	 	gotoxy(10,33);
     	 	cout<<"|______________|";
     	 			 gotoxy(30,30);//26th seat
     	 	cout<<" ______________";
     	 	gotoxy(30,31);
     	 	cout<<"|              |";
     	 	gotoxy(30,32);
     	 	cout<<"|26."<<b[25];
			gotoxy(45,32);
			cout<<"|";      
     	 	gotoxy(30,33);
     	 	cout<<"|______________|";
     	 		gotoxy(70,30);//28th seat
     	 	cout<<" ______________";
     	 	gotoxy(70,31);
     	 	cout<<"|              |";
     	 	gotoxy(70,32);
     	 	cout<<"|28."<<b[27];
			gotoxy(85,32);
			cout<<"|";      
     	 	gotoxy(70,33);
     	 	cout<<"|______________|";
     	 		gotoxy(90,30);//29 seat
     	 	cout<<" ______________";
     	 	gotoxy(90,31);
     	 	cout<<"|              |";
     	 	gotoxy(90,32);
     	 	cout<<"|29."<<b[28];
			gotoxy(105,32);
			cout<<"|";      
     	 	gotoxy(90,33);
     	 	cout<<"|______________|";
     	 				 gotoxy(50,30);//27th seat
     	 	cout<<" ______________";
     	 	gotoxy(50,31);
     	 	cout<<"|              |";
     	 	gotoxy(50,32);
     	 	cout<<"|27."<<b[26];
			gotoxy(65,32);
			cout<<"|";      
     	 	gotoxy(50,33);
     	 	cout<<"|______________|";*/
     	 		
     	 	
     	 
		  }
		   
		  char *seat_stat(int n){   //This is for seat status.
		  	return(b[n-1]);
		  }
     	
     	
	
		  
     void reserve(int ind){                  //This is for reserving seats.
		  	strcpy(b[ind-1],"Booked");
		  }

	 void cancel(int ind){                    //This is for to empty seats.
		  	strcpy(b[ind-1],"Empty");
		  }
		
	int book_ticketing( )
	   {
	   	 cin>>seatno;
	   	 return(seatno);
	   }
	void show_bookticketing()
	{ cout<<"\t";
	cout<<seatno;
	}
	
		  
    
};

 int registration::z;
//for kathmandu to dhankuta********************************************************
       registration r1,r2,r3,r4,r5,r6,r7,r8,r9;
void ktm_to_dkt_sajha(){
    	fstream fin,fout;
	    fin.open("sajha.txt");
	    if(fin.fail())
	    {
		fout.open("sajha.txt",ios::out);
		r1.initalize();
		fout.write((char *)&r1,sizeof(r1));
		fout.close();
		ktm_to_dkt_sajha();
		}
		else
		{fin.read((char *)&r1,sizeof(r1));
	    fin.close();
         }
}
void ktm_to_dkt_bihani(){
    	fstream fin,fout;
	    fin.open("bihani.txt");
	    if(fin.fail())
	    {
		fout.open("bihani.txt",ios::out);
		r2.initalize();
		fout.write((char *)&r2,sizeof(r2));
		fout.close();
		ktm_to_dkt_bihani();
		}
		else
		{fin.read((char *)&r2,sizeof(r2));
	    fin.close();
         }
}

void ktm_to_dkt_mayur(){
    	fstream fin,fout;
	    fin.open("mayur.txt");
	    if(fin.fail())
	    {
		fout.open("mayur.txt",ios::out);
		r3.initalize();
		fout.write((char *)&r3,sizeof(r3));
		fout.close();
		ktm_to_dkt_mayur();
		}
		else
		{fin.read((char *)&r3,sizeof(r3));
	    fin.close();
         }
}
void ktm_to_dkt_agni(){
    	fstream fin,fout;
	    fin.open("agni.txt");
	    if(fin.fail())
	    {
		fout.open("agni.txt",ios::out);
		r4.initalize();
		fout.write((char *)&r4,sizeof(r4));
		fout.close();
		ktm_to_dkt_agni();
		}
		else
		{fin.read((char *)&r4,sizeof(r4));
	    fin.close();
         }
}

void ktm_to_pokh_sajhap(){
    	fstream fin,fout;
	    fin.open("sajhap.txt");
	    if(fin.fail())
	    {
		fout.open("sajhap.txt",ios::out);
		r5.initalize();
		fout.write((char *)&r5,sizeof(r5));
		fout.close();
		ktm_to_pokh_sajhap();
		}
		else
		{fin.read((char *)&r5,sizeof(r5));
	    fin.close();
         }
}
void ktm_to_pokh_munal(){
    	fstream fin,fout;
	    fin.open("munal.txt");
	    if(fin.fail())
	    {
		fout.open("munal.txt",ios::out);
		r6.initalize();
		fout.write((char *)&r6,sizeof(r6));
		fout.close();
		ktm_to_pokh_munal();
		}
		else
		{fin.read((char *)&r6,sizeof(r6));
	    fin.close();
         }
}
void bir_to_nep_daphe(){
    	fstream fin,fout;
	    fin.open("daphe.txt");
	    if(fin.fail())
	    {
		fout.open("daphe.txt",ios::out);
		r7.initalize();
		fout.write((char *)&r7,sizeof(r7));
		fout.close();
	bir_to_nep_daphe();
		}
		else
		{fin.read((char *)&r7,sizeof(r7));
	    fin.close();
         }
}
void bir_to_nep_saptakoshi(){
    	fstream fin,fout;
	    fin.open("saptakoshi.txt");
	    if(fin.fail())
	    {
		fout.open("saptakoshi.txt",ios::out);
		r8.initalize();
		fout.write((char *)&r8,sizeof(r8));
		fout.close();
	bir_to_nep_saptakoshi();
		}
		else
		{fin.read((char *)&r8,sizeof(r8));
	    fin.close();
         }
}
void bir_to_nep_koshi(){
    	fstream fin,fout;
	    fin.open("koshi.txt");
	    if(fin.fail())
	    {
		fout.open("koshi.txt",ios::out);
		r9.initalize();
		fout.write((char *)&r9,sizeof(r9));
		fout.close();
	bir_to_nep_koshi();
		}
		else
		{fin.read((char *)&r9,sizeof(r9));
	    fin.close();
         }
}


  
 int main()
  {  
	time_t now;
	struct tm nowLocal;
	now=time(NULL);
	nowLocal=*localtime(&now);
  srand(time(NULL));
  
  
  int j;


fstream fout,fout1;
fstream finn,fin1;
char save[30];
char usercheck[30];
int t_bus_no;
int t_fair;
int fair=0;
int found_cancel=0;
int found_book=0;


  	
int choice_route;
  char a;
  int k;
  int i;
  int m=0;
  int n=0;
 

  char admin_key[30],current_admin_key[30],new_admin_key[30],save_admin_key[30];
  int admin_choice;
  int seatno;
 int seat_no[60];
 int r;
  int cancel_seatno[60];
  
  int check_seat_no[60];
  int t_seat_no[60];
  
  int month;
  int year;
  int day;
  string passenger_name;
  string passenger_f_name;
  string passenger_l_name;
long long phone;
long long ref_no;
int i_i;

int c=0;
int b;
int found;
int new_fair;
int bus_no;
char t_f_name[30], t_l_name[30],t_from[30],t_to[30];
 long long t_ref_no, t_contact,contact,tt_contact;
 int t_day, t_month, t_year,t_no_of_ticket;
   int hour, hour1, min, min1, diff_hour, diff_min,sec;
    int i_j;
  	
  	registration u1;
  	registration u2;
  	registration b1[30];
  	
  	int count=0;
  	int *seat_nor;
  	
  	int choice_buses;
  	string from;
  	int choice_view,choice_a_booking;
  	string to;
  	 fstream fin;
  	 
char firstname[30],lastname[30],t_firstname[30],t_lastname[30],password[30],t_password[30],t_username[30],username[30],pass[30];
	int choice,tries=0,tries1=0,found1=0,get_your_ticket=0,read_instruction=0,q=0;

	char cha,ch,dash1,dash2;
		 int desiredHour,desiredMinute, bookingHour, bookingMinute,desiredMonth,desiredYear,desiredDay,currentDay,currentMonth,currentYear  ;	
		 int currentMinute,currentHour,currentSecond;
		 int t_desiredYear,t_desiredMonth,t_desiredDay,t_departuretime;		 
				 
						
//***********************************************************************************************
//	system("cls");
    cout<<"\n\n\t\t\t*******************************"<<endl;
    cout<<"\t\t\t\t   MAIN MENU"<<endl;
    cout<<"\t\t\t*******************************"<<endl;
	cout<<"\t\t\t[1]Sign Up"<<endl;
	cout<<"\t\t\t[2]Login"<<endl;
	cout<<"\t\t\t[3]Admin Login"<<endl;
	cout<<"\t\t\t[4]Exit"<<endl;
	gotoxy(32,10);
	cin>>choice;
	switch(choice)
	{
		case 1: system("cls");
		       
		        cout<<"Enter First Name  :";
		        cin>>firstname;
		        cout<<"Enter Last Name   :";
		        cin>>lastname;
		        cout<<"Enter Contact No. :";
		        cin>>contact;
		        cout<<"Create  Username  :";
		        create_top:
		        cin>>username;
		        fin.open("login.txt",ios::in);
		        if (fin.fail()){
		        	fin.clear();
					fin.open("login.txt",ios::out);
					fin.close();
				}
				else {
		        fin>>t_username>>t_password>>t_firstname>>t_lastname>>t_contact;
		         while(!fin.eof()){
		        	if(strcmp(username,t_username)==0){
		        	 	cout<<"This username already exist"<<endl;
		        	 	cout<<"Create another username:"<<endl;
		        	 	fin.close();
						goto create_top;
		        	 	
					}
					 fin>>t_username>>t_password>>t_firstname>>t_lastname>>t_contact;
				}
		    }
		    
		        	
				fin.close();
		        cout<<"Create Password :";
		        k=0;
		        while(1)
		        { cha=getch();
		              if(cha==ENTER){
		              	password[k]='\0';
		              	break;
		                           }
		             else if(cha==BKSP){
		             	 if(k>0){
		             	 	
					        	k--;
					        	printf("\b \b");
						  }
					 }
				     else if(cha==TAB|cha==SPACE){
				    	 continue;
					 }
					 else{
					 	password[k]=cha;
					 	k++;
					 	cout<<"*";
					 }
					
				}
				fout.open("login.txt",ios::app);
				fout<<username<<" "<<password<<" "<<firstname<<" "<<lastname<<" "<<contact<<"\n";
				fout.close();
				system("cls");
				main();
			   
				
		         break;
		         
		         
		case 2:
			
		       system("cls");
		       login_top:
		       
				if(tries<3){
		        tries++;
		        cout<<"Enter Username :";
		        cin>>username;
		        
		        cout<<"Enter  Password :";
		         k=0;
		         while(1)
		        { ch=getch();
		              if(ch==ENTER){
		                 pass[k]='\0';
		              	 break;
		                           }
		              else if(ch==BKSP){
		             	  if(k>0){
		             	 	
					        	 k--;
					        	  printf("\b \b");
						  }
					 }
				     else if(ch==TAB|ch==SPACE){
				    	      continue;
					 }
					 else{
					    pass[k]=ch;
					 	k++;
					 	cout<<"*";
					 }
					
				}
			
				fin.open("login.txt",ios::in);
				fin>>t_username>>t_password>>t_firstname>>t_lastname>>t_contact;
				while(!fin.eof()){
					   if((strcmp(pass,t_password)==0)&&(strcmp(username,t_username)==0)){
					   
					   //	cout<<"\nlogin is sucessfull"<<endl;
					   fin.close();
					   	goto login_down;
							
					   }
					   	fin>>t_username>>t_password>>t_firstname>>t_lastname>>t_contact;
				}
				system("cls");
				cout<<"\nLOGIN IS UNSUCCESSFUL."<<endl;
				cout<<"Your username or password may be invalid."<<endl;
				//cout<<"Enter the correct data "<<endl;
			    cout<<"\n";
				fin.close();
				goto login_top;
			
				
			}
			else
		        {system("cls");
		          main();
				}
			 break;

	       

  	 
//*****************************************************************************************
		    	login_down:
		    	hour=nowLocal.tm_hour;
             	min=nowLocal.tm_min;
            	sec=nowLocal.tm_sec;
            		currentHour=nowLocal.tm_hour;
					currentMinute=nowLocal.tm_min;
				   currentSecond=nowLocal.tm_sec;
				   currentDay=nowLocal.tm_mday;
				    currentMonth=nowLocal.tm_mon+1;
					currentYear=nowLocal.tm_year+1900;
				  desiredHour=13;
				  desiredMinute=0;	
			cout<<"The available Routes are:"<<endl;
			fin1.open("fair.txt",ios::in);
            	if(fin1.fail()){
            		fin1.close();
            		fin1.open("fair.txt",ios::app);
            		fin1<<"2213"<<" "<<"500"<<"\n";
            		fin1<<"2233"<<" "<<"500"<<"\n";
            		fin1<<"3213"<<"  "<<"500"<<"\n";
            		fin1<<"5213"<<"  "<<"500"<<"\n";
            		fin1<<"4276"<<"  "<<"500"<<"\n";
            		fin1<<"3276"<<"  "<<"500"<<"\n";
            		fin1<<"5167"<<"  "<<"500"<<"\n";
            		fin1<<"6167"<<"  "<<"500"<<"\n";
            		fin1<<"6166"<<"  "<<"500"<<"\n";
            		
            		
            		
            		
            		fin1.close();
            		fin1.open("fair.txt",ios::in);
				}
				fin1.close();
		    cout<<endl;
		    cout<<endl;
		    system("cls");
		    route_back:
		    cout<<"*******************************"<<endl;
		    cout<<"      Selection of routes              "<<endl;
		     cout<<"******************************"<<endl;
		    cout<<"\n\n_________________________________"<<endl;
		    cout<<"[1]Kathmandu to Dhankuta"<<endl;
		     cout<<"________________________________"<<endl<<endl;
		     
		    cout<<"_________________________________"<<endl;
            cout<<"[2]Kathmandu to Pokhara"<<endl;
            cout<<"_________________________________"<<endl<<endl;
            
            cout<<"_________________________________"<<endl;
            cout<<"[3]Birjung to Nepaljung"<<endl;
            cout<<"_________________________________"<<endl<<endl;
           
           cout<<"_________________________________"<<endl;
           cout<<"[4]Kanchanpur to Illam"<<endl;
           cout<<"_________________________________"<<endl<<endl;
           
           cout<<"_________________________________"<<endl;
           cout<<"[5]Go To Main"<<endl;
           cout<<"_________________________________"<<endl;
            
            cout<<endl;
           //gotoxy(27,22);
            cout<<"Please, select the route:"<<endl;
            //gotoxy(27,24);
            cin>>choice_route;
            char x;
            switch(choice_route)
            {
	 case 1:    
	            back:
	            system("cls");
	             cout<<"*********************************************************"<<endl;
		       cout<<"            Selection of buses              "<<endl;
		        cout<<"***********************************************************"<<endl;
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"[1] sajha yatayat(Bus no: Ba 3 Kha 2213 )"<<endl;
	            cout<<"    Depature time:8 pm"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"[2] Bihani yatayat(Bus no:Ko 1 Ta 2233 )"<<endl;
	            cout<<"    Depature time:6 am"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"[3] Mayur yatayat(Bus no: Ba 3 Ta 3213 )"<<endl;
	            cout<<"    Depature time:10 pm"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"[4] Agni yatayat(Bus no: ko 2 kha 5213 )"<<endl;
	            cout<<"    Depature time:3 pm"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"[5] Go Back"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	              
	             cin>>choice_buses;
	             switch(choice_buses)
	             {
		     case 1: 	  
            
		             system("cls");      
		             int d1;
	                 d1_sajha_kd:
	                  cout<<"*****************************************"<<endl;
		           cout<<"            Ticket booking menu             "<<endl;
		           cout<<"*****************************************"<<endl;
	                 cout<<"[1]Ticket booking"<<endl;
	                 cout<<"[2]Show reservation status"<<endl;
	                 cout<<"[3]View the bus details"<<endl;
	                 cout<<"[4]Go back"<<endl;
	                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1: system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=20;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto sajha_time_kd;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_sajha_kd;
						  }	
							  sajha_time_kd:
					          get_your_ticket=0;
					          r=0;
					          i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTicket booking "<<endl;
							 cout<<"***********************************************************************************************************"<<endl;
							 
				             ktm_to_dkt_sajha();
		                     i=0,j=0;
		       
			              do{ 
		                   r1.bus_stat();
		                    ktm_to_dkt_sajha:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_dkt_sajha;
							}
		                    strcpy(save,r1.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r1.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_dkt_sajha;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("sajha.txt",ios::out);
	              fout.write((char*)&r1,sizeof(r1));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==2213)
			           {
			        	 fair=t_fair;
			             goto down2_sajha_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_sajha_kd:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"8"<<" "<<"kathmandu"<<" "<<"dhankuta"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_sajha_kd;
	               d1_sajha_a_booking_kd:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_sajha_kd:
			        j=0;
			        k=0;
			        cout<<"\t\t\t\t\t\tTicket cancelling "<<endl;
			     cout<<"***********************************************************************************************************"<<endl;
				//	cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_dkt_sajha();
			       
			      
			        uppp_sajha_kd:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r1.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r1.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_sajha_kd;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_sajha_kd;
                        bottom_sajha_kd:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r1.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_sajha_kd:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("sajha.txt",ios::out);
	                  fout.write((char*)&r1,sizeof(r1));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==2213)
			           {
			        	 fair=t_fair;
			             goto down22_sajha_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_sajha_kd:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_sajha_a_booking_kd;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_sajha_kd;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_sajha_a_booking_kd;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      
						cout<<seat_no[i]<<" ";
					
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"2213"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"8 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_sajha_a_booking_kd;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_sajha_kd;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_sajha_a_booking_kd;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_dkt_sajha();
			          r1.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_sajha_kd;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==2213)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:8 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_sajha_kd;
			        break;
		        
	     case 4:    goto back;
		            break;
		            
		default:   cout<<"Invalid choices"<<endl;
		               goto d1_sajha_kd;
                          }
                       break;
//*****************End of sajha yatayat ktm to dkt *********************************************
//_________________________start of bihani ktm to dkt___________________________________________
         case 2:  	  
                     system("cls");      
		             
	                 d1_bihani_kd:
	               cout<<"**************************************"<<endl;
		           cout<<"            Ticket booking menu             "<<endl;
		           cout<<"**************************************"<<endl;
	                 cout<<"[1]Ticket Booking"<<endl;
	                 cout<<"[2]Show Reservation Status"<<endl;
	                 cout<<"[3]View the bus details"<<endl;
	                 cout<<"[4]Go Back"<<endl;
	                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1: system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=7;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto bihani_time_kd;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_bihani_kd;
						  }	
							  bihani_time_kd:
					          get_your_ticket=0;
					          r=0;
					         i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				             ktm_to_dkt_bihani();
		                     i=0,j=0;
		       
			              do{ 
		                   r2.bus_stat();
		                    ktm_to_dkt_bihani:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_dkt_bihani;
							}
		                    strcpy(save,r2.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r2.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_dkt_bihani;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("bihani.txt",ios::out);
	              fout.write((char*)&r2,sizeof(r2));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==2233)
			           {
			        	 fair=t_fair;
			             goto down2_bihani_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_bihani_kd:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"7"<<" "<<"kathmandu"<<" "<<"dhankuta"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_bihani_kd;
	               d1_bihani_a_booking_kd:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_bihani_kd:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_dkt_bihani();
			       
			      
			        uppp_bihani_kd:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r2.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r2.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_bihani_kd;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_bihani_kd;
                        bottom_bihani_kd:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r2.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_bihani_kd:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("bihani.txt",ios::out);
	                  fout.write((char*)&r2,sizeof(r2));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==2233)
			           {
			        	 fair=t_fair;
			             goto down22_bihani_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_bihani_kd:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_bihani_a_booking_kd;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_bihani_kd;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_bihani_a_booking_kd;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					    
						cout<<seat_no[i]<<" ";
					
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"2233"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"7 AM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_bihani_a_booking_kd;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_bihani_kd;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_bihani_a_booking_kd;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_dkt_bihani();
			          r2.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_bihani_kd;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==2233)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:7 AM"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_bihani_kd;
			        break;
		        
	     case 4:    goto back;
		            break;
		            
		default:   cout<<"Invalid choices"<<endl;
		               goto d1_bihani_kd;
                          }  
         
                    
                         break;
		             
 //*****************End of bihani yatayat ktm to dkt *********************************************
//_________________________start of mayur ktm to dkt___________________________________________                       
		             
					        
                                 
        case 3:    system("cls");      
		            
	                 d1_mayur_kd:
	                 cout<<"[1]Ticket Booking"<<endl;
	                 cout<<"[2]Show Reservation Status"<<endl;
	                 cout<<"[3]View the bus details"<<endl;
	                 cout<<"[4]Go Back"<<endl;
	                 cin>>d1;
	                 switch(d1)
	                {  case 1:          system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=22;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto mayur_time_kd;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_mayur_kd;
						  }	
							  mayur_time_kd:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				             ktm_to_dkt_mayur();
		                     i=0,j=0;
		       
			              do{ 
		                   r3.bus_stat();
		                    ktm_to_dkt_mayur:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_dkt_mayur;
							}
		                    strcpy(save,r3.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r3.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_dkt_mayur;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("mayur.txt",ios::out);
	              fout.write((char*)&r3,sizeof(r3));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==3213)
			           {
			        	 fair=t_fair;
			             goto down2_mayur_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_mayur_kd:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"22"<<" "<<"kathmandu"<<" "<<"dhankuta"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_mayur_kd;
	               d1_mayur_a_booking_kd:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_mayur_kd:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_dkt_mayur();
			       
			      
			        uppp_mayur_kd:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r3.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r3.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_mayur_kd;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_mayur_kd;
                        bottom_mayur_kd:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r3.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_mayur_kd:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("mayur.txt",ios::out);
	                  fout.write((char*)&r3,sizeof(r3));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==3213)
			           {
			        	 fair=t_fair;
			             goto down22_mayur_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_mayur_kd:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_mayur_a_booking_kd;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_mayur_kd;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_mayur_a_booking_kd;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      
						cout<<seat_no[i]<<" ";
					
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"3213"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"10 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_mayur_a_booking_kd;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_mayur_kd;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_mayur_a_booking_kd;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_dkt_mayur();
			          r3.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_mayur_kd;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==3213)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:10 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_mayur_kd;
			        break;
		        
	     case 4:    goto back;
		            break;
		            
		default:   cout<<"Invalid choices"<<endl;
		               goto d1_mayur_kd;
                          }   
		             
                     
	                              break;
//*****************End of  mayur ktm to dkt *********************************************
//_________________________start of agni ktm to dkt___________________________________________
        case 4:   	  
            
		             system("cls");      
	                 d1_agni_kd:
	                 cout<<"[1]Ticket Booking"<<endl;
	                 cout<<"[2]Show Reservation Status"<<endl;
	                 cout<<"[3]View the bus details"<<endl;
	                 cout<<"[4]Go Back"<<endl;
	                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1: system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=15;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto agni_time_kd;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_agni_kd;
						  }	
							  agni_time_kd:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				             ktm_to_dkt_agni();
		                     i=0,j=0;
		       
			              do{ 
		                   r4.bus_stat();
		                    ktm_to_dkt_agni:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_dkt_agni;
							}
		                    strcpy(save,r4.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r4.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_dkt_agni;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("agni.txt",ios::out);
	              fout.write((char*)&r4,sizeof(r4));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==5213)
			           {
			        	 fair=t_fair;
			             goto down2_agni_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_agni_kd:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"15"<<" "<<"kathmandu"<<" "<<"dhankuta"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_agni_kd;
	               d1_agni_a_booking_kd:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_agni_kd:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_dkt_agni();
			       
			      
			        uppp_agni_kd:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r4.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r4.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_agni_kd;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_agni_kd;
                        bottom_agni_kd:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r4.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_agni_kd:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("agni.txt",ios::out);
	                  fout.write((char*)&r4,sizeof(r4));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==5213)
			           {
			        	 fair=t_fair;
			             goto down22_agni_kd;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_agni_kd:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_agni_a_booking_kd;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_agni_kd;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_agni_a_booking_kd;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					     // if(i==0)
						cout<<seat_no[i]<<" ";
						//else{
						//cout<<","<<seat_no[i];
					    //	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"5213"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"3 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_agni_a_booking_kd;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_agni_kd;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_agni_a_booking_kd;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_dkt_agni();
			          r4.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_agni_kd;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==5213)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:3 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_agni_kd;
			        break;
		        
	     case 4:    goto back;
		            break;
		            
		default:   cout<<"Invalid choices"<<endl;
		               goto d1_agni_kd;
                          }
         
	                              break ;
//*****************End of agni yatayat ktm to dkt *********************************************
//_________________________start of munal ktm to dkt___________________________________________	                              
	                              
        case 5:    system("cls");
                  goto route_back;
		               break;
//*****************End of munal yatayat ktm to dkt *********************************************

	    default: cout<<"invalid choices"<<endl;
	                    goto back;
	                    
	   }
	   break;
	   
//***************************End of first route ktm to dkt************************************
	   case 2 :  
	            back1:
	            system("cls");
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"1.          sajha yatayat(Bus no: Ba 4 Kha 4276 )"<<endl;
	            cout<<"            Depature time:8 pm"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"2.          Munal yatayat(Bus no:Ko 5 Ta 3276 )"<<endl;
	            cout<<"            Depature time:6 am"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<" 3.         Go Back"<<endl;
	            cout<<"___________________________________________________________"<<endl;
		        cin>>choice_buses;
		   	   switch(choice_buses){
	   	   	   
	   	   	          case 1:   system("cls");      
					             int d1;
				                 d1_sajhap_kp:
				                 cout<<"[1]Ticket Booking"<<endl;
				                 cout<<"[2]Show Reservation Status"<<endl;
				                 cout<<"[3]View the bus details"<<endl;
				                 cout<<"[4]Go Back"<<endl;
				                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1: system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=20;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto sajhap_time_kp;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_sajhap_kp;
						  }	
							  sajhap_time_kp:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				             ktm_to_pokh_sajhap();
		                     i=0,j=0;
		       
			              do{ 
		                   r5.bus_stat();
		                    ktm_to_pokh_sajhap:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_pokh_sajhap;
							}
		                    strcpy(save,r5.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r5.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_pokh_sajhap;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("sajhap.txt",ios::out);
	              fout.write((char*)&r5,sizeof(r5));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==4276)
			           {
			        	 fair=t_fair;
			             goto down2_sajhap_kp;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_sajhap_kp:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"20"<<" "<<"kathmandu"<<" "<<"pokhara"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_sajhap_kp;
	               d1_sajhap_a_booking_kp:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_sajhap_kp:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_pokh_sajhap();
			       
			      
			        uppp_sajhap_kp:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r5.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r5.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_sajhap_kp;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_sajhap_kp;
                        bottom_sajhap_kp:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r5.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_sajhap_kp:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("sajhap.txt",ios::out);
	                  fout.write((char*)&r5,sizeof(r5));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==4276)
			           {
			        	 fair=t_fair;
			             goto down22_sajhap_kp;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_sajhap_kp:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_sajhap_a_booking_kp;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_sajhap_kp;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_sajhap_a_booking_kp;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      if(i==0)
						cout<<seat_no[i];
						else{
						cout<<","<<seat_no[i];
					    	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"4276"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"8 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_sajhap_a_booking_kp;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_sajhap_kp;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_sajhap_a_booking_kp;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_pokh_sajhap();
			          r5.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_sajhap_kp;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==4276)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:8 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_sajhap_kp;
			        break;
		        
	          case 4:    goto back1;
		                  break;
		            
		      default:   cout<<"Invalid choices"<<endl;
		               goto d1_sajhap_kp;
                          }
	   	   	            break;
/////////////////////////////////begin of ktm to pokhara munal yatayat	   	   	                
								      
	   	  case 2:                  system("cls"); 
	   	   	                      d1_munal_kp:     
					           
				                
				                 cout<<"[1]Ticket Booking"<<endl;
				                 cout<<"[2]Show Reservation Status"<<endl;
				                 cout<<"[3]View the bus details"<<endl;
				                 cout<<"[4]Go Back"<<endl;
				                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1: system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=20;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto munal_time_kp;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_munal_kp;
						  }	
							  munal_time_kp:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				             ktm_to_pokh_munal();
		                     i=0,j=0;
		       
			              do{ 
		                   r6.bus_stat();
		                    ktm_to_pokh_munal:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto    ktm_to_pokh_munal;
							}
		                    strcpy(save,r6.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r6.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto ktm_to_pokh_munal;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("munal.txt",ios::out);
	              fout.write((char*)&r6,sizeof(r6));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==3276)
			           {
			        	 fair=t_fair;
			             goto down2_munal_kp;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_munal_kp:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"6"<<" "<<"kathmandu"<<" "<<"pokhara"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_munal_kp;
	               d1_munal_a_booking_kp:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_munal_kp:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			        ktm_to_pokh_munal();
			       
			      
			        uppp_munal_kp:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r6.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r6.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_munal_kp;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_munal_kp;
                        bottom_munal_kp:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r6.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_munal_kp:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("munal.txt",ios::out);
	                  fout.write((char*)&r6,sizeof(r6));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==3276)
			           {
			        	 fair=t_fair;
			             goto down22_munal_kp;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_munal_kp:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_munal_a_booking_kp;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_munal_kp;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_munal_a_booking_kp;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Dhankuta                     "<<endl;
                 cout<<"                     From                   :" <<"kathmandu                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      if(i==0)
						cout<<seat_no[i];
						else{
						cout<<","<<seat_no[i];
					    	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"3276"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"6 AM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_munal_a_booking_kp;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_munal_kp;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_munal_a_booking_kp;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			          ktm_to_pokh_munal();
			          r6.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_munal_kp;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==3276)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:8 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_munal_kp;
			        break;
				        
				case 4:    goto back1;
						      break;
						            
		    	default:   cout<<"Invalid choices"<<endl;
			            	   goto d1_munal_kp; 
						}
			    		      break;
	   	   	                        
	   	   case 3:   system("cls");
	   	            goto route_back;
			          break;
	   	   	          
	     default:  system("cls");
			        cout<<"Invalid choices"<<endl;
			        goto  back1;
	              
			  }
	   
	          break;
//*************************end of second route (beg of birjung to nepaljung)***********************************************
	 case 3:     back2:
	            system("cls");
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"1.          Daphe yatayat(Bus no: Ba 4 Kha 5167 )"<<endl;
	            cout<<"            Depature time:4 pm"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"2.          Saptakoshi yatayat(Bus no:Ko 5 Ta 6167 )"<<endl;
	            cout<<"            Depature time:4 am"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<" 3.         Go Back"<<endl;
	            cout<<"___________________________________________________________"<<endl;
		        cin>>choice_buses;
		   	   switch(choice_buses){
		   	   	         case 1:  
							       system("cls");      
					             int d1;
				                 d1_daphe_bn:
				                 cout<<"[1]Ticket Booking"<<endl;
				                 cout<<"[2]Show Reservation Status"<<endl;
				                 cout<<"[3]View the bus details"<<endl;
				                 cout<<"[4]Go Back"<<endl;
				                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1:
					          system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=16;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto daphe_time_bn;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_daphe_bn;
						  }	
							  daphe_time_bn:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				          bir_to_nep_daphe();
		                     i=0,j=0;
		       
			              do{ 
		                   r7.bus_stat();
		                 bir_to_nep_daphe:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto bir_to_nep_daphe;
							}
		                    strcpy(save,r7.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r7.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto bir_to_nep_daphe;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("daphe.txt",ios::out);
	              fout.write((char*)&r7,sizeof(r7));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==5167)
			           {
			        	 fair=t_fair;
			             goto down2_daphe_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_daphe_bn:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"16"<<" "<<"Birgunj"<<" "<<"Nepalgunj"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_daphe_bn;
	               d1_daphe_a_booking_bn:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_daphe_bn:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			     bir_to_nep_daphe();
			       
			      
			        uppp_daphe_bn:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r7.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r7.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_daphe_bn;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_daphe_bn;
                        bottom_daphe_bn:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r7.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_daphe_bn:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("daphe.txt",ios::out);
	                  fout.write((char*)&r7,sizeof(r7));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==5167)
			           {
			        	 fair=t_fair;
			             goto down22_daphe_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_daphe_bn:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_daphe_a_booking_bn;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_daphe_bn;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_daphe_a_booking_bn;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Birgunj                     "<<endl;
                 cout<<"                     From                   :" <<"Nepalgunj                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      if(i==0)
						cout<<seat_no[i];
						else{
						cout<<","<<seat_no[i];
					    	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"5167"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"4 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_daphe_a_booking_bn;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_daphe_bn;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_daphe_a_booking_bn;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			       bir_to_nep_daphe();
			          r7.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_daphe_bn;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==5167)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:4 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_daphe_bn;
			        break;
		        
	          case 4:    goto back1;
		                  break;
		            
		      default:   cout<<"Invalid choices"<<endl;
		               goto d1_daphe_bn;
                          } 
		   	   	                   break;
		   	   	                   
		   	   	                   
		   	   	                   
		       case 2: 
							     system("cls");      
					           //  int d1;
				                 d1_saptakoshi_bn:
				                 cout<<"[1]Ticket Booking"<<endl;
				                 cout<<"[2]Show Reservation Status"<<endl;
				                 cout<<"[3]View the bus details"<<endl;
				                 cout<<"[4]Go Back"<<endl;
				                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1:
					          system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=4;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto saptakoshi_time_bn;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_saptakoshi_bn;
						  }	
							  saptakoshi_time_bn:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				          bir_to_nep_saptakoshi();
		                     i=0,j=0;
		       
			              do{ 
		                   r8.bus_stat();
		                 bir_to_nep_saptakoshi:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto bir_to_nep_saptakoshi;
							}
		                    strcpy(save,r8.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r8.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto bir_to_nep_saptakoshi;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("saptakoshi.txt",ios::out);
	              fout.write((char*)&r8,sizeof(r8));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==6167)
			           {
			        	 fair=t_fair;
			             goto down2_saptakoshi_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_saptakoshi_bn:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"4"<<" "<<"Birgunj"<<" "<<"Nepalgunj"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_saptakoshi_bn;
	               d1_saptakoshi_a_booking_bn:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_saptakoshi_bn:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			     bir_to_nep_saptakoshi();
			       
			      
			        uppp_saptakoshi_bn:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r8.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r8.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_saptakoshi_bn;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_saptakoshi_bn;
                        bottom_saptakoshi_bn:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r8.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_saptakoshi_bn:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("saptakoshi.txt",ios::out);
	                  fout.write((char*)&r8,sizeof(r8));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==6167)
			           {
			        	 fair=t_fair;
			             goto down22_saptakoshi_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_saptakoshi_bn:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_saptakoshi_a_booking_bn;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_saptakoshi_bn;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_saptakoshi_a_booking_bn;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Birgunj                     "<<endl;
                 cout<<"                     From                   :" <<"Nepalgunj                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      if(i==0)
						cout<<seat_no[i];
						else{
						cout<<","<<seat_no[i];
					    	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"6167"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"4 AM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_saptakoshi_a_booking_bn;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_saptakoshi_bn;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_saptakoshi_a_booking_bn;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			       bir_to_nep_saptakoshi();
			          r8.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_saptakoshi_bn;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==6167)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:4 AM"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_saptakoshi_bn;
			        break;
		        
	          case 4:    goto back1;
		                  break;
		            
		      default:   cout<<"Invalid choices"<<endl;
		               goto d1_saptakoshi_bn;
                          } 
					 break;
		   
		   case 3: system("cls");
		             goto route_back;	          
			
								  
						  default: system("cls");
						            goto back2;		      
				  }       
	                   
					          break;
//******************************end of third route**********************************************************	
	case 4:      back3:
	            system("cls");
	           
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<"1.          koshi yatayat(Bus no:Ko 5 Ta 6166 )"<<endl;
	            cout<<"            Depature time:4 am"<<endl;
	            cout<<"___________________________________________________________"<<endl;
	            
	            
	            cout<<"\n___________________________________________________________"<<endl;
	            cout<<" 2.         Go Back"<<endl;
	            cout<<"___________________________________________________________"<<endl;
		        cin>>choice_buses;
		   	   switch(choice_buses){ 
	                case 1:  
							       system("cls");      
					             int d1;
				                 d1_koshi_bn:
				                 cout<<"[1]Ticket Booking"<<endl;
				                 cout<<"[2]Show Reservation Status"<<endl;
				                 cout<<"[3]View the bus details"<<endl;
				                 cout<<"[4]Go Back"<<endl;
				                 cin>>d1;
	                 switch(d1)
	                {  
					  case 1:
					          system("cls");
					          cout << "Enter the desired departure date (yyyy-mm-dd): ";
                              cin >> desiredYear >> dash1 >> desiredMonth >> dash2 >> desiredDay;
                              getch();
					          desiredHour=14;
				              desiredMinute=0;
						      bookingHour = desiredHour - 1;
						      bookingMinute = desiredMinute;
						  if (bookingHour < 0) {
						    bookingHour = 23;
						    desiredDay--;
						  }
						
						
						  if ((desiredYear > currentYear ||
						      (desiredYear == currentYear && desiredMonth > currentMonth) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay > currentDay)) ||
						      (desiredYear == currentYear && desiredMonth == currentMonth && desiredDay == currentDay &&
						      (currentHour < bookingHour || (currentHour == bookingHour && currentMinute <= bookingMinute)))) {
						     goto koshi_time_bn;
						  } else { system("cls");
						  	cout << "Sorry, you can only book a ticket 1 hour before the departure time." <<endl;
						    goto  d1_koshi_bn;
						  }	
							  koshi_time_bn:
					          get_your_ticket=0;
					          r=0;
					           i=0,j=0,q=0,c=0;
	                	      system("cls");
	                         cout<<"\t\t\t\t\t\tTICKET BOOKING "<<endl;
							 cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
							 
				          bir_to_nep_koshi();
		                     i=0,j=0;
		       
			              do{ 
		                   r9.bus_stat();
		                 bir_to_nep_koshi:
		                    cout<<endl;
		                    cout<<" Choose,which Seat do you want to book? "<<endl;
		                    seat_no[i]=b1[i].book_ticketing();
		                     if (seat_no[i]>29){
		                    cout<<"Please,enter the valid seat number."<<endl;
		                      goto bir_to_nep_koshi;
							}
		                    strcpy(save,r9.seat_stat(seat_no[i]));
                          if ((strcmp(save,"Empty"))==0)
                             {
	         		 cout<<endl;
					 cout<<"\nYou booked seat no "<<seat_no[i]<<" .Thanks for Booking."<<endl;
					 found_book++;
			         r9.reserve(seat_no[i]);
		              t_seat_no[j]=seat_no[i];
		            
		             j++;
		        
		            }		 
		            else 
       		        {
			        cout<<"\nSeat number "<<seat_no[i]<<" has already booked by someone."<<endl;
			        cout<<"Please, Enter the another seat number."<<endl;
		            goto bir_to_nep_koshi;
		            }
		            cout<<"\n Do you want to add more ?(y/n)"<<endl;
	    	        cin>>x;
	    	        system("cls");
		           
			      i++;  }while (x != 'n');
			     r=i;
			     fout.open("koshi.txt",ios::out);
	              fout.write((char*)&r9,sizeof(r9));
	              fout.close();
		        ref_no=rand();
			    cout<<"Your Reference no of a ticket is :"<<ref_no<<".Please, Keep this reference number safely."<<endl;
			    
			    getch();
			  
			   day=nowLocal.tm_mday;
            	month=nowLocal.tm_mon+1;
            	year=nowLocal.tm_year+1900;
            	fin1.open("fair.txt",ios::in);
			    fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==6166)
			           {
			        	 fair=t_fair;
			             goto down2_koshi_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down2_koshi_bn:
	     	      fin1.close();
	     	     
				  m= (r-c);
				  n=fair*(r-c);  
			      fout.open("passenger.txt",ios::app);
			  	  fout<<t_firstname<<" "<<t_lastname<<" "<<desiredYear<<" "<<desiredMonth<<" "<<desiredDay<<" "<<"14"<<" "<<"Kanchanpur"<<" "<<"Ilam"<<" "<<t_bus_no<<" "<<t_contact<<" "<<day<<" "<<month<<" "<<year<<" "<<ref_no<<" "<<m<<" ";

					for (int temp=0; temp<r;temp++)
					
						fout<<seat_no[temp]<<" ";
					
					fout<<n<<"\n";
		          fout.close();
                  system("cls");
	        //      goto d1_koshi_bn;
	               d1_koshi_a_booking_bn:
	             cout<<"[1]Cancel Your Ticket."<<endl;
	             cout<<"[2]Get Your Ticket"<<endl;
	             cout<<"[3]Go Back"<<endl;
	             cin>>choice_a_booking;
	             switch(choice_a_booking)
	                   {  case 1 :   
					               system("cls");
			                            if(get_your_ticket==0){
										
			       cancel_of_koshi_bn:
			        j=0;
			        k=0;
					cout<<"\t\t\t\t\t\tCancelling Ticket "<<endl;
				    //cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				    //cout<<"\t\t\t\t\t\tKathmandu to Dhankuta"<<endl;
				//	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
				  //  cout<<endl;
			     bir_to_nep_koshi();
			       
			      
			        uppp_koshi_bn:
	               
	                cout<<"enter your ticket reference number"<<endl;
	                cin>>t_ref_no;
	                system("cls");
	                if(t_ref_no==ref_no)
                    {     q++;
		
                        do{
               	            
		                 r9.bus_stat();
		                  cout<<" \nChoose, which Seat do you want to cancel ?"<<endl;
		                  cin>>seatno;
                         strcpy(save,r9.seat_stat(seatno));
                         if ((strcmp(save,"Booked"))==0)
                                {                         
                                  for(int a=j;a<i;a++)
                                       {
                            	   if(seat_no[a]==seatno)
                  	                 goto bottom_koshi_bn;
				               }
				        cout<<endl;
				        cout<<endl;
		                cout<<"You can cancel the ticket only booked by you."<<endl;
		                cout<<"The seats that you entered to cancel is not booked by you."<<endl;
		                goto bottom1_koshi_bn;
                        bottom_koshi_bn:
                   //	found_cancel++;
				          cout<<"\nYou canceled seat no "<<seatno<<"."<<endl;
					     r9.cancel(seatno);
					      found++;
					      cancel_seatno[k]=seatno;
				  
					      k++;
				            }
				      else 
	       		      { cout<<endl;
				        cout<<"\nSeat number "<<seatno<<" is not booked by anyone.\n"<<endl;
				      }
			          bottom1_koshi_bn:
		              cout<<"\nDo you want to cancel other(y/n)? ";
		              cin>>x;
		              system("cls");
		      
	                  }while (x != 'n');
	                  c=k;
	                  fout.open("koshi.txt",ios::out);
	                  fout.write((char*)&r9,sizeof(r9));
	                  fout.close();
	                  fin1.open("fair.txt",ios::in);
                  fin1>>t_bus_no>>t_fair;
		     	  while(!fin1.eof())
			       {    
				      if(t_bus_no==6166)
			           {
			        	 fair=t_fair;
			             goto down22_koshi_bn;
			            //	break;
				    	}
			        fin1>>t_bus_no>>t_fair;
			       }
		    	  down22_koshi_bn:
	     	      fin1.close();
				  m= (r-c);
				  n=fair*(r-c);
				  j=0;
				  q=0;
	                  day=nowLocal.tm_mday;
            	      month=nowLocal.tm_mon+1;
            	      year=nowLocal.tm_year+1900;
            	      fin.open("passenger.txt",ios::in);
            	      fin1.open("passenger1.txt",ios::out);
            	      
           fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
		   	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 

 	     
            	     while(!fin.eof()){
     if(ref_no==t_ref_no) 
            	     	   {  
    fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<m<<" ";
		        
	                for (q=0;q<r;q++){
	                	count =0;
	                	for (j=0;j<c;j++){
	                		if (seat_nor[q] != cancel_seatno[j])
	                			count ++;
						}
						if (count == c)
							fin1<<seat_nor[q]<<" ";
					}
					

					fin1<<n<<"\n";					        	     	   
							}
							else{ // yo chahi reference no milena vane arko file ma halxa 
	fin1<<t_f_name<<" "<<t_l_name<<" "<<t_desiredYear<<" "<<t_desiredMonth<<" "<<t_desiredDay<<" "<<t_departuretime<<" "<<t_from<<" "<<t_to<<" "<<t_bus_no<<" "<<t_contact<<" "<<t_day<<" "<<t_month<<" "<<t_year<<" "<<t_ref_no<<" "<<t_no_of_ticket<<" ";
	
					 for (int i=0;i<t_no_of_ticket;i++){
						fin1<<seat_nor[i]<<" ";
					
					}
					fin1<<t_fair<<"\n";							
							}
		fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket; 
			if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair; 	     					
					 } 
					fin.close();
					fin1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
               
	                 system("cls");
	                 goto d1_koshi_a_booking_bn;
                 
	                }
	                else{
                  	cout<<"Your tickct reference no does not match."<<endl;
                  	cout<<"Please,Enter the correct reference number."<<endl;
                  	goto uppp_koshi_bn;
				     }
			}
			else{
				system("cls");
				cout<<"You cannot cancel your ticket because you have already taken your ticket."<<endl;
				goto d1_koshi_a_booking_bn;
		    	}
				     break; 
					            
			   case 2:   read_instruction=0;
			           system("cls");
			         //cout<<q;
		         if(read_instruction==0)
                  {   get_your_ticket++;
				 cout<<endl;
				 cout<<endl; 
		         cout<<"                    ***********************************"<<endl;
                 cout<<"                     To                     :" <<"Kanchanpur                     "<<endl;
                 cout<<"                     From                   :" <<"Ilam                    "<<endl;
                 cout<<"                     Name                   :" <<t_firstname<<" "<<t_lastname<<endl;
                 cout<<"                     Contact:               :" <<t_contact<<"                      "<<endl;
                 cout<<"                     No.of Researved Seats  :" <<r-c<<"                          "<<endl;
                 cout<<"                     Researved Seats No.    :";
              
			    i=0;
            	j=0;
            	for (i=0;i<r;i++){
            		count =0;
            		for (j=0;j<c;j++){
            			if (seat_no[i]  != cancel_seatno[j])
            				count ++;
					}
					if (count == c){
					      if(i==0)
						cout<<seat_no[i];
						else{
						cout<<","<<seat_no[i];
					    	}
					            	}
				}
				
                         cout<<endl;
		                 cout<<"                     Total Amount           :"<<fair*(r-c)<<"                       "<<endl;
		                 cout<<"                     Ref.no Of Ticket       :" <<ref_no<<"                     "<<endl;
		                 cout<<"                     Date of Booking        :" <<year<<"/"<<month<<"/"<<day<<" "<<endl;
		                 cout<<"                     Bus No.                :"<<"6166"<<endl;
		                 cout<<"                     Departure Date         :"<<desiredYear<<"/"<<desiredMonth<<"/"<<desiredDay<<endl;
						 cout<<"                     Departure Time         :"<<"2 PM"<<endl;
                         cout<<"                    ***********************************"<<endl;		     
		                 cout<<endl;
		                 cout<<endl;
		                 
		                  goto d1_koshi_a_booking_bn;
			  }
                         else
                          {  system("cls");
                    	 cout<<" You cannot get ticket because you have not booked any seats."<<endl;
          	             goto d1_koshi_bn;
		                   }  
						           break;
						           
		
						   case 3:   system("cls");
						           goto route_back;
						           break;
						          
						 default: system("cls");
						          cout<<"Invalid choices"<<endl;
						          goto d1_koshi_a_booking_bn;
			
				      }
	              break;
      
	      
		 
				     
		 case 2:     i_i=0;
		             
		             system("cls");
			         cout<<"\t\t\t\t\t\t Seat Status "<<endl;
					// cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   "<<endl;
					
			       bir_to_nep_koshi();
			          r9.bus_stat();
			          cout<<endl;
			          cout<<endl;
	                  goto d1_koshi_bn;
		              break;
		            
		 case 3:  system("cls");
		          fin.open("fair.txt",ios::in);
				  fin>>t_bus_no>>t_fair;
				  while(!fin.eof())
				  {    if(t_bus_no==6166)
				              break;
				   fin>>t_bus_no>>t_fair;      
						  }        
			        fin.close();
			        cout<<endl<<endl;
			        cout<<"\t\t-----------BUS DETAIL---------- "<<endl;
			        cout<<"\t\tThe fair of bus is:"<<t_fair<<"(per ticket)"<<endl;
			        cout<<"\t\tAmenities:"<<endl;
			        cout<<"\t\t\t-Music"<<endl;
			        cout<<"\t\t\t-Water Bottle"<<endl;
			        cout<<"\t\t\t-Comfortable Seats"<<endl;
			        cout<<"\t\tDeparture Time:2 pm"<<endl;
			        cout<<"\t\t------------------------------- "<<endl;
			        getch();
			        goto d1_koshi_bn;
			        break;
		        
	          case 4:    goto back3;
		                  break;
		            
		      default:   cout<<"Invalid choices"<<endl;
		               goto d1_koshi_bn;     
				}
				 break;
	 case 2: system("cls");
	           goto route_back;
	          break;
	default : system("cls");
	          cout<<"Invalid Choices"<<endl;
			   goto route_back;		  
			  }
			  break;             
	                 
	case 5: system("cls");
	         main();
	         break;
     default: system("cls");
            goto route_back;
}
//***************************end of 4th route**********************************************************
//}
                         break;         

//************&&&&&&&&&&&&&&&&*********& Start of Admin&****************&&&&&&&&&&&@@                    
	   case 3:    tries=0;
 			      system("cls");
		          admin_up: 	
		          cout<<"\n\t\tEnter the admin key :"<<endl;
		          tries++;
		          k=0;
		           while(1)
		        { ch=getch();
		              if(ch==ENTER){
		                 admin_key[k]='\0';
		              	 break;
		                           }
		              else if(ch==BKSP){
		             	  if(k>0){
		             	 	
					        	 k--;
					        	  printf("\b \b");
						  }
					 }
				     else if(ch==TAB|ch==SPACE){
				    	      continue;
					 }
					 else{
					    admin_key[k]=ch;
					 	k++;
					 	cout<<"*";
					 }
					
				}
			
		          up1:
                fin.open("admin.txt",ios::in);
             if (fin.fail())
            { 	fin.close();
			    fout.open("admin.txt",ios::out);
                fout<<1234;
                fout.close();
                goto up1;
            	}
            	else
            	{ fin>>save_admin_key;
			  }
            
    
            fin.close();
            if(strcmp(admin_key,save_admin_key)==0)
            {    system("cls");
		        admin_option:
		  cout<<"\n\n\t\t\t\t******************************************************"<<endl;
           cout<<"\t\t\t\t\t\t\tADMIN"<<endl;
            cout<<"\t\t\t\t******************************************************"<<endl;
           cout<<"\t\t\t\t[1]Change admin Key"<<endl;
           cout<<"\t\t\t\t[2]Change the bus fare "<<endl;
           cout<<"\t\t\t\t[3]View the user detail"<<endl;
           cout<<"\t\t\t\t[4]View the fare prices of Bus"<<endl;
           cout<<"\t\t\t\t[5]View the reference number of ticket that are booked"<<endl;
           cout<<"\t\t\t\t[6]View the reserved seats in a specific bus"<<endl;
           cout<<"\t\t\t\t[7]Go Back"<<endl;
       //   gotoxy(32,23);
	     cin>>admin_choice;
          switch(admin_choice)
          { 
             case 1: k=0;
			        system("cls");
			        cout<<"\nEnter the current Admin Key:"<<endl;
                    k=0;
		           while(1)
		        { ch=getch();
		              if(ch==ENTER){
		           current_admin_key[k]='\0';
		              	 break;
		                           }
		              else if(ch==BKSP){
		             	  if(k>0){
		             	 	
					        	 k--;
					        	  printf("\b \b");
						  }
					 }
				     else if(ch==TAB|ch==SPACE){
				    	      continue;
					 }
					 else{
		        	current_admin_key[k]=ch;
					 	k++;
					 	cout<<"*";
					 }
					
				}
                    if(strcmp(current_admin_key,admin_key)==0)
                    { cout<<"\nEnter the new Admin Key:"<<endl;
                      
                      fout.open("admin.txt",ios::out);
                      k=0;
		           while(1)
		        { ch=getch();
		              if(ch==ENTER){
		               new_admin_key[k]='\0';
		              	 break;
		                           }
		              else if(ch==BKSP){
		             	  if(k>0){
		             	 	
					        	 k--;
					        	  printf("\b \b");
						  }
					 }
				     else if(ch==TAB|ch==SPACE){
				    	      continue;
					 }
					 else{
					 new_admin_key[k]=ch;
					 	k++;
					 	cout<<"*";
					 }
					
				}
                      fout<<new_admin_key;
                      fout.close();
                      system("cls");
                      cout<<"\t\t\tAdmin key changed sucessfully."<<endl;
                      goto admin_option;
                    	}
                    	else{
                    		system("cls");
                    	cout<<"\t\t\tThe current key that you entered is invalid."<<endl;
                    	goto admin_option;
						}
                    	break;
              case 2: tries=0;
			          found=0;
                      system("cls");
				      up2:
		        	  cout<<"\n\t\t\tEnter the bus number :"<<endl;
                      cin>>bus_no;
                      tries++;
                      fin.open("fair.txt",ios::in);
                      fin1.open("fair1.txt",ios::out);
                      fin>>t_bus_no>>t_fair;
                     while(!fin.eof())
                      {    
                    	  if(t_bus_no==bus_no)
                    	  {
                    	  	cout<<"\n\t\t\tEnter the new fair of Bus:"<<endl;
                    	  	cin>>new_fair;
                    	  	fin1<<bus_no<<"  "<<new_fair<<"\n";
                    	  	system("cls");
                    	  	cout<<"\t\t\tUpdated Sucessfully."<<endl;
                    	  	found++;
                    	  
						  }
						  else{
						  	fin1<<t_bus_no<<"  "<<t_fair<<"\n";
						  }
						   fin>>t_bus_no>>t_fair;
						  	}
						  	
						  	fin.close();
						  	fin1.close();
						  	remove("fair.txt");
						  	rename("fair1.txt","fair.txt");
						  if(found!=0)
						  	goto admin_option;
					if(found==0)
					  {    if(tries<3){
					         system("cls");
							  	cout<<"\t\t\tThis Bus Number does not exist."<<"                          Tries Left="<<3-tries<<endl;
							    goto up2;}
					    
					        else{  system("cls");
					    		 goto admin_option;
						}
				     }
                     
            	     break;
            	     
        case 3: {
		         system("cls");
                 found=0;
                
                 view_top:
                 cout<<endl;
                 cout<<"\n\n\t\t\t[1]View the individual passenger's details"<<endl;
                 cout<<"\t\t\t[2]View the details of all passenger of specific bus"<<endl;
                 cout<<"\t\t\t[3]Go Back"<<endl;
                 gotoxy(25,23);
                 cin>>choice_view;
                switch(choice_view)
                { case 1:
                	     ref_no=0;
                	     t_no_of_ticket=0;
				        tries=0;
				         system("cls");
				         up3:
				         tries++;
						 cout<<"\n\t\t\tEnter the ticket reference number."<<endl;
						 cin>>ref_no;
						        
						        
						 fin.open("passenger.txt",ios::in);
						
 fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;

 if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair;
 
 cout<<t_ref_no;
 cout<<t_no_of_ticket;
 cout<<endl;
						           while(!fin.eof()){
						           	
						           	      if((ref_no==t_ref_no)&&(t_no_of_ticket!=0)){
							           	      	  found++;
					cout<<endl;
					cout<<endl;
					cout<<endl;
					system("cls");
					cout<<"\t\t************************************"<<endl;	
				    cout<<"\t\tName of passenger      :"<<t_f_name<<" "<<t_l_name<<endl;
					cout<<"\t\tFrom                   :"<<t_from<<endl;
					cout<<"\t\tTo                     :"<<t_to<<endl;
					cout<<"\t\tContact  number        :"<<t_contact<<endl;
					cout<<"\t\tNo. of ticket reserved :"<<t_no_of_ticket<<endl;
					cout<<"\t\tTotal fare             :"<<t_fair<<endl;
					cout<<"\t\tBus number             :"<<t_bus_no<<endl;
					cout<<"\t\tReference No. of ticket:"<<t_ref_no<<endl;
					cout<<"\t\tDate of ticket booking :"<<t_year<<"/"<<t_month<<"/"<<t_day<<endl;
				    cout<<"\t\tDeparture date         :"<<t_desiredYear<<"/"<<t_desiredMonth<<"/"<<t_desiredDay<<endl;
				    cout<<"\t\tDeparture time         :"<<t_departuretime<<endl;
					cout<<"\t\tResearved seat number  :";
					
					
					for (int i=0;i<t_no_of_ticket;i++){
						if(i==0)
						cout<<seat_nor[i];
						else
						cout<<","<<seat_nor[i];
					}
				cout<<"\n\t\t************************************"<<endl;				
				
					cout<<endl;						
											 }
	fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair;
								   }
								fin.close();
								if(found!=0)
								   	goto view_top;
			
			   	if(found==0)
		    	 {  system("cls");
					cout<<"\t\tThis Reference number does not exits."<<"                          Tries Left="<<3-tries<<endl;
					cout<<endl;
				  if(tries<3)
				     goto up3;
				  else{
						system("cls");
						goto view_top;
			          	}
				 }				  
									 
					 break;
									 
                        		 
		case 2:     found=0;
		            found1=0;
		            tries1=0;
		            tries=0;
		            system("cls");
		            up4:
		           	tries++;
		           cout<<"Enter the Bus no:"<<endl;
		           cin>>bus_no;
		           fin.open("fair.txt",ios::in);
		           fin>>t_bus_no>>t_fair;
		           while(!fin.eof())
		           { if(bus_no==t_bus_no)
		                  found1++;
		                  fin>>t_bus_no>>t_fair;
				   }
				   fin.close();
				   
								 fin.open("passenger.txt",ios::in);
 fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
 if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair;
						           while(!fin.eof()){
						           
									   if(bus_no==t_bus_no){
									       found++;
						           	      if((bus_no==t_bus_no)&&(t_no_of_ticket!=0)){
						           	      	  tries1++;
				cout<<"\t\t************************************"<<endl;			           	      	  
			    cout<<"\t\tName of passenger      :"<<t_f_name<<" "<<t_l_name<<endl;
				cout<<"\t\tFrom                   :"<<t_from<<endl;
				cout<<"\t\tTo                     :"<<t_to<<endl;
				cout<<"\t\tContact  number        :"<<t_contact<<endl;
				cout<<"\t\tNo of ticket reserved  :"<<t_no_of_ticket<<endl;
				cout<<"\t\tTotal fare             :"<<t_fair<<endl;
				cout<<"\t\tBus number             :"<<t_bus_no<<endl;
				cout<<"\t\tReference No. of ticket:"<<t_ref_no<<endl;
				cout<<"\t\tDate of ticket booking :"<<t_year<<"/"<<t_month<<"/"<<t_day<<endl;
				cout<<"\t\tDeparture date         :"<<t_desiredYear<<"/"<<t_desiredMonth<<"/"<<t_desiredDay<<endl;
				cout<<"\t\tDeparture time         :"<<t_departuretime<<endl;
				cout<<"\t\tSeat No. reserved      :";
				for (int i=0;i<t_no_of_ticket;i++){
						if(i==0)
						cout<<seat_nor[i];
						else
						cout<<","<<seat_nor[i];	
					}
				cout<<"\n\t\t************************************"<<endl;	
				cout<<endl;
				cout<<endl;							   
						           	      	  
											 }}
	fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
	if (seat_nor != NULL)
 	delete [] seat_nor;
 	
 seat_nor = new int[t_no_of_ticket];
 for (int i=0;i<t_no_of_ticket;i++){
 	fin>>seat_nor[i];
}
 fin>>t_fair;
								   }
							fin.close();
				
						
					
			   	if((found==0)&&(found1==0))
		   	      {  system("cls");
			         cout<<"The Bus number does not exits."<<"                          Tries Left="<<3-tries<<endl;
				       if(tries<3)
				           {
				         	goto up4;
							 }
				 	   else{
							  	system("cls");
							  	goto view_top;
							  }
				  }	
				  else if(((tries1==0)&&(found!=0))|((found==0)&&(found1!=0))){
				     	 system("cls");
						 cout<<"Any seat is not booked in this bus."<<endl;
						 cout<<endl;
				     	 goto view_top;}
				     	 
				else{
					    cout<<endl;
					    cout<<endl;
					   goto admin_option;}
				     	 
						 break;		  
									 
									
				case 3: system("cls");
				         goto admin_option;
				            break;
				            
			  default: system("cls");
			         cout<<"Invalid Choice"<<endl;
			         goto view_top;
			     
			}
        	            break;
        	        }
        	            
       case 4:      system("cls");
	                fin.open("fair.txt",ios::in);
                     fin>>t_bus_no>>t_fair;
                     while(!fin.eof())
                     {  
                         cout<<"\t\t\tBus Number :"<<t_bus_no<<endl;
                         cout<<"\t\t\tFare       :"<<t_fair<<endl;
                         cout<<endl;
                         cout<<endl;
                         fin>>t_bus_no>>t_fair;
					 }
					 fin.close();
					 getch();
	                 goto admin_option;
	                 break;
	                 
	 case 5:       tries=0;
	               tries1=0;
	               found=0;
	               found1=0;
	               system("cls");
	               up5:
	               	tries++;
	               cout<<"\n\t\tEnter the bus number:"<<endl;
	               cin>>bus_no;
	               fin.open("fair.txt",ios::in);
	               fin>>t_bus_no>>t_fair;
	               while(!fin.eof())
	               {   if(t_bus_no==bus_no)
	                      found1++;
	                      fin>>t_bus_no>>t_fair;
				   }
				   fin.close();
	               fin.open("passenger.txt",ios::in);
	               fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
	               if (seat_nor != NULL)
				 	delete [] seat_nor;
				 	
				 seat_nor = new int[t_no_of_ticket];
				 for (int i=0;i<t_no_of_ticket;i++){
				 	fin>>seat_nor[i];
				}
				 fin>>t_fair;
	               while(!fin.eof()){
	               	    if(bus_no==t_bus_no){
						   found++;
	               	    if((bus_no==t_bus_no)&&(t_no_of_ticket!=0)){
	               	    	  tries1++;
	               	    	  if(tries1==1)
	               	    	     cout<<"\n\nBus Number:"<<t_bus_no<<endl;
	               	    	if(tries1==1)
	               	    	    cout<<"Reference number of ticket that are boooked are: ";
	               	    	if(tries1==1){
							   cout<<t_ref_no;}
							else{
						       cout<<","<<t_ref_no;
							}
					
					 	
						   }
				     	}
						   
						fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
						if (seat_nor != NULL)
						 	delete [] seat_nor;
						 	
						 seat_nor = new int[t_no_of_ticket];
						 for (int i=0;i<t_no_of_ticket;i++){
						 	fin>>seat_nor[i];
						}
						 fin>>t_fair;
				   }
				   fin.close();
				   
				   if((found==0)&&(found1==0))
				   {system("cls");
				    cout<<"This Bus number does not exist."<<"               Tries Left:"<<3-tries<<endl;
				       if(tries<3)
				        goto up5;
				        else{
				         	system("cls");
				         	 goto admin_option;
				          }
			         }
			        else if(((tries1==0)&&(found!=0))|((found==0)&&(found1!=0))){
				     	 system("cls");
						 cout<<"\t\tAny seat is not booked in this bus."<<endl;
						 cout<<endl;
				     	 goto admin_option;}
				    else{
					    cout<<endl;
					    cout<<endl;
					   goto admin_option;}
				  
				       break;
		case 6:  tries=0;
	               tries1=0;
	               found=0;
	               found1=0;
	               system("cls");
	               up6:
	               	tries++;
	               cout<<"\n\t\tEnter the bus number:"<<endl;
	               cin>>bus_no;
	               fin.open("fair.txt",ios::in);
	               fin>>t_bus_no>>t_fair;
	               while(!fin.eof())
	               {   if(t_bus_no==bus_no)
	                      found1++;
	                      fin>>t_bus_no>>t_fair;
				   }
				   fin.close();
	               fin.open("passenger.txt",ios::in);
	               fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
	               if (seat_nor != NULL)
				 	delete [] seat_nor;
				 	
				 seat_nor = new int[t_no_of_ticket];
				 for (int i=0;i<t_no_of_ticket;i++){
				 	fin>>seat_nor[i];
				}
				 fin>>t_fair;
	               while(!fin.eof()){
	               	    if(bus_no==t_bus_no){
						   found++;
	               	    if((bus_no==t_bus_no)&&(t_no_of_ticket!=0)){
	               	    	  tries1++;
	               	    	  
	               	    	  if(tries1==1)
	               	    	     cout<<"\n\n\tBus Number:"<<t_bus_no<<endl;
	               	    	if(tries1==1)
	               	    	    cout<<"  \tBooked seats in this bus are:  ";
	               	    	    	for (int i=0;i<t_no_of_ticket;i++){
								      if((tries1==1)&&(i==0))
									cout<<seat_nor[i];
									else{
										cout<<","<<seat_nor[i];
									}
									
									
								}
	               	    	
						   }
				     	}
						   
						fin>>t_f_name>>t_l_name>>t_desiredYear>>t_desiredMonth>>t_desiredDay>>t_departuretime>>t_from>>t_to>>t_bus_no>>t_contact>>t_day>>t_month>>t_year>>t_ref_no>>t_no_of_ticket;
						if (seat_nor != NULL)
						 	delete [] seat_nor;
						 	
						 seat_nor = new int[t_no_of_ticket];
						 for (int i=0;i<t_no_of_ticket;i++){
						 	fin>>seat_nor[i];
						}
						 fin>>t_fair;
				   }
				   fin.close();
				   
				   if((found==0)&&(found1==0))
				   {system("cls");
				    cout<<"\t\tThis Bus number does not exist."<<"               Tries Left:"<<3-tries<<endl;
				       if(tries<3)
				        goto up6;
				        else{
				         	system("cls");
				         	 goto admin_option;
				          }
			         }
			        else if(((tries1==0)&&(found!=0))|((found==0)&&(found1!=0))){
				     	 system("cls");
						 cout<<"\t\tAny seat is not booked in this bus."<<endl;
						 cout<<endl;
				     	 goto admin_option;}
				    else{
					    cout<<endl;
					    cout<<endl;
					   goto admin_option;}
				  
				       break;		       
	               
	    	            
       case 7:    system("cls");
                   main();
			        break;
        	            
    default : system("cls");
              cout<<"Invalid Choice."<<endl;
              goto admin_option;
            	         
            	         
            	
		}
 	    
 }
				 else{
				 	system("cls");
				 	cout<<"Invalid Admin Key."<<"                  Tries Left:"<<3-tries<<endl;
				 	if(tries<3)
				 	goto admin_up;
				 	else{
				 		system("cls");
				 		main();
					 }
				 }
		        
	  	                     break;
							   
case 4:  exit(0);
           break;							     

default: system("cls"); 
          cout<<"invalid choice"<<endl;
          main();	       
	       
}
}


 
