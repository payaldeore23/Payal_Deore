#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    int age;
    struct subjects{
        float English;
        float Maths;
        float Science;
    }t1;
};

int main()
{
    double total=0;
    struct student s1{
    .roll no = 12,
    .name = "Christ",
    .age = 25
    };
    printf("size = %d\n",sizeof(struct student));
    printf("Roll no : %d\n Name : %s\n Age : %d\n",s1.rollno,s1.name,s1.age);

    struct subjects t1={92,78,82};
    printf("English = %.2f\n Maths = %.2f\n Science = %.2f\n",t1.English,t1.Maths,t1.Science);

    total += t1.English + t1.Maths + t1.Science;
    printf("Total Score = %.2lf",total);

    return 0;
}
