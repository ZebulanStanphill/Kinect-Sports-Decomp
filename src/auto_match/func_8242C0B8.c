typedef struct SP_8242C0B8 { int *ptr; unsigned rep; } SP_8242C0B8;
extern int fn_824CCD80(int);
extern void fn_825603C8(int, int, int);
extern SP_8242C0B8 *fn_82522588(SP_8242C0B8 *, int *);
extern void fn_82430D80(int *, int, int);
extern void fn_822315A0(unsigned);
extern void fn_8243AF58(int);

void fn_8242C0B8(int param_1)
{
  int **p = *(int ***)(param_1 + 0x30);
  int i = 0;
  if (p != *(int ***)(param_1 + 0x34)) {
    float f = 0.0f;
    do {
      SP_8242C0B8 tmp;
      int *o;
      if (i++ == 0) {
        int *q = *p;
        if (q[0x22c / 4] != 1) {
          fn_825603C8(fn_824CCD80(q[0x10 / 4]), (int)q + 0x20, 1);
          q[0x22c / 4] = 1;
        }
      }
      o = fn_82522588(&tmp, (int *)p)->ptr;
      *(float *)(*(int *)((char *)o + 0x244) + 0x10) = f;
      fn_82430D80(o, 0xd, 1);
      if (tmp.rep != 0) {
        fn_822315A0(tmp.rep);
      }
      p += 2;
    } while (p != *(int ***)(param_1 + 0x34));
  }
  fn_8243AF58(*(int *)(param_1 + 0x174) + 0x1c);
}
