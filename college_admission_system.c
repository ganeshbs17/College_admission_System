
/* program for college admission system */


// necessary headers
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// file pointers
FILE *student_detail;
FILE *admin_id;
FILE *student_id;


// structure for storing data of the enrolling student
struct admi {
    int uniq_id;
    char Name[50];
    char dob[50];
    char Gender[50];
    char Religion[50];
    char Nationality[50];
    char Address[100];
    char City[50];
    char State[50];
    char Father_Name[50];
    char Father_Occupation[50];
    char Mother_Name[50];
    char Mother_Occupation[50];
    char father_income[50];
    char mother_income[50];
    char Name_b[50];
    char Name_school[50];
    char school_s[50];
    char maxmarks[50];
    char marksob[50];
    char perc[50];
    char yop[50];
    char Name_b1[50];
    char Name_school1[50];
    char school_s1[50];
    char maxmarks1[50];
    char marksob1[50];
    char perc1[50];
    char yop1[50];
    char mig[50];
    char tc[50];
    char branch[50];
}form;

// structure for storing the administrator id
struct adminitrator {
    float id;
}host;


// function for generating the admission form which will take the data of the student while enrolling.
void admission_form()
{
    // this id will be used to check all the existing student ids already enrolled so that student id is unique
    int check_id;
    int branchcode;
    
    char ece[]="Electronics and Communication Engineering";
	char ise[]="Information Science and Engineering";
	char civ[]="Civil Engineering";
	char cse[]="Computer Science and Engineering";
	char mech[]="Mechanical Engineering";
	char eee[]="Electrical and Electronics Engineering";
    
    student_detail = fopen("student_details.txt","a+");
    student_id = fopen("student_id.txt","a+");
    printf(" \t \t STUDENT ADMISSION FORM \n");
    printf("\n\t\t\t\t\tuse underscore\"_\" for space\n");
    printf("\n1.Personal Details \n \n \n");
    printf("Create Your Unique User Id\n");
    scanf("%d",&form.uniq_id);
    while(!feof(student_id)) {
        fscanf(student_id,"%d",&check_id);
        if(form.uniq_id==check_id) {
            printf("\nSorry this ID has been taken please select a different ID\n");
            return;
        }
    }
    printf("Enter Your Name \n \n");
    getchar();
    gets(form.Name);
    printf("Enter the DOB in DD/MM/YYYY format \n \n");
    gets(form.dob);
    printf("Enter Your Gender : \n \n");
    scanf("%s",form.Gender);
    printf("Enter Your Religion \n \n");
    scanf("%s",form.Religion);
    printf("Enter Your Nationality \n \n");
    scanf("%s",form.Nationality);
    printf("Enter Your Permanent Address \n \n");
    getchar();
    gets(form.Address);
    printf("Enter Your City:\n \n");
    gets(form.City);
    printf("Enter Your Father's Name: \n \n");
    gets(form.Father_Name);
    printf("Enter Your Father's Occupation \n \n");
    gets(form.Father_Occupation);
    printf("Enter Your Mother's Name:  \n \n");
    gets(form.Mother_Name);
    printf("Enter Your Mother's Occupation \n \n");
    gets(form.Mother_Occupation);
    printf("Enter Your Father's Income: \n \n");
    scanf("%s",form.father_income);
    printf("Enter Your Mother's Income: \n \n");
    scanf("%s",form.mother_income);
    printf("\n2.Academic Details \n \n \n");
    printf(" \t Class 10th  \n\n");
    printf("%s\n%s\n%s\n","Name of Board","Name of School","State");
    printf("\n\n");
    getchar();
    gets(form.Name_b);
    gets(form.Name_school);
    gets(form.school_s);
    printf("\n\n%s\n%s\n%s\n%s\n","Max Marks","Marks Obtained","Percentage","year of passing");
    printf("\n\n");
    gets(form.maxmarks);
    gets(form.marksob);
    gets(form.perc);
    gets(form.yop);
    printf(" \t Class 12th  \n\n");
    printf("%s\n%s\n%s\n","Name of Board","Name of School","State");
    printf("\n\n");
    gets(form.Name_b1);
    gets(form.Name_school1);
    gets(form.school_s1);
    printf("\n\n%s\n%s\n%s\n%s \n","Max Marks","Marks Obtained","Percentage","year of passing");
    printf("\n\n");
    gets(form.maxmarks1);
    gets(form.marksob1);
    gets(form.perc1);
    gets(form.yop1);
    printf("Enter If you Have a Migration Certificate or not? \n");
    gets(form.mig);
    printf("Enter If you Have a Transfer Certificate or not \n");
    gets(form.tc);

    branchcode=show_academic_details();

    if (branchcode==1)
        strcpy(form.branch,ece);
    else if (branchcode==2)
        strcpy(form.branch,ise);
    else if (branchcode==3)
        strcpy(form.branch,civ);
    else if (branchcode==4)
        strcpy(form.branch,cse);
    else if (branchcode==5)
        strcpy(form.branch,mech);
    else if (branchcode==6)
        strcpy(form.branch,eee);
    

    fprintf(student_id,"\n%d",form.uniq_id);
    fclose(student_id);
    fprintf(student_detail,"\n\n\nUnique ID:%d \t\t\n \n The Name of Student:%s\n\n Branch:%s\n \n DOB of student:%s\n \n Gender of the student:%s\n \n Religion of the student:%s\n \n Nationality of the student:%s\n \n Address :%s\n \n City :%s\n \n Father's Name:%s\n \n Father's Occupation:%s\n \n Mother's Name:%s\n \n Mother's Occupation:%s\n \n Father's Income:%s\n \n Mother's Income:%s\n \n Name of Board of Class 10th:%s\n \n Name of School of Class 10th:%s\n \n Name of School State of Class 10th:%s\n \n Max Marks:%s\n \n Marks Obtained:%s\n \nPercentage:%s\n \n Year of Passing:%s\n \n Name of Board of Class 12th:%s\n \n Name of School of Class 12th:%s\n \n Name of School State of Class 12th:%s\n \n Max Marks:%s\n \n Marks Obtained:%s\n \n Percentage:%s\n \n Year of Passing:%s\n \n Migration Card:%s\n \n Transfer Certificate:%s\n\n",form.uniq_id,form.Name,form.branch,form.dob,form.Gender,form.Religion,form.Nationality,form.Address,form.City,form.Father_Name,form.Father_Occupation,form.Mother_Name,form.Mother_Occupation,form.father_income,form.mother_income,form.Name_b,form.Name_school,form.school_s,form.maxmarks,form.marksob,form.perc,form.yop,form.Name_b1,form.Name_school1,form.school_s1,form.maxmarks1,form.marksob1,form.perc1,form.yop1,form.mig,form.tc);
    fclose(student_detail);
    printf("\n\nThankyou For Submitting the Admission form!\nHave a Great Day\n");
    printf("\nPress any key to continue");
    getch();

}


