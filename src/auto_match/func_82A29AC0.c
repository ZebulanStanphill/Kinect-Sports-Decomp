typedef struct Obj_82A29AC0 { unsigned status; int val; int f8; int fc; unsigned f10; } Obj_82A29AC0;
extern unsigned fn_82A1E650(unsigned, int);
extern void fn_82A2A370(int);
extern void fn_82A2B760(unsigned);

int fn_82A29AC0(unsigned a, Obj_82A29AC0 *o, int *out, int flag)
{
  unsigned r;
  if (o->status == 0x103) {
    if (flag != 0) {
      if (o->f10 != 0) a = o->f10;
      r = fn_82A1E650(a, -1);
    } else {
      r = 0x102;
    }
    if (r == 0x102) {
      fn_82A2A370(0x3e4);
      return 0;
    }
    if (r != 0) return 0;
  }
  *out = o->val;
  r = o->status;
  if ((int)r >= 0) {
    return 1;
  }
  fn_82A2B760(r);
  return 0;
}
