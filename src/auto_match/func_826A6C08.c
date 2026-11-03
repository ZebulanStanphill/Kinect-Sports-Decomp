typedef struct Rc_826A6C08 { unsigned obj; int pad; int count; } Rc_826A6C08;
typedef struct Loc_826A6C08 { unsigned x; Rc_826A6C08 *rc; } Loc_826A6C08;
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826BCE08();
extern int fn_826BC950();
extern int fn_82681898();
extern int fn_826944C8();

void fn_826A6C08(int param_1)
{
  Loc_826A6C08 l;
  int a, b, n;
  unsigned u;
  Rc_826A6C08 *r;

  if (*(int *)(param_1 + 0x1c) >= 1) {
    b = *(int *)(param_1 + 0x18);
    a = fn_826957D0(param_1, 0);
    fn_82696D38(&l.rc, a, b, -1, 0);
    u = l.rc->obj;
    l.x = 0;
    fn_826BCE08(l.rc->obj, &l.x);
    if (u == l.x) {
      fn_826BC950();
    }
    fn_82681898(*(int *)(param_1 + 4));
    r = l.rc;
    n = r->count - 1;
    r->count = n;
    if (n == 0) {
      fn_826944C8(r);
    }
  }
}
