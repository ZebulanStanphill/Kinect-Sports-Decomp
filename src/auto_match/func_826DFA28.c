typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
void fn_826DFA28(unsigned p,int a,...) {
 va_list ap;
 int *q,*r;
 __va_start(&ap,a);
 q=p!=0?(int *)(p-0x14):0;
 r=*(int **)(q[4]+0xc);
 if(r!=0) ((void (*)(int *,int,int,va_list))(*(int *)(*r+4)))(r,0x10,a,ap);
}
