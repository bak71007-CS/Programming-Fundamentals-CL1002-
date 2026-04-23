#include <stdio.h>
#include <string.h>

struct dept
{
    char dept_code[10];
    char dept_name[50];
};

struct course
{
    char course_code[10];
    char course_name[60];
    int credit_hours;

    struct dept d;   
};

void searchbyDept(struct course c[], int n, char code[])
{
    int found = 0;

    printf("\nCourses in Department (%s):\n", code);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].d.dept_code, code) == 0)
        {
            printf("\nCourse Code: %s", c[i].course_code);
            printf("\nCourse Name: %s", c[i].course_name);
            printf("\nCredit Hours: %d", c[i].credit_hours);
            printf("\nDepartment: %s %s \n", c[i].d.dept_name, c[i].d.dept_code);
            found = 1;
        }
    }

    if(!found)
    {
        printf("No courses found for this department.\n");
    }
}

int main()
{
    struct course c[3];
    
    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter Details for Course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].course_code);

        printf("Course Name: ");
        scanf(" %[^\n]", c[i].course_name);

        printf("Credit Hours: ");
        scanf("%d", &c[i].credit_hours);

        printf("Department Code: ");
        scanf("%s", c[i].d.dept_code);

        printf("Department Name: ");
        scanf(" %[^\n]", c[i].d.dept_name);
    }

    printf("\n--------Course Records--------\n");
    for(int i = 0; i < 3; i++)
    {
        printf("\nCourse Code: %s", c[i].course_code);
        printf("\nCourse Name: %s", c[i].course_name);
        printf("\nCredit Hours: %d", c[i].credit_hours);

        printf("\nDepartment Code: %s", c[i].d.dept_code);
        printf("\nDepartment Name: %s\n", c[i].d.dept_name);
    }
    printf("-------------------------------------------------");

    char search_code[10];
    printf("\nEnter Department Code to search: ");
    scanf("%s", search_code);

    searchbyDept(c, 3, search_code);

    return 0;
}