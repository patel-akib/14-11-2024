/*Step 1: Grade Calculation
Develop a program that takes a score out of 100 as input from the user and calculates the
corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.*/
#include<stdio.h>
int main(){
	printf("enter marks:");
	int marks;
	scanf("%d",&marks);
	char grade;
	grade=marks>90?'A':marks>80?'B':marks>70?'C':marks>60?'D':'F';
	printf("your grade is : %c ,",grade);
	

    switch (grade) {
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done.");
            break;
        case 'C':
            printf("Good job.");
            break;
        case 'D':
            printf("You passed, but you could do better.");
            break;
        case 'F':
            printf("Sorry, you failed.");
            break;
        default:
            printf("Invalid grade.");
            break;
    }
    	if(marks>90){
		printf("your eligable your next round:");
	}
	else if(marks>80){
	printf("your eligable your next round:");
	}
	else if(marks>70){
			printf("your eligable your next round:");
	}
	else if(marks>60){
	printf("your eligable your next round:");
	}
	else{
		printf("Please try again next time");
	}

    

	

}
