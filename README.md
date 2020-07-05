# College Admission System

A project written in C program which can help colleges to better facilitate and manage the admission process of students.

## Technology used
 C programming 
 
## Features
- The project helps the student admission and registration process, and maintains a record of student's personal and academic details.
- Displays student information.
- Displays Course Details,Fee structure.
- Generates Text file with all applicant details. 
- Clean design and formatting.

## Screen-shots
  ![Home](/ScreenShots/home.jpg)

  ![Fee Details](/ScreenShots/fee.jpg)

  ![Academic Details](/ScreenShots/acadet.jpg)

  ![Admission form](/ScreenShots/form.jpg)

  ![Student Details](/ScreenShots/sudet.jpg)

## How to use ?
1. Download or clone the repository.
2. Run the file college_admission_system.c with a suitable C IDE.


## Code Example
```
void main()
{
    char choice;
    
   	for(;;) 
	   {
	   system("cls");
		printf("\n\t\t _____   _   _______        _      \n");
		printf("\t\t  / ____| (_) |__   __|      | |     \n");
		printf("\t\t | |       _     | | ___  ___| |__   \n");
		printf("\t\t | |      | |    | |/ _ \/ __| '_ \ \n");
		printf("\t\t | |____  | |    | |  __/ (__| | | | \n");
		printf("\t\t  \_____| |_|    |_|\___|\___|_| |_| \n\n\n");
		
		
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

```

## Credits
**©** @ganeshbs17 :octocat: | 2020







