#include<stdio.h>
#include<conio.h>
void details()
{
 printf("WELCOME TO THE C LANGUAGE QUIZ\n");
 printf("This quiz has 20 questions on C Programming Language.\n");
 printf("Guidelines:\n");
 printf("1. 2 Marks for Right Answer\n");
 printf("2. -1 Marks for Wrong Answer");
}
int main()
{
 int marks=0,ans;
 clrscr();	
 details();
 printf("\nPress any key to continue");
 getch();
 clrscr();
 
 printf("Q1. In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?\n");
 printf("1-stdio.h   2-conio.h   3-dos.h   4-math.h\n");
 scanf("%d",&ans);
 if(ans==4)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q2. The ++ operator increments the operand by 1, whereas, the -- operator decrements it by 1.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q3. It is necessary that a loop counter must only be an int. It cannot be a float.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q4. To print a double value which format specifier can be used?\n");
 printf("1- % L   2- % lf   3- % Lf   4-None\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q5. Which is an invalid name of identifier?\n");
 printf("1-world   2-addition23   3-test-name   4-factorial\n");
 scanf("%d",&ans);
 if(ans==3)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q6. A zero value is considered to be false and a non-zero value is considered to be true.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q7. = is used for comparison, whereas, == is used for assignment of two quantities\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q8. Every C Program must have one function called?\n");
 printf("1-switch()   2-struct()   3-main()   4-for()\n");
 scanf("%d",&ans);
 if(ans==3)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q9. C is ______ Language?\n");
 printf("1-High Level   2-Low level   3-Assembly Level   4-Machine level\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q10. continue keyword skip one iteration of loop?\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q11. Switch statement can have any number of case instances\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q12. Two case constants within the same switch statement can have the same value.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q13. In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?\n");
 printf("1- +=   2- *=   3- /=   4-All of the above\n");
 scanf("%d",&ans);
 if(ans==4)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q14. What will be the output of 5.0 / 2?\n");
 printf("1-2   2-4   3-2.5   4-0\n");
 scanf("%d",&ans);
 if(ans==3)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q15. A do-while loop is used to ensure that the statements within the loop are executed at least twice.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q16. Structure is collection of dissimilar data types.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q17. The keywords cannot be used as variable names.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q18. Blank spaces may be inserted between two words to improve the readability of the statement.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q19. Who is father of C Language?\n");
 printf("1-Bjarne Stroustrup   2-Dennis Ritchie   3-James A. Gosling   4-Dr. E.F. Codd\n");
 scanf("%d",&ans);
 if(ans==1)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("Q20. C programs are converted into machine language with the help of an editor.\n");
 printf("1-True   2-False\n");
 scanf("%d",&ans);
 if(ans==2)
 marks+=2;
 else
 marks--;
 getch();
 clrscr();
 
 printf("You have scored: %d",marks);
 printf("\n\nThank You...");
 getch();
 printf("Goodbye");

}

