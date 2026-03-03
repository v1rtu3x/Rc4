/*example.c*/

#include "rc4.h"

#define F fflush(stdout);

int main(void);


void printbin(int8 *text, const int16 size){
	int16 i;
	int8 *p;

	assert(size > 0);
	for (i = size, p = text; i ; i--, p++){
		if (!((i + 1) % 2))
			printf(" ");
		printf("%.02x", *p);
	}

	printf("\n");
}

int main(){
	Arc4 *rc;
	int16 skey, stext;
	int8 *key, *source, *encrypted, *decrypted;

	key=source=encrypted=decrypted=0;
	skey=stext=0;
	key = "Socrates"; /*8 bits to 2048 bits*/
	skey = strlen(key);
	source = "I only know I know Nothing.";
	stext = strlen(source);

	printf("Initializing Encryption"); F;
	rc = rc4init((int8 *)key, skey);
	printf("...done\n");

	printf("'%s'\n->", source);
	encrypted = rc4encrypt(rc, source, stext);
	printbin(encrypted, stext);

	rc4uninit(rc);

	printf("Initializing Decryption");
	rc = rc4init((int8 *)key, skey);
	printf("...done\n");
	decrypted = rc4decrypt(rc, encrypted, stext);
	printbin(encrypted, stext);
	printf("->%s", decrypted);

	rc4uninit(rc);
	
	return 0;
}
