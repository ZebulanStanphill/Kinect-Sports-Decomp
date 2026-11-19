extern void fn_822315A0(void *);
extern int fn_823BC2C8();
extern int fn_8265CA20();


int fn_8235A7D8(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x44) != 0) {
    fn_822315A0(*(void **)(self + 0x44));
  }
  if (*(unsigned int *)(self + 0x3c) != 0) {
    fn_822315A0(*(void **)(self + 0x3c));
  }
  if (*(unsigned int *)(self + 0x34) != 0) {
    fn_822315A0(*(void **)(self + 0x34));
  }
  fn_823BC2C8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

