#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FILE_OPEN_ERR_MSG "fail to open file"

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
	for (int i = 0; i < 2; i++) {
		printf("id : %d\tname : %s\tscore : %.1lf\n", s->id, s->name, s->score);
		s++;
	}
}

void saveStudent(Student* s) {
	FILE* wfp;
	wfp = fopen("st.db", "w"); // fopen : high level file i/o function
	if (wfp == NULL) {
		printf("failed to open file\n");
		exit(1);
	}

	fwrite(s, sizeof(Student), 2, wfp);

	fclose(wfp);


}

Student* readStudent(const char* file_name) {

	FILE* rfp;
	rfp = fopen(file_name, "r");
	if (!rfp) {
		//printf("fail to open file\n");
		//fputs(FILE_OP_ER_MSG, rfp);
		printf(FILE_OPEN_ERR_MSG);
		exit(1);
	}

	fseek(rfp, 0, SEEK_END); // file pointer moves end of file

	int size = ftell(rfp); // return location file pointer indicates

	int cnt = size / sizeof(Student); // file size / struct size == number of struct in file

	Student* s = (Student*)malloc(size * sizeof(Student));

	if (!s) {
		printf(FILE_OPEN_ERR_MSG);
		exit(1);
	}

	fseek(rfp, 0, SEEK_SET);

	fread(s, sizeof(Student), cnt, rfp);

	fclose(rfp);

	return s;

}

int main(int argc, char* argv[]) {

	
	

	
	Student* s = readStudent("st.db");
	

	//struct student s1 = {1, "ABC", 85.0};
	//Student s2;
	//Student s[2] = { { 1, "ABC", 85.0 }, { 2, "DEF", 90.0 } };
	//printf("%d\n", sizeof(s));
	//printf("%d\n", sizeof(s)/sizeof(s[0]));
	//saveStudent(s);
	//printStudnet(s);

	//inputStudnetName(s);

	printStudnet(s);
	
	/*s1.id = 0;
	strcpy(s1.name, "GunwooYun");
	s1.score = 3.14;*/
	//s2.id = 1;

	//printf("s1 id : %d, s2 id : %d\n", s1.id, s2.id);

	free(s);
	//fclose(rfp);


	return 0;
}