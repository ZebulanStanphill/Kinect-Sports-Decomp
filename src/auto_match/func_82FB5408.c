extern unsigned fn_82FA5060(int, int);
extern void fn_82FA9208(unsigned);
extern unsigned fn_82FB3E80(unsigned, int);
extern int fn_82FB3F88(unsigned, int, int, int, int *);
extern unsigned fn_82FB4D78(void);
extern int lbl_831BC768;
struct O_82FB5408 { char p0[0x38]; int f38; };
unsigned fn_82FB5408(struct O_82FB5408 *o, unsigned flag, int *out)
{
  unsigned a;
  unsigned obj;
  int p;
  *out = 0;
  if (flag != 0 && (obj = fn_82FB4D78()) != 0) return obj;
  a = fn_82FA5060(lbl_831BC768, 0x5c);
  if (a != 0) {
    obj = fn_82FB3E80(a, (int)o);
    if (obj != 0) {
      *(int *)(obj + 0x2c) = *(int *)(obj + 0x2c) + 1;
      p = o->f38;
      if (fn_82FB3F88(obj, *(int *)(p + 0x28), p + 0x10, p, out) == 1) {
        fn_82FA9208(obj);
        return obj;
      }
      (*(void (**)(unsigned, int))(*(int *)(obj + 4) + 4))(obj + 4, 0);
      fn_82FA9208(obj);
      obj = 0;
    }
  } else {
    obj = 0;
  }
  return obj;
}
