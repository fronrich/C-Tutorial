#include <stdio.h>
#include<stdlib.h>
#include <string.h>
// prints out a student

// the student structure
struct student {
  char *name;
  char eid[8];
  double gpa;
  long double loan;
};

double gpa(struct student *student) {
  double gpa = 0.0;
  for(int i = 0; i < sizeof(student->grades); i++) {
    gpa += (student->grades);
  }
  return gpa / sizeof(student->grades)
}

int main() {
  struct student s1 = {
    .name = "Test Student 1",
    .eid = "tes0001",
    .gpa = 3.5,
    .loan = 100000.0
  };
  printf("Name: %s\n", s1.name);
  printf("EID: %s\n", s1.eid);
  printf("gpa: %f\n", s1.gpa);
  printf("Student loan: %Lf\n", s1.loan);

  // struct student s2 = ()
  // ANYTIME YOU CALL (SOMETHING)ALLOC CHECK THE RETURN VALUE
  // if(var == NULL) {
  //  exit(1);
  //}
};
