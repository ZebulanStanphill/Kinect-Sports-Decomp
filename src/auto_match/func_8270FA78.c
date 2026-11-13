typedef struct { int m0; int m4; int count; } Rc_8270FA78;
extern void fn_826944C8(Rc_8270FA78 *);
extern void fn_82694B60(void *, int);
extern void fn_82696D38(Rc_8270FA78 **, int, int, int, int);

void fn_8270FA78(char *self, int a, int b)
{
  Rc_8270FA78 *rc;
  Rc_8270FA78 *r;
  fn_82696D38(&rc, b, a, -1, 0);
  fn_82694B60(self + 0x30, rc->m0);
  r = rc;
  if (--r->count == 0) {
    fn_826944C8(r);
  }
}
