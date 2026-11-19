extern int fn_8265CA20();


int fn_822D7A48(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x18) != 0) {
    fn_8265CA20(*(int *)(self + 0x18));
  }
  *(unsigned int *)(self + 0x18) = 0;
  *(unsigned int *)(self + 0x1c) = 0;
  *(unsigned int *)(self + 0x20) = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

