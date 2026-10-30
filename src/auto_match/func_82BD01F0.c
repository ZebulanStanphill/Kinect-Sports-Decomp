extern void *fn_82B7BD28(void *, int);
extern void *fn_82BC1468(void *, int, int, void *);
void *fn_82BD01F0(int a, int b, char *c) {
 void *p = *(void **)(c+0x5ac);
 void **q = fn_82B7BD28(p, 0x44);
 *q = p;
 if (q+1) return fn_82BC1468(q+1,a,b,c);
 return 0;
}

