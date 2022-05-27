#include <stdio.h>

struct student {
	int id;
	char name[10];
	double score;
};

typedef struct student Student;


void inputStudnetName(Student* s) {
	strcpy(s[0].name, "abc");
	strcpy(s[1].name, "def");
}

void printStudnet(Student *s) {
	//printf("%d\n", sizeof(s) / sizeof(s[0]));
	//printf("%d\n", sizeof(*s));
	for (int i = 0; i < 2; i++)
		printf("id : %d\tname : %s\tscore : %.1lf\n", s[i].id, s[i].name, s[i].score);
}

int main(void) {

	//struct student s1 = {1, "ABC", 85.0};
	//Student s2;
	Student s[2] = { { 1, "ABC", 85.0 }, { 2, "DEF", 90.0 } };
	printf("%d\n", sizeof(s));
	//printf("%d\n", sizeof(s)/sizeof(s[0]));

	printStudnet(s);

	inputStudnetName(s);

	printStudnet(s);
	
	/*s1.id = 0;
	strcpy(s1.name, "GunwooYun");
	s1.score = 3.14;*/
	//s2.id = 1;

	//printf("s1 id : %d, s2 id : %d\n", s1.id, s2.id);


	return 0;
}