typedef struct Obj_82ACBBF8 { void *ctx; char set[4]; } Obj_82ACBBF8;
extern unsigned int fn_82ACACA8(void *set, unsigned int first, unsigned int last);
extern void fn_82ACAD38(void *set, unsigned int first, unsigned int last, unsigned int mask);
__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

void fn_82ACBBF8(Obj_82ACBBF8 *o, unsigned int v)
{
  void *set;
  unsigned int reg, mask, first, last;
  reg = v >> 4;
  set = o->set;
  first = reg * 4;
  last = first + 3;
  mask = v & 0xf;
  if (fn_82ACACA8(set, first, last) & mask)
    fn_82AA66A8(o->ctx, 0xdc6, reg);
  fn_82ACAD38(set, first, last, mask);
}
