#include <stdio.h>


// student structure
//struct Student...
struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("Student: %s %s\n", student->firstname, student->lastname);
  printf("age: %d\n", student->age);
  printf("id: %d\n", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++)
  {
    printf("----- student %d -----\n", i+1);
    printStudent(&students[i]);
  }
}


int main()
{

  // an array of students
  //xxx students;
  struct Student studentArr[10];
  char input[256];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(studentArr, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      printf("What is your first name?\n");
      fgets(studentArr[numStudents].firstname, 50, stdin);
      printf("What is your last name?\n");
      fgets(studentArr[numStudents].lastname, 50, stdin);
      printf("What is your age?\n");
      scanf("%d", &studentArr[numStudents].age);
      printf("What is your student id?\n");
      scanf("%d", &studentArr[numStudents].studentid);

      numStudents++;
    }
  }
  printf("\nGoodbye!\n");
}
