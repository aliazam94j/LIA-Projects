#include <stdio.h>
#include <string.h>

// ================================================
// DEBUG EXERCISES - SET 5
// Each exercise has exactly ONE bug.
// The comment tells you what it should do.
// Uncomment one exercise at a time.
// ================================================


// -----------------------------------------------
// EXERCISE 1 - Easy
// Should ask for a number and print it back.
// It prints a random number instead.
// -----------------------------------------------
// void exercise_1() {
//     int nr;
//     printf("enter a number: ");
//     scanf("%d", nr);
//     printf("your number: %d\n", nr);
// }

// int main(){
//     exercise_1();
//     return 0;
// }


// -----------------------------------------------
// EXERCISE 2 - Easy
// Should print numbers 1 to 5.
// It prints 0 to 4 instead.
// -----------------------------------------------
// void exercise_2() {
//     for(int i = 1; i <=4 ; i++) {
//         printf("%d\n", i);
//     }
// }

// int main(){
//     exercise_2();
//     return 0;
// }


// -----------------------------------------------
// EXERCISE 3 - Easy
// Should print the price 9.99.
// It prints a wrong number instead.
// -----------------------------------------------
// void exercise_3() {
//     float price = 9.99;
//     printf("price: %d\n", price);
// }

// int main(){
//     exercise_3();
//     return 0;
// }


// -----------------------------------------------
// EXERCISE 4 - Medium
// Should print "match" when both names are the same.
// It always prints "no match".
// -----------------------------------------------
// void exercise_4() {
//     char name1[50] = "Ali";
//     char name2[50] = "Ali";
//     if(name1 == name2){
//         printf("match\n");
//     } else {
//         printf("no match\n");
//     }
// }

// int main(){
//     exercise_4();
//     return 0;
// }


// -----------------------------------------------
// EXERCISE 5 - Medium
// Should add 10 to the number through a pointer.
// The number stays the same after the function runs.
// -----------------------------------------------
// void add_ten(int *p){
//     p = p + 10;
// }

// void exercise_5() {
//     int nr = 5;
//     add_ten(&nr);
//     printf("nr: %d\n", nr);
// }

// int main(){
//     exercise_5();
//     return 0;
// }


// -----------------------------------------------
// EXERCISE 6 - Medium
// Should print the name stored in the struct.
// It does not compile.
// -----------------------------------------------
// typedef struct {
//     char name[50];
// } Player;

// void exercise_6() {
//     Player p1;
//     strcpy(p1.name, "Ali");
//     printf("%s\n", p1->name);
// }

// int main(){
//     exercise_6();
//     return 0;
// }
