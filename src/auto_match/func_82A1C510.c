typedef struct P { char pad[12]; unsigned short a,b; } P;
extern int fn_82A1C498(P **);
unsigned int fn_82A1C510(void) {
 P *p; unsigned int result=0;
 if (fn_82A1C498(&p) >= 0) result = ((unsigned int)p->a << 16) | p->b;
 return result;
}
