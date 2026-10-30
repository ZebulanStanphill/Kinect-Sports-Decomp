typedef struct Obj { int a,b; unsigned int n; } Obj;
extern void fn_82A29A38(void);
unsigned char fn_82AACC20(Obj *p, unsigned int n) {
 if (!p) fn_82A29A38();
 return n < p->n;
}
