extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82897D88();


int fn_82245F20(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x5c) != 0) {
    fn_822315A0(*(int *)(self + 0x5c));
  }
  fn_82897D88(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

