typedef void (*Call)(int);
void fn_827C8D38(int self) {
 unsigned *s=*(unsigned **)(self+0x13c);
 (*(Call *)(*(int *)(self+0x15c)+8))(self);
 switch(s[4]) {
 case 0: s[4]=2;if(*(unsigned char *)(self+0xb2))break;++s[7];break;
 case 1: s[4]=2;break;
 case 2: if(*(unsigned char *)(self+0xb2))s[4]=1;++s[7];break;
 }
 ++s[5];
}
