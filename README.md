# College Admission System

A project written in C program which can help colleges to better facilitate and manage the admission process of students.

## Technology used
 C programming 
 
## Features
- The project helps the student admission and registration process, and maintains a record of student's personal and academic details.
- Displays student information.
- Displays Course Details,Fee structure.
- Clean design and formatting.

## How to use ?
1. Download or clone the repository.
2. Run the file college_admission_system.c with a suitable C IDE.

Note: 'admin id' to display all registered student details is located in admin_id.txt

## Code Example
```
void main()
{
    int i,j,n,choice,feec,bec,pgc,adm;
    long int m;
    for(;;) {
        printf("\n\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n");
        printf("+ \t\t     MENU\t\t\t+\n+\t\t\t\t\t\t");
        printf("+\n+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
        printf("+\t\t\t\t\t\t+\n+ 1.Admission/Registration\t\t\t+\n+\t\t\t\t\t\t+\n+ 2.Academic Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 3.Fees Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 4.Search Your Registration By Name\t\t+\n+\t\t\t\t\t\t+\n+ 5.Show all Registrations\t\t\t+\n+\t\t\t\t\t\t+\n+ 6.Quit\t\t\t\t\t+\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-+-");
        printf("\n\nEnter Your Choice? \n\n");
        scanf("%d",&choice);
        switch(choice) {
        case 1: system("cls");
                admission_form();
                break;
        case 2: show_academic_details();
                break;
        case 3: fees_details();
                break;
        case 4: search_student();
                break;
        case 5: display();
                break;
        case 6: return;

        default:break;
        }
    }
  }
```

## Credits
**©** @ganeshbs17 | 2020







