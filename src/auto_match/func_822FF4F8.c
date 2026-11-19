extern int fn_822FF888();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC2C;


unsigned int * fn_822FF4F8(unsigned int *self,unsigned int flags)

{
  self[0xc] = &lbl_82197100;
  fn_8289D4C0(self + 0xc);
  *self = &lbl_821AEC2C;
  fn_82359C18(self + 6);
  fn_822FF888(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

