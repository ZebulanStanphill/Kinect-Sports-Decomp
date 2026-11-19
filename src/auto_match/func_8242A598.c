extern int fn_822315A0();
extern int fn_823BC2C8();
extern int fn_8265CA20();


int fn_8242A598(int self,int flags)

{
  if (*(unsigned int *)(self + 0x3c) != 0) {
    fn_822315A0(*(int *)(self + 0x3c));
  }
  if (*(unsigned int *)(self + 0x34) != 0) {
    fn_822315A0(*(unsigned int *)(self + 0x34));
  }
  fn_823BC2C8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

