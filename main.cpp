#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include"welcome.cpp"
class Transaction;
void main_menu(Transaction&);
char trans(Transaction&);
using namespace std;
class user          // User Class
{
  protected:
   char name[25];
   char email[25];
   int age,i;
   char mobi[12];
  
  public:
     void usergetdata()
     { 
    
       cout<<"\n\t\t\t\t\t Enter Full Name : ";
       for(i=0;i<25;i++)
      {
	  	   name[i]=0;
	   }
		i=0;
       fflush(stdin);
	   gets(name);
       cout<<"\n\t\t\t\t\t Enter Email-ID : ";
       for(i=0;i<25;i++)
      {
	  	   email[i]=0;
	   }
		i=0;
       cin>>email;
       cout<<"\n\t\t\t\t\t Enter Age : ";
       cin>>age;
       cout<<"\n\t\t\t\t\t Enter Mobile No : ";
       for(i=0;i<12;i++)
      {
	  	   mobi[i]=0;
	   }
		i=0;
       cin>>mobi;
       }
    
     void nam()       // Name display
    {
      cout<<name;
      }
 };
 
class Account : public user     //Account class ,Use class inherit
{
  protected:
  char accnt[16],type,password[18],yes;
  int blnc,i;
  public:
    void accntgetdata()
	{
	  
	  usergetdata();
	  cout<<"\n\t\t\t\t\t Enter Account No : ";
	  for(i=0;i<16;i++)
      {
	  	   accnt[i]=0;
	   }
		i=0;
	  cin>>accnt;
	  retry:     // label if Amount less 
	  cout<<"\n\t\t\t\t\t Enter type of Account (C/S) : ";
	  cin>>type;
	  blnc=0;
	  if(type=='s' || type =='S')
	  {
	   five:
	   cout<<"\n\t\t\t\t\t Enter Initial Amount (>= Rs.500) : ";
	   cin>>blnc;
	   if(blnc<500){
	     cout<<"\n\t\t\t\t Please Enter greater than Rs.500"<<endl;
	     goto five;
	     }
	   }
	  else if(type=='C' || type =='c')
	  {
	    ten:
	    cout<<"\n\t\t\t\t\t Enter Initial Amount (>= Rs.1000) : ";
		cin>>blnc;
		if(blnc<1000){
	     cout<<"\n\t\t\t\t Please Enter greater than Rs.1000"<<endl;
		  goto ten;
		  }
	  }
	  
	  else
	  {
	    cout<<"\n\t\t\t\t Try Again Press 'c' for Current Account , 's' for Saving Account"<<endl;
		goto retry;
	  }	 
	  cout<<"\n\t\t\t\t\t Create Password : ";
	  for(i=0;i<18;i++)
      {
	  	   password[i]=0;
	   }
	   i=0;
	  while((password[i]=getch())!='\r')     
    {
		  printf("*");
    	  i++;
	}
	   system("cls");
	   jio();
	   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Press 'Y' to Confirm 'N' to retry  : ";
	   cin>>yes;
	   if(yes=='y' || yes=='Y')    
	   {
	      cout<<"\n\n\n\t\t\t\t\t    Account Successfully Created ";
	      getch();
	    }
		else
		{
		     system("cls");
		     jio();
		     cout<<endl<<endl<<endl<<endl;
			 accntgetdata(); 
		}
		  	  
	} 
  
};


	

class Transaction : public Account    // class Transaction  , Account Inherit
{
  int amnt,p,t;
  float r,ci;
   public:
   Transaction()
   {
     amnt=0;
     }
     
   void displ()
    {
      cout<<"\n\n\t\t Account Name is "<<name;
	  cout<<"\n\t\t\t Balance is "<<blnc;
	  getch();
	  }     
    void deposit()   // Deposit 
    {
      dep:
	  cout<<"\n\n\t\t\t\t\t\t\t  Enter amount to Deposit : ";
      cin>>amnt;
      
      if(amnt>=100)
      {
	   blnc=blnc+amnt;
	   
	   }
	   else
	    {
		 cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tAmount Should be Greater than equal Rs.100 "<<endl<<endl<<endl;
		 goto dep;
		 }
		 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t You have Deposited Successfully ";
		 cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t Current Balance is Rs."<<blnc;
		getch(); 
	  }   
	  
	  void withdraw()   // Withdraw
	  {
	    with:
		cout<<"\n\n\t\t\t\t\t\t\t  Enter amount to Withdraw : ";
        cin>>amnt;
      
        if(amnt>=100)
         {
           if(blnc-amnt<0)
            {
			 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t Insufficient Balance ";
             getch();
			  return;
			 }        
		   else
	        blnc=blnc-amnt;
	   
	     }
	    else
	     {
		  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tAmount Should be Greater than equal Rs.100 "<<endl<<endl<<endl;
		  goto with;
		  }
		  cout<<"\n\n\n\n\t\t\t\t\t\t\t\t You have Withdrawl Successfully ";
		   if(type=='c' || type=='C')
		   {
		      if(blnc<1000)
		      {
			   cout<<"\n\n\n\t\t\t\t\t\t Your have cross the limit of minimum balance charges may apply ";
		       blnc=blnc-100;
		       }
		     }
		  cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t Current Balance is Rs."<<blnc;
		 getch(); 
	   } 
	   
	  
	  void blncenquiry()     // Balance Enquiry
	  {
	    cout<<"\n\t\t\t\t\t\t\t   Name : "<<name;
		cout<<"\n\n\t\t\t\t\t\t\t   Account No : "<<accnt;
		if(type=='s' || type== 'S')
		cout<<"\n\n\t\t\t\t\t\t\t   Type of Account : Saving";
		else
		cout<<"\n\n\t\t\t\t\t\t\t   Type of Account : Current"; 
	    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   Your Available balance is Rs."<<blnc;
		getch();
	   } 
	   
