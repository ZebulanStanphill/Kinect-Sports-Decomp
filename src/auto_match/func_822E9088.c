extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C87C8();
extern int fn_8265CA20();


int fn_822E9088(int self,unsigned int flags)

{
  fn_82230300(self + 0xf4,1,0);
  fn_82230300(self + 0xd8,1,0);
  if (*(unsigned int *)(self + 0xd4) != 0) {
    fn_822315A0(*(unsigned int *)(self + 0xd4));
  }
  if (*(unsigned int *)(self + 0xcc) != 0) {
    fn_822315A0(*(unsigned int *)(self + 0xcc));
  }
  if (*(unsigned int *)(self + 0xc4) != 0) {
    fn_822315A0(*(unsigned int *)(self + 0xc4));
  }
  fn_822C87C8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

