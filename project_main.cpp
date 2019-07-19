
#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
class student
{
    char name[20];
    long ph_no;
    char ads[30];
    long dob;
    long enq_no;
public:
    void getdata();
    void showdata();
void scheme();
     int storestudent();
    void viewstudent();
    void searchstudent(char *);
    void update(char *);


};
int fee=0;
int rank=0;
int amount=0;
int percent=0;


void  student::getdata()
{
     cout<<"\t\\\\\\\\\\\\\\\\\\ NEW STUDENT ENTRY \\\\\\\\\\\\\\\\\\"<<endl<<endl;
     cout<<"enter the name of student"<<endl;
    gets(name);
    cout<<"enter the date of birth of student"<<endl;
    cin>>dob;
   cout<<"enter the address"<<endl;
   cin>>ads;
   cout<<"enter the phone number of the student"<<endl;
   cin>>ph_no;
   cout<<"enter your enquire number"<<endl;
   cin>>enq_no;
   fflush(stdin);
}
void student::showdata()
{int x=1;
    cout<<endl<<"\t\tSTUDENTS DETAILS ARE : "<<endl<<endl;
    cout<<"Name of the student is : "<<name<<endl;
    cout<<"Date of birth of student is : "<<dob<<endl;
    cout<<"Address of the student is : "<<ads<<endl;
    cout<<"Phone number of the student is : "<<ph_no<<endl;
    cout<<"enquire number is : "<<enq_no<<endl;
    fflush(stdin);

}
void stream()
{
    int x;
    cout<<endl<<endl;
    cout<<"\\\\\\\\\\\\\\\\\\ COURSES AVAILABLE AT LPU ARE: ////////////////////"<<endl<<endl;
    cout<<"1> Mechanical Engineering"<<endl;
          cout<<"2> Computer Science Engineering"<<endl;
          cout<<"3> Civil Engineering"<<endl;
          cout<<"4> Bachelor of Business Administration"<<endl;
           cout<<"5> Bachelor of Commerce"<<endl;
            cout<<"6> Bachelor of Computer Applications"<<endl;
            cout<<"7> Bachelor of Science Hotel Management"<<endl;
             cout<<"8> Bachelor of Science in Biotechnology"<<endl;
             cout<<"9> Bachelor of Architecture"<<endl;
              cout<<"10> Bachelor of Design in Multimedia"<<endl;
              cout<<"11> Bachelor of Science in Fashion Technology"<<endl;
              cout<<"12> Bachelor of Science in Agriculture"<<endl<<endl;
              cout<<"13> Any Post Graduate course or diploma courses "<<endl<<endl;




              cout<<"\t\tEnter your choice from option(1-13)";

              cin>>x;
              cout<<endl<<endl;
              fflush(stdin);
              if(x==1||x==2||x==3||x==8)
              {
                  cout<<"\t\t\tFEES=94,500"<<endl;
              }
              else if(x==4||x==5||x==6)
              {
                  cout<<"\t\t\tFEES=65,500"<<endl;
              }
              else if(x==7||x==10||x==11||x==12||x==9)
              {
                  cout<<"\t\t\tFEES=55,500"<<endl<<endl;
              }
              else if(x==13)
              {
                  cout<<"1> Master of Business Administration (MBA)"<<endl<<endl;
              cout<<"2> Master in technology(MTech)"<<endl<<endl;
              cout<<"3>diploma courses"<<endl<<endl;
                  cout<<"\t\tEnter your choice from option(1-2)";
                  cin>>x;
                  if(x==1)
                    cout<<"\t\t\tFEES=100,500"<<endl<<endl;
                  fflush(stdin);

              }

}
void scholar()
{
int marks;
    int k;
    cout<<"\n\t#####Select your choice on which you want to get Scholarship#####\n";
    cout<<"\n\t\t\n";
    cout<<"1.LPUNEST marks"<<endl;
    cout<<"2.JEE-MAINS marks"<<endl;
    cout<<"3.12th marks"<<endl;
    cin>>k;
    fflush(stdin);
  if(k==1)
      {
      cout<<"Enter your rank or percentile in LPUNEST Exam:\n";
      cin>>rank;
      fflush(stdin);
          if(rank<=10 && rank>0)
             {
              fee=24500;
              amount=(8*fee);
              cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl<<endl;
             }
         if(rank<=20 && rank>10)
            {
              fee=54500;
              amount=(8*fee);
              cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl<<endl;
            }
        if(rank<=30 && rank>20)
          {
           fee=64500;
           amount=(8*fee);
           cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl<<endl;
          }
          if(rank>30)
          {

           cout<<"NOT QUALIFIED"<<amount<<endl<<endl;
          }
      }
    if(k==2)
    {

        cout<<"enter your JEE-MAINS marks:\n";
        cin>>marks;
        fflush(stdin);
        if(marks>=325)
         {
      fee=10500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
         }
        if(marks<325 && marks>=275)
            {
      fee=19500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
            if(marks<275 && marks>=225)
                {
      fee=34500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
                }
          if(marks<225 && marks>=175)
            {
      fee=44500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
            if(marks<175 && marks>=150)
            {
      fee=54500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
            if(marks<150 && marks>=120)
            {
      fee=64500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
            if(marks<120)
            {

      cout<<"NO SCHOLARSHIP ON THE BASIS OF JEE-MAINS MARKS"<<amount<<endl;
            }



    }
if(k==3)
{
    cout<<"enter your 12th percentage:\n";
        cin>>percent;
        fflush(stdin);
        if(percent>=95)
         {
      fee=14500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
         }
        if(percent<95 && percent>=90)
            {
      fee=29500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
            if(percent<90 && percent>=85)
                {
      fee=34500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
                }
          if(percent<85 && percent>=80)
            {
      fee=44500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }
              if(percent<80 && percent>=75)
            {
      fee=64500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }

            if(percent<75 && percent>=70)
            {
      fee=74500;
      amount=(8*fee);
      cout<<"FEES PER SEMESTER IS = "<<fee<<"\n"<<"TOTAL 4 YEARS FEES = "<<amount<<endl;
            }


               if(percent<70)
            {

      cout<<"No Scholarship"<<endl;
            }


}


}
void docu()
{int x=1;
    cout<<"\t\t\tDOCUMENTS REQUIRE FOR ADDMNISSION ARE:"<<endl;
    cout<<"1> 10th marks sheet"<<endl;
    cout<<"2> 12th marks sheet"<<endl;
    cout<<"3> Any photo id(adhar card,PAN card etc)"<<endl;
    cout<<"4> LPUNEST marks sheet blueprint"<<endl;
    cout<<"5> 2 passport size photo"<<endl<<endl;
fflush(stdin);

}

int student::storestudent()
{

    ofstream fout;
    fout.open("project.txt",ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    return(1);

}
   void student::viewstudent()
    {
        ifstream fin;
        fin.open("project.txt",ios::out);
        if(!fin)
           cout<<"file not found";
        else
        {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
         showdata();
         fin.read((char*)this,sizeof(*this));

        }
         fin.close();
        }

    }

   void student::searchstudent(char *t)
    {
        int count=0;
        ifstream fin;
        fin.open("project.txt",ios::in);
        if(!fin)
        {
            cout<<"file not found:"<<endl;
        }
        else
        {

        while(!fin.eof())
        {
            fin.read((char*)this,sizeof(*this));
            if(!strcmp(t,name))
            {
                showdata();
                count++;
            }
             fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        if(count==0)
            cout<<"record not found"<<endl;;
        }
    }
  void student::update(char *t)
    {
    	fstream file;
    	file.open("project.txt",ios::in|ios::ate|ios::out);
    	file.seekg(0);
    	file.read((char*)this,sizeof(*this));
    	while(!file.eof())
    	{
    		if(!strcmp(t,name))
    		{
    			getdata();
    			file.seekp(file.tellp()-sizeof(*this));
    			file.write((char*)this,sizeof(*this));
    		}
    		file.read((char*)this,sizeof(*this));
    	}
    	cout<<"\n Your record Successfully Update"<<endl;
    	cout<<"press any key to see updated record"<<endl;
    	getch();
    	viewstudent();
    	file.close();
    }


void start()
{

  char x;
student s;
      cout<<"***********************************************************************************************************************"<<endl;
    cout<<"\t\t\t\t\tLPU SCHOLARSHIP SCHEME "<<endl;
    cout<<"***********************************************************************************************************************"<<endl<<endl;
    cout<<"\t\tMAIN MENU"<<endl<<endl;
    cout<<"\t1>NEW STUDENT ENTRY"<<"\n";
    cout<<"\t2>SEARCH STUDENT DETAILS"<<"\n";
    cout<<"\t3>UPDATE INFORMATION"<<"\n";
    cout<<"\t4>DOCUMANTATION INFORMATION"<<"\n";
    cout<<"\t5>SCHOLARSHIP SCHEME"<<"\n";
    cout<<"\t6>STUDENT DETAILS"<<"\n";

    cout<<"\t\t\t\tPlease select your option(1-6)";
    cin>>x;
    cout<<endl<<endl;
fflush(stdin);
    switch(x)
    {
        case '1': s.getdata();s.showdata();
        s.storestudent();
         break;

          case '2':
          char temp1[100];
        cout<<"Enter the student name:"<<endl;
        fflush(stdin);
        cin.getline(temp1,50);
     s.searchstudent(temp1);

     int x2;
            cout<<"enter 1 to go to home page"<<endl<<endl;
            cin>>x2;
            if(x2=1)
                start();
     break;

        case '3':
            int x;
          char temp2[100];
        cout<<"Enter the student name:"<<endl;
        fflush(stdin);
        cin.getline(temp2,50);
     s.update(temp2);


            cout<<"enter 1 to go to home page"<<endl;
            cin>>x;
            if(x=1)
                start();



            break;
        case '4':
            docu();int x1;
            cout<<"enter 1 to go to home page"<<endl<<endl;
            cin>>x1;
            if(x1=1)
                start();

            break;
        case '5': s.scheme();
            break;


             case '6':
                 int i;
                 s.viewstudent();
             cout<<endl<<"enter 1 to go to home page"<<endl<<endl;
             cin>>i;
             if(i==1)
                start();
            break;


            default :cout<<"invalid input"<<endl;
    }
    }

    void  student::scheme()
    {

         int x;
          int n;

    cout<<"On which bases you want to check scholarship:\n";
    cout<<"1.LPUNEST marks"<<endl;
    cout<<"2.12th marks"<<endl;
    cout<<"3.JEE-MAINS marks"<<endl;
    cout<<"Enter your choice:\n";
    cin>>n;
    fflush(stdin);


    if(n==1)
    {
        cout<<"Performance in LPUNEST "<<"\t\t\t\t"<<"Scholarship Amount"<<endl;
        cout<<"-----------------------"<<"\t\t\t\t"<<"------------------"<<endl;
        cout<<"1.Top 10% applicants"     <<"\t\t\t\t"<<"1 Lac per annum"<<endl;
        cout<<"2.Next 10%(i.e. 11%-20%) applicants"<<"\t\t"<<"80000 per annum"<<endl;
        cout<<"3.next 10%(i.e. 21%-30%) applicants"<<"\t\t"<<"60,000 per annum."<<endl;

    }
    if(n==2)
    {
        cout<<"Scholarship criteria        "<<"\t\t\t\t"<<"scholarship amount"<<endl;
        cout<<"----------------------------"<<"\t\t\t\t"<<"------------------"<<endl;
        cout<<"1.98% or above aggregate marks "<<"\t\t\t\t"<<"75,000 rs. per semester"<<endl;
        cout<<"2.90%-97.99%%  aggregate marks "<<"\t\t\t\t"<<"50,000 rs. per semester"<<endl;
        cout<<"3.80%-89.99%  aggregate marks "<<"\t\t\t\t"<<"40,000 rs. per semester"<<endl;
        cout<<"4.70%-79.99%  aggregate marks "<<"\t\t\t\t"<<"30,000 rs. per semester"<<endl;
    }
 if(n==3)
    {
        cout<<"Scholarship criteria           "<<"\t\t\t\t "<<"scholarship amount"<<endl;
        cout<<"-------------------------------"<<"\t\t\t\t "<<"------------------"<<endl;
        cout<<"1.More than or equal to 325 marks "<<"\t\t\t\t"<<"75,000 rs. per semester"<<endl;
        cout<<"2.Score from 275 to 324 marks     "<<"\t\t\t\t"<<"50,000 rs. per semester"<<endl;
        cout<<"3.Score from 225 to 274 marks     "<<"\t\t\t\t"<<"40,000 rs. per semester"<<endl;
        cout<<"4.Score from 175 to 274 marks     "<<"\t\t\t\t"<<"30,000 rs. per semester"<<endl;
    }
    cout<<"enter 1 to go back to home page and 2 to again check scholarship"<<"\n\n";
    cin>>x;
    fflush(stdin);
    if(x==1)
        start();
    else
        scheme();
    }







int main()
{
int t;
    start();
    char x;
student s;


 stream();
 cout<<endl<<endl;
 cout<<"press 1 to proceed"<<endl<<endl;9;
 cin>>t;
cout<<"NOW FEES THROUGH SCHOLARSHIP"<<endl;
scholar();

int a;
cout<<"enter 1 to go to home page"<<endl;
cin>>a;
if(a=1)
 start();

    return 0;
}