	   void checkbk()
	   {
	     if(type=='c' || type=='C')
	     {
	        system("cls");
	        jio();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Check Book Facility Available";
	         getch();
		  }
		  else
		  {
		     system("cls");
		     jio();
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Check Book Facility Not Available";
		    getch();
		  }
		 } 
		 
		 void compound()
		 {
		    system("cls");
		    jio();
		    if(type=='s' || type=='S')
		    {
		     cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Enter Principle Amount : ";
			 cin>>p; 
			 cout<<"\n\n\t\t\t\t\t\t\t   Enter the rate of interest : ";
             cin>>r;
             cout<<"\n\n\t\t\t\t\t\t\t   Enter the time : ";
             cin>>t;  
             ci=p*(pow((1+r/100),t));
             cout<<"\n\n\n\t\t\t\t\t\t\t\t\t The Compound Interest is : "<<ci<<endl;
             }
             else
                cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Compound Interest Not Available in Current Account";
           getch();
		  }  
		  
		  void info()
		  {
		    system("cls");
			jio();
			system("color d");
			cout<<"\n\n\n\n\n\n\n";
			cout<<"\n\n\t\t\t\t\t\t\t\t Name : "<<name;
			cout<<"\n\n\t\t\t\t\t\t\t\t Account No : "<<accnt;
			cout<<"\n\n\t\t\t\t\t\t\t\t Age : "<<age;
			cout<<"\n\n\t\t\t\t\t\t\t\t Email-Id : "<<email;
			cout<<"\n\n\t\t\t\t\t\t\t\t Mobile NO : "<<mobi;
			if(type=='S' || type=='s')
			cout<<"\n\n\t\t\t\t\t\t\t\t Type of Account : Saving";
			else
			 cout<<"\n\n\t\t\t\t\t\t\t\t Type of Account : Current";
			cout<<"\n\n\t\t\t\t\t\t\t\t Available Balance : Rs."<<blnc;
			
			getch();
			system("color 7");
		  }  
          
	   
	  friend char check(Transaction a1,char accnt2[],char password2[]);   
};

 char check(Transaction a1,char accnt2[],char password2[])
 {
   
   char sign;
   if(strcmp(a1.accnt,accnt2)==0 && strcmp(a1.password,password2)==0)
     { 
              system("cls");
              jio();
              cout<<endl<<endl<<endl<<endl;
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Welcome ";a1.nam();
              sleep(2);
             // system("cls");
              //jio();
              sign=trans(a1);
              return sign;
       }
    else
      {
        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Invalid Account No OR Wrong Password ";
        getch();
        }
   }


	       
  

 int main()
 {  
   Transaction a1; 
   main_menu(a1);
   getch();
   return 0; 
  }
  
  char trans(Transaction &a1)
  { 
    char ch;
    int i=0;
    while(1)
   {
     system("cls");
     jio();
     cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t 1. Deposit Amount ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 2. Withdraw Amount ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 3. Balance Enquiry ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 4. Check Book Facility";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 5. Calculate Compound Interest ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 6. Account Info";
     cout<<"\n\n\n\n\t  Exit(e)   \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sign Out(s)";
     cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t  Enter your choice : ";
     cin>>ch;
    
     switch(tolower(ch))
     { 
       case'1':system("cls");
                jio();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.deposit();
                break;
       case'2':system("cls");
                jio();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.withdraw();
                break;
       case'3':system("cls");
                jio();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.blncenquiry();
                break;
       case '4': a1.checkbk();
                break;
       case'5':a1.compound();
                break;
       case '6':a1.info();
	            break;         
       case 'e':system("cls");
                jio();
                system("color c");
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Thank You";
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   Creted By : Rajkumar Rocktim Narayan Singha";
	            sleep(2);
	            exit(0);
       case 's':cout<<"\n\n\n\n\n\n\n\n\n\n\t";
	             for(i=0;i<8;i++)
	             {
	              sleep(1);
                  cout<<"===== ===== ==== ==== ==== ";
                  
                  }
	            return 's';
       default: cout<<"\n\n\n\t\t\t Invalid Choice ";
     }
    }
    getch();
    
}


void main_menu(Transaction &a1)
{
  welcome();
  char ch,sign;
  int i=0;
  while(1)
  {
   system("cls");
   jio();
   cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t MAIN MENU "<<endl<<endl;
   cout<<"\t\t\t\t\t   1. Create Account"<<endl<<endl;
   cout<<"\t\t\t\t\t   2. Sign in"<<endl<<endl;
   cout<<"\t\t\t\t\t   3. Exit"<<endl<<endl;
   cout<<"\n\n\t\t\t\t\t Enter your choice : ";
   cin>>ch;
   switch(ch)
    {
       case '1':system("cls");
                jio();
                cout<<endl<<endl<<endl<<endl;
	            a1.accntgetdata();
                break;
       case '2':system("cls");
                jio();
                char accnt2[16],password2[18];
            
                 cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter Account No : ";
			     cin>>accnt2;
			     cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Enter Password : ";
	
				for(i=0;i<18;i++)
				{
			       password2[i]=0;
			       }
			        i=0;
			    while((password2[i]=getch())!='\r')
                {
		           printf("*");
    	            i++;
	             }
			     sign=check(a1,accnt2,password2);
                 if(sign=='s'|| sign=='S')
                  continue;
			     break;
              
       case '3':system("cls");
                jio();
                system("color c");
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Thank You";
	            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   Creted By : hakuna matata";
	            sleep(2);
	            exit(0);
       default:cout<<"\n\n\t\t\t\t\t Invalid Choice";
                getch();
    }
	  
  } 
 
 }
  
  
 
  

  
