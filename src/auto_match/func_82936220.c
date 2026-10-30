extern void *fn_82930318(unsigned);
extern void *fn_829B36B8(void *, int);
int fn_82936220(int a, void **out) {
 void *p = fn_82930318(0x14), *q;
 if (p) q = fn_829B36B8(p, *(int *)(a+0x30)); else q = 0;
 if (!q) return 0x8007000e;
 *out = q;
 return 0;
}
