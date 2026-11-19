extern int fn_8265CA20();
extern int fn_82761DE8();


int fn_827742D0(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x10) != 0) {
    fn_82761DE8(*(int *)(self + 0x10));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

