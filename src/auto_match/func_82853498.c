typedef struct T_82853498 {
  unsigned char *a;          /* 0x00 */
  int *b;                    /* 0x04 */
  unsigned char *c;          /* 0x08 */
  unsigned char *d;          /* 0x0c */
  int pad0;                  /* 0x10 */
  unsigned short n;          /* 0x14 */
  unsigned short s0;         /* 0x16 */
  unsigned short s1;         /* 0x18 */
} T_82853498;
typedef struct {
  int pad0[8];
  int x20;                   /* 0x20 */
  int pad1[2];
  int x2c;                   /* 0x2c */
} E_82853498;
extern void fn_82838B88(int *, int, int, unsigned short, unsigned short);
extern void fn_82639F78(int, int, int, int, int, unsigned __int64);

void fn_82853498(int param_1, int param_2, int param_3)
{
  int stk[128];
  T_82853498 *t = (T_82853498 *)(param_2 + 4);
  int *p;
  E_82853498 *e = 0;
  int i;
  int j;
  int m;
  fn_82838B88(stk, *(int *)(param_2 + 0x14) + param_3, param_1 + 0xa4, t->s0, t->s1);
  i = 0;
  if (t->n != 0) {
    do {
      int s0 = t->s0;
      m = 0;
      if ((unsigned)s0 < t->s1) {
        j = 0;
        if ((int)s0 > 0) {
          p = stk;
          do {
            if (t->d[j] == t->c[i]) {
              m = 1;
              e = (*(E_82853498 ***)(param_3 + 0x34))[t->b[t->a[*p]]];
            }
            j++;
            p++;
          } while (j < (int)s0);
        }
      }
      if (!(m & 0xff)) {
        e = (*(E_82853498 ***)(param_3 + 0x34))[t->b[t->c[i]]];
      }
      if (e != 0) {
        fn_82639F78(*(int *)(param_1 + 4), i, e->x20, 0, e->x2c, 0x8000000000000000ULL >> ((((unsigned)(0x5f - i) * 0x5556) >> 16) + 0x20));
      }
      i++;
    } while (i < (int)t->n);
  }
}
