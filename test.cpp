#include <stdio.h>
#include <string.h>
struct student_info
{
    char student_name[100];
    char student_id[100];
    int student_age;
    char student_gender[100];
    float student_cgpa;
};

int main()
{
    int n;
    n = 3;
    student_info s[n];

    strcpy(s[0].student_name, "abcdef");
    strcpy(s[0].student_id, "0705103");
    s[0].student_age = 20;
    strcpy(s[0].student_gender, "Female");
    s[0].student_cgpa = 3.75;

    strcpy(s[1].student_name, "ghijkl");
    strcpy(s[1].student_id, "0705104");
    s[1].student_age = 25;
    strcpy(s[1].student_gender, "Male");
    s[1].student_cgpa = 3.80;

    strcpy(s[2].student_name, "mnop");
    strcpy(s[2].student_id, "0705105");
    s[2].student_age = 22;
    strcpy(s[2].student_gender, "Male");
    s[2].student_cgpa = 3.73;

    /**** Find out the student id with highest CGPA ****/
    /*
    float max_cgpa=s[0].student_cgpa;
    int max_index=0;
    int i;
    for(i=0;i<3;i++)
    {
        if(s[i].student_cgpa>max_cgpa)
        {
            max_cgpa=s[i].student_cgpa;
            max_index=i;
        }
    }

    puts(s[max_index].student_id);
    */
    /**** Youngest student ****/
    /*
    int min_age=s[0].student_age;
    int min_index=0;
    int i;
    for(i=0;i<3;i++)
    {
        if(s[i].student_age<min_age)
        {
            min_age=s[i].student_age;
            min_index=i;
        }
    }

    puts(s[min_index].student_id);
    */
    /*** Find out the student IDs whose age between 21-25 ***/
    /*
    int i;
    for(i=0;i<3;i++)
    {

        if((s[i].student_age>=21) && (s[i].student_age<=25))
        {
            puts(s[i].student_id);
        }
    }
    */
    /*** Youngest Male student ****/
    // finding out the first male student
    int i;
    int min_index = 0;
    int min_age = s[0].student_age;
    /*for(i=0;i<3;i++)
    {
        if(strcmp(s[i].student_gender,"Male")==0)
        {
            min_index=i;
            min_age=s[i].student_age;
            break;
        }
    }
    */
    for (i = 0; i < 3; i++)
    {
        if ((s[i].student_age < min_age) && (strcmp(s[i].student_gender, "Male") == 0))
        {
            min_age = s[i].student_age;
            min_index = i;
        }
    }
    puts(s[min_index].student_id);

    return 0;
}