// this function displays the academic details of the student based on branch
int show_academic_details() 
	{

    //local variables for the function
    int choice;
   
   
            printf("\n\nAcademic Details\n\n\n");
            printf("Please Select Your Branch\n\n");
            printf("1.Electonics And Communication Engineering \n");
            printf("2.Information Science\n");
            printf("3.Civil Engineering \n");
            printf("4.Mechanical Engineering\n");
            printf("5.Computer Science And Engineering\n");
            printf("6.Electrical And Electronics Engineering\n");
          
            printf("\nPlease Enter your Choice \n");
            scanf("%d",&choice);
            switch(choice) 
			{
	            case 1:
	            case 2:
	            case 3: printf("\t\tDetails for the First Semester\n\n\n");
		                printf("\t\t\tPHY CYCLE\n\n");
	                    printf("\tS.No.\tSubject Name\t\t\t\t\tSubject Credits\n");
	                    printf("\t1\tEngineering Mathematics-1 \t\t\t\t4\n");
	                    printf("\t2\tEngineering Physics \t\t\t\t\t4\n");
	                    printf("\t3\tBasic Electrical Engineering \t\t\t\t3\n");
	                    printf("\t4\tElements of Civil Engineering and Mechanics\t\t3\n");
	                    printf("\t5\tEngineering Graphics Drawing\t\t\t\t3\n");
	                    printf("\t6\tPhysics Lab\t\t\t\t\t\t1\n");
	                    printf("\t7\tBasic Electrical Engineering Lab\t\t\t1\n");
	                    printf("\t8\tTechnical English-1\t\t\t\t\t1\n");
	                    printf("\n\n\t\tTotal Credits = 20 \n\n");
	                    break;
	            case 4:
	            case 5:
		        case 6: printf("\t\tDetails for the First Semester\n\n\n");
	                    printf("\n\n\t\t\tCHEM CYCLE\n\n");
	                    printf("\tS.No.\tSubject Name\t\t\t\t\tSubject Credits\n");
	                    printf("\t1\tEngineering Mathematics-1 \t\t\t\t4\n");
	                    printf("\t2\tEngineering Chemistry\t\t\t\t\t4\n");
	                    printf("\t3\tC programming for problem solving\t\t\t3\n");
	                    printf("\t4\tBasic Electronics \t\t\t\t\t3\n");
	                    printf("\t5\tElements of Mechanical Engineering\t\t\t3\n");
	                    printf("\t6\tChemistry Lab\t\t\t\t\t\t1\n");
	                    printf("\t7\tC programming Lab\t\t\t\t\t1\n");
	                    printf("\t8\tTechnical English-2\t\t\t\t\t1\n");
                    
                    
                    printf("\n\n\t\tTotal Credits = 20\n\n");
            default :break;
}		
		printf("\nEnter any key to continue"); 
		getch();
		return choice;
        }

    
