extern void fn_8286CE28(int);
unsigned char fn_8286CFF8(int self) {
 if(*(unsigned char *)(self+4)==0)return 0;
 fn_8286CE28(self);
 *(unsigned char *)(self+4)=0;
 *(int *)(self+0xc)=*(int *)(self+8);
 return 1;
}
