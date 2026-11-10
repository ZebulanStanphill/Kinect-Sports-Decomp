extern void *memset(void *,int,unsigned);
extern void fn_82A3CD78(char *,int,int,int);
void fn_82A3CED8(char *self,int a,int b,int c) {
 memset(self+0x28e8,0,0xaf0);
 memset(self+0x3c0e,0,0x3e4);
 fn_82A3CD78(self,a,b,c);
}
