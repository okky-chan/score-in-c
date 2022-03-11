/*
    aqua    = Assignment
	megumin = Mid
	makoto  = Final
	nos     = Number of Student
*/

#include <stdio.h> // File Header
#include <stdlib.h> // File Header
#include <limits.h> // File Header
#include <stdbool.h> // File Header

int main() // Main Function
{
    system("color A"); // Change the color of the writing to green

    int aqua=0, megumin=0, makoto=0, x=0; // Variable declaration
    int max =-0, min= INT_MAX, score=0, nos=0, nos_megumin=0, nos_makoto=0, tot_aqua=0, tot_megumin=0, tot_makoto=0, tot_score=0; // Variable declaration
    int aCount=0, bCount=0, cCount=0, dCount=0, fCount=0;
    int again;
    float avg, avg_aqua, avg_megumin, avg_makoto, avg_score, total;

    printf("\nThis Program created by \n");
    printf(" Okky Dwi Triferyawan    \n");
    printf("     012201800005     \n\n\n");
    printf("\n(Press -1 on any input if wanna quit)\n");

    start: // start begin

    while(0?(!1):(!0)){ // Start Looping is True

        printf("\nEnter Assignment Score : ");
        nos+=scanf("%d",&aqua); // nos += for count the student
            if (aqua>max) max=aqua; // Determine Maximum number
            if (aqua<min) min=aqua; // Determine Minimum number
        printf("\nEnter Mid Score : \t");
        nos_megumin+=scanf("%d",&megumin);
                if (megumin>max) max=megumin;
                if (megumin<min) min=megumin;
        printf("\nEnter Final Score : \t");
        nos_makoto+=scanf("%d",&makoto);
                    if (makoto>max) max=makoto;
                    if (makoto<min) min=makoto;

        bool x=(aqua <= -1) || (megumin <=-1) || (makoto <=-1); // if press (-1) the program will close

         if(x){ // the function of "x" will run
            printf("\nTotals of Results:\n");
            printf("\nA= %d\t", aCount);
            printf("B= %d\t", bCount);
            printf("C= %d\t", cCount);
            printf("D= %d\t", dCount);
            printf("E= %d\t", fCount);
            printf("\n\nSum of Assignment = %d\t", tot_aqua);
            printf("\nSum of Mid = %d\t", tot_megumin);
            printf("\nSum of Final = %d\t", tot_makoto);
            printf("\nSum of Total Score = %d\t", tot_score);
            printf("\nAverage of Assignment = %.2f\t", avg_aqua);
            printf("\nAverage of Mid = %.2f\t", avg_megumin);
            printf("\nAverage of Final = %.2f\t", avg_makoto);
            printf("\nAverage of Total Score = %.2f\t", avg_score);
            printf("\nNumber of Students = %d\t", nos-1);
            printf("\n\nDo you want restart the program? press 1=Yes or 2=No \n");
            scanf(" %d", &again);
            if (again==1){ // if press 1 the program will go to start on the top
                    system("cls");
            goto start;} // the program will execute
            return 0;
        }else{
                score = 0.3 * aqua + 0.3 * megumin + 0.4 * makoto;

                tot_aqua = tot_aqua + aqua;
                tot_megumin = tot_megumin + megumin;
                tot_makoto = tot_makoto + makoto;
                tot_score = tot_score + score;

                total = aqua + megumin + makoto;
                avg = total / 3.0;
                avg_aqua = tot_aqua / nos;
                avg_megumin = tot_megumin / nos_megumin;
                avg_makoto = tot_makoto / nos_makoto;
                avg_score = tot_score / nos;



                printf("\nAssingment Score : %d     Mid Score : %d      Final Score : %d", aqua, megumin, makoto);
                printf("\nMin Number is : %d", min);
                printf("\nMax Number is : %d", max);
                printf("\nAverage : %.2f", avg);
                printf("\nTotal Score : %d", score);
                if(score>100)printf("Sorry, Max Score 100\n");
                else{
                   switch(score/10)
                    {
                        case 10:
                        case 9: // Score from 90 until 100 will be get Grade A.
                            printf("\n====================");
                            printf("\nYou Got A Grade.\t***");
                            printf("\n====================");
                            ++aCount;
                            break;
                        case 8:
                        case 7: // Score from 70 until 89 will be get Grade B.
                            printf("\n====================");
                            printf("\nYou Got B Grade.\t**");
                            printf("\n====================");
                            ++bCount;
                            break;
                        case 6: // Score from 60 until 69 will be get Grade C.
                            printf("\n====================");
                            printf("\nYou Got C Grade.\t");
                            printf("\n====================");
                            ++cCount;
                            break;
                        case 5:
                        case 4: // Score from 40 until 59 will be get Grade D.
                            printf("\n====================");
                            printf("\nYou Got D Grade.\t*");
                            printf("\n====================");
                            ++dCount;
                            break;

                        default: // Score under 40 will be get Grade D.
                            printf("\n====================");
                            printf("\nYou Got E Grade.\t**");
                            printf("\n====================");
                            ++fCount;
                            break;

                        }
                }

        }


    }

    return 0;
}
