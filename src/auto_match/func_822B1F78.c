typedef struct { char p0[4]; int f4; char p8[4]; int fc; } Q;
extern int fn_8224F2B8(void *, Q *, void *);
extern unsigned int fn_82897B18(void *);
extern int fn_82897600(void *, void *, unsigned int);
extern int fn_82898220(void *, void *, void *, int);

void fn_822B1F78(char *a, Q *q, char *c){
 fn_8224F2B8(a + 0x30, q, c);
 fn_82897600(q, a + 0x84, fn_82897B18(c + 0x68));
 *(int *)(a + 0xac) = q->fc;
 fn_82898220(a + 0x84, q, c + 0x68, q->f4);
 fn_8224F2B8(a + 0xd8, q, c + 0xc0);
}
