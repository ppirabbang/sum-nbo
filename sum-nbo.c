#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char ** argv){
	uint32_t thounds[] = {0,};
	uint32_t two_hundred[] = {0,};
	uint32_t five_hundred[] = {0,};


	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");
	FILE *fp3 = fopen(argv[3], "rb");


	if(fp1){
		fread(thounds, sizeof(uint32_t), 1, fp1);
		fclose(fp1);
	}

	if(fp2){
		fread(two_hundred, sizeof(uint32_t), 1, fp2);
		fclose(fp2);
	}
	if(fp3){
		fread(five_hundred, sizeof(uint32_t), 1, fp3);
		fclose(fp3);
	}

	uint32_t* p1 = thounds;
	uint32_t n1 = ntohl(*p1);
	printf("%d(0x%08x)", n1 ,n1);

	printf(" + ");

	uint32_t* p2 = two_hundred;
	uint32_t n2 = ntohl(*p2);
	printf("%d(0x%08x)", n2, n2);

	printf(" + ");

	uint32_t* p3 = five_hundred;
	uint32_t n3 = ntohl(*p3);
	printf("%d(0x%08x)", n3, n3);

	printf("= %d(0x%08x)", n1+n2+n3, n1+n2+n3);
	return 0;
}
