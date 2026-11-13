typedef struct Value_82794C90 {
  int f0[6];
  unsigned int obj;
  int f1c[3];
  unsigned short f28;
  unsigned short flags;
  int f2c;
} Value_82794C90;

extern unsigned int fn_8278B458(unsigned int p);
extern void fn_8278CD58(Value_82794C90 *v, unsigned int p, int flag);
extern void fn_8267C498(unsigned int p);
extern void fn_8267C4F0(unsigned int p);
extern int fn_82794B88(int self);
extern unsigned int fn_8278E7B0(int ctx, void *p);
extern void fn_826FDF58(Value_82794C90 *v);

void fn_82794C90(int self, unsigned int p)
{
  unsigned int r;
  if (fn_8278B458(p) != 0) {
    Value_82794C90 v;
    fn_8278CD58(&v, p, 0);
    if (v.obj != 0) {
      fn_8267C498(v.obj);
    }
    v.obj = 0;
    v.flags |= 0x200;
    r = fn_8278E7B0(fn_82794B88(self), &v);
    if (*(unsigned int *)(self + 0x1c) != 0) {
      fn_8267C4F0(*(unsigned int *)(self + 0x1c));
    }
    *(unsigned int *)(self + 0x1c) = r;
    fn_826FDF58(&v);
  } else {
    r = fn_8278E7B0(fn_82794B88(self), (void *)p);
    if (*(unsigned int *)(self + 0x1c) != 0) {
      fn_8267C4F0(*(unsigned int *)(self + 0x1c));
    }
    *(unsigned int *)(self + 0x1c) = r;
  }
}
