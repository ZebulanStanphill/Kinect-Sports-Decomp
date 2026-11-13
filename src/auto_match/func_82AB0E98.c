typedef struct { int *b; int *e; unsigned cap; } Vec_82AB0E98;
extern int fn_8265C940(int, int);
extern void fn_8265C990(void *, int);
extern void fn_82A29A38(void);
extern void *memcpy(void *, const void *, unsigned);

int fn_82AB0E98(Vec_82AB0E98 *v)
{
  int m;
  int cnt;
  cnt = (v->e - v->b) + 0x3ffb;
  m = fn_8265C940(cnt * 4, 0x24870000);
  if (m == 0) {
    fn_82A29A38();
    return 0x8007000e;
  }
  if (v->b != 0) {
    if (v->cap != 0) {
      memcpy((void *)m, v->b, v->cap << 2);
    }
    fn_8265C990(v->b, 0x24870000);
  }
  v->b = (int *)m;
  v->e = (int *)(m + cnt * 4);
  return 0;
}
