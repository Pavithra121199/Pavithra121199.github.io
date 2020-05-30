/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char qn_type[30];
    char difficulty[10];
    long long int total_count;
    long long int actual_count;
    float time_taken;
    char feedback[20];
    long long int right;
    long long int wrong;
    long long int partially_right;
    int max_marks;
    long long int chng_mcq;
    long long int times_compiled;
    long long int hints;
    char lang[25];
    float av;
    long long int not_answered;
    double percent;
    printf("1.Enter the question type - MCQ/Fillup/Programming/Match_the_following:\n");
    scanf("%s",qn_type);
    printf("\n2.Manually assigned difficulty- Easy/ Medium/ Hard:\n");
    scanf("\n%s",difficulty);
    printf("\n3.Total no.of students who attended the question:\n");
    scanf("%lld",&total_count);
           actual_count=total_count;
    printf("\na)Time taken by each student to complete the question:\n");
    scanf("%f",&time_taken);
    printf("\nb)Number of hints used:\n");
    scanf("%lld",&hints);
    if(strcmp(qn_type,"MCQ")==0)
    {
        printf("\nc)Number of times the answer is changed in MCQ:\n");
        scanf("%lld",&chng_mcq);
        actual_count=total_count-chng_mcq;
    }
    else if(strcmp(qn_type,"Programming")==0)
    {
        printf("\nc)Number of times the program was compiled:\n");
        scanf("%lld",&times_compiled);
        actual_count=total_count-times_compiled;
        printf("\nd)Programming language used-C/C++/Java/other:\n");
        scanf("%s",lang);
    }
    printf("\n4.Feedback given by other students:Easy/Medium/Hard:\n");
    scanf("%s",feedback);
    printf("\n5.Number of students who have answered it right:\n");
    scanf("%lld",&right);
    printf("\n6.Number of students who have answered it wrong:\n");
    scanf("%lld",&wrong);
    printf("\n7.Number of students who have answered it partially right:\n");
    scanf("%lld",&partially_right);
    printf("\n8.Maximum marks alloted for the question:\n");
    scanf("%d",&max_marks);
    
    if(right>wrong && right>partially_right)
    {
        printf("\nThe difficulty level of the question : Easy\n");
    }
    else if(wrong>right && wrong>partially_right)
    {
        printf("\nThe difficulty level of the question: Hard\n");
    }
    else 
        printf("\nThe difficulty level of the question:Medium\n");
           
           
    av=((right*max_marks)+((partially_right*max_marks)/2)/actual_count;
           
           printf("\nAverage mark obtained for this question is :%.1f\n",av);
         
    not_answered=actual_count-(right+wrong+partially_right);
           printf("\nNo.of students who have not answered the question is:%lld\n",not_answered);
         percent=(not_answered*100)/actual_count;
         printf("\nNot answering percentage is:%.2f%%\n",percent);
}
