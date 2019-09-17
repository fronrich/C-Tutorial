// arrays in c are a little different from java
// int A[]; not (int a = new int[])
// I want a to store 1 2 3 4 5 6 7
// A[0] = 0
// A[-1] = whatever is there
// indexing in an int array
// &A[i] = A+(i*sizeof(int)) == A[i] = *(A + (i*sizeof(int))
// A[-1] = 4 (random);
// A = 0x1A
// A + 1 == A + (length of datatype)
// A[i] == *(A + i)
// Strings
// in java, strings were objects
// C is not an object oriented language
// the closest things we get to objects are pointers
// Strings in c are nothing more arrays of chars
// char *s = "hello"; == ['h', 'e', 'l', 'l', 'o', '0']
// the 0 is the null terminator (tells you to stop reading the string)
// null terminated strings
// '0' != 0
// 48 != 00
