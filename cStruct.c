// struct is a phat data type that stores data types
struct student {
  char *name; // stores just a pointer
  char eid[]; // internally stored
  double gpa; // could be better
  long long loans; // internally painful
}

struct student andrew = {
  .name = "Andrew Smith",
  .eid = "and*****",
  .gpa = 4.0,
  .loan = 9001
}

// Heap:
// Where dynamic memnory is stored
// memory allocate, malloc calls
// void* malloc(size_t num_bytes)
struct student* s = malloc(sizeof(struct student));
if(s == NULL) { // memory could not be found to allocate
  s -> name = "test student", // same as (*s).name
}
