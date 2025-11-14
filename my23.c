#include <stdio.h>
 
#define SENPA printf("=============================\n");
#define STU_NUM 2
#define SUBJECT 3
 
int main(){
 
    double score[STU_NUM][SUBJECT];
    char subject_name[SUBJECT][10] = {"MATH", "SCIENCE", "ENGLISH"};
 
    printf("=========== SCORE TABLE ===========\n");
    for(int x = 0; x < STU_NUM; x++){
        printf("Student No. %d\n", x+1);
        for(int y = 0; y < SUBJECT; y++){
            printf("  %-10s : ", subject_name[y]);
            scanf("%lf", &score[x][y]);
        }
        printf("\n");
    }
 
    printf("===== Average Score/Subject ======\n");
    for(int y = 0; y < SUBJECT; y++){
        double sum = 0;
        for(int x = 0; x < STU_NUM; x++){
            sum = sum + score[x][y];
        }    
        printf("  %-10s : %.2lf\n", subject_name[y], sum/STU_NUM);
    }
 
    SENPA
 
    return 0;
}