//fees details of the student to be seleceted by the student//
void fees_details() 
	{
    int feec,bec;
    printf("\n\nFEES DETAILS:\n\n");
    printf("Select the Course \n\n");
    printf("\n1.B.E\n\n2.Exit\n\n");
    scanf("%d",&feec);
    switch(feec) {
    case 1:
            printf("\t\t\t\nB.E.\n");
            printf("\n\nEnter The Admission Type:-\n");
            printf("\n1.CET \n\n2.COMEDK-UGET\n\n3.Management Quota\n\n");
            scanf("%d",&bec);
            if(bec==1){
                printf("\n\n\t\t\tCET\n\n");
                printf("\n\n\t\tFees per Year\n");
                printf("\nTution Fees= 36,000/-");
                printf("\nCollege University Fees = 60,000/-\n\n");
                printf("\nHostel Fees\n");
                printf("\nCaution Deposit = 10,000/-");                
                printf("\nHostel Fees = 90,000/-\n\n");
                }

             else if(bec==2){
                printf("\n\n\t\tCOMEDK-UGET\n");
                printf("\n\n\t\tFees per Year\n");
                printf("\nTution Fees= 50,000/-");
                printf("\nCollege University Fees = 1,50,000/-\n\n");
                printf("\nHostel Fees\n");
                printf("\nCaution Deposit = 10,000/-");                
                printf("\nHostel Fees = 90,000/-\n");
                }   

            else {
                printf("\n\n\t\t\tManagement Seat\n");
                printf("\n\n\t\t\tFees per Year\n");
                printf("\nTution Fees= 1,00,000/-");
                printf("\nCollege University Fees = 1,50,000/-\n\n");
                printf("\nHostel Fees\n");
                printf("\nCaution Deposit = 10,000/-");                
                printf("\nHostel Fees = 90,000/-\n\n");
            }


    default:    break;
    }
    printf("\nPress any key to continue");
    getch();
}

// for displaying all student details
void display()
{

    //local variables
   
    float adminid;
    int Found=0;
    char s;

    // opening the admin file
    if((admin_id=fopen("admin_id.txt","r"))==NULL) {
        printf(" ! The File is Empty...\n\n");
    } 
    else {
        printf("\nEnter The Administrator ID: ");
        scanf("%f",&adminid);
        while(!feof(admin_id)&& Found==0) {
            fscanf(admin_id,"%f",&host.id);
            if(adminid==host.id) {
                Found=1;
            }
        }
        if(Found) {
            student_detail = fopen("student_details.txt","r");
            while((s=fgetc(student_detail))!=EOF) {
                 printf("%c",s);
                }

                fclose(student_detail);
            }
        
        else if(!Found) {
            printf("Please Enter the Correct Administrator ID\n\n");
            fclose(admin_id);
        }
    }
    printf("\nPress any key to continue");
    getch();
}

// main function
void main()
{
    char choice;
    
   	for(;;) 
	   {
	   system("cls");
		printf("\n\t\t   _____   _   _______        _     \n");
		printf("\t\t  / ____| (_) |__   __|      | |    \n");
		printf("\t\t | |       _     | | ___  ___| |__  \n");
		printf("\t\t | |      | |    | |/ _ \\/ __| '_ \\ \n");
		printf("\t\t | |____  | |    | |  __/ (__| | | |\n");
		printf("\t\t  \\_____| |_|    |_|\\___|\\___|_| |_|\n\n\n");
		
		
        printf("\n\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n");
        printf("+ \t\t         \t\t\t+\n+\t\t    MENU\t\t\t");
        printf("+\n+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
        printf("+\t\t\t\t\t\t+\n+ 1.Admission/Registration\t\t\t+\n+\t\t\t\t\t\t+\n+ 2.Academic Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 3.Fees Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 4.Show all Registrations\t\t\t+\n+\t\t\t\t\t\t+\n+ 5.Quit\t\t\t\t\t+\n+\t\t\t\t\t\t+\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-");
        printf("\n\nEnter Your Choice? \n\n");
        scanf("%c",&choice);
        switch(choice) 
		{
        case '1': system("cls");
                admission_form();
                break;
        case '2': show_academic_details();
                break;
        case '3': fees_details();
                break;
        case '4':display(); 
                break;
        case '5': return;
            
        default:printf("Invalid input \n Please Enter correct option");
			break;
        }
    }
  }
