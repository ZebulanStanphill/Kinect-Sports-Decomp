typedef struct Obj_82ACC4F0 { int f0; char set[4]; } Obj_82ACC4F0;
extern unsigned int fn_82ACACA8(void *set, unsigned int first, unsigned int last);
extern void fn_82ACADA8(void *set, unsigned int first, unsigned int last, unsigned int mask);

static __forceinline void Release_82ACC4F0(void *set, unsigned int v)
{
  unsigned int first = (v >> 4) * 4;
  fn_82ACADA8(set, first, first + 3, v & 0xf);
}

void fn_82ACC4F0(Obj_82ACC4F0 *o, unsigned int v)
{
  unsigned int first = (v >> 4) * 4;
  unsigned int m = fn_82ACACA8(o->set, first, first + 3) & v & 0xf;
  if (m != 0) {
    Release_82ACC4F0(o->set, (m & 0xf) | (v & ~0xfu));
  }
}
