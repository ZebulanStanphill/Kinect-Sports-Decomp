extern void *fn_82B7BD28(void *, int);
extern void *fn_82BC1CB8(void *, int, int, void *);
void *fn_82BD04B0(int a, int b, char *c) {
 void *p = *(void **)(c+0x5ac);
 void **q = fn_82B7BD28(p, 0x38);
 *q = p;
 if (q+1) return fn_82BC1CB8(q+1,a,b,c);
 return 0;
}

