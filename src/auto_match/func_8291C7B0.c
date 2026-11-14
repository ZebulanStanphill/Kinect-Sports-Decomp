typedef struct O O; typedef struct { void (*a)(void); void (*b)(void); void (*f)(O *); } V; struct O { V *v; };
__declspec(noreturn) extern void longjmp(void *,int);
void fn_8291C7B0(O *p) { p->v->f(p); longjmp((char *)p->v+0x90,1); }
