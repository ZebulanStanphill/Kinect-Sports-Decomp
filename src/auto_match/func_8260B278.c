extern void *fn_827F3C20(void *); extern unsigned fn_827FA1E8(void *);
extern void *fn_8265CA60(unsigned); extern void *memset(void *,int,unsigned);
extern void fn_8260B328(void *,int,int);
void fn_8260B278(char *o) {
 void *a=fn_827F3C20(o);
 if (*(unsigned *)(*(char **)(o+0xb4)+0x110)!=0 && fn_827FA1E8(a)!=0) {
 unsigned n=fn_827FA1E8(a); unsigned bytes=n<=0x3fffffff ? n*4 : -1;
 *(void **)(o+0xbc)=fn_8265CA60(bytes);
 memset(*(void **)(o+0xbc),0,fn_827FA1E8(a)*4);
 fn_8260B328(o,*(int *)(o+0xb8),0);
 } else *(int *)(o+0xbc)=0;
}