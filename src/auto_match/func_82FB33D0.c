extern int fn_8265CA20();
extern int fn_82FB2BD0();
extern int fn_82FB6790();
extern int fn_82FB7DB8();
extern unsigned int lbl_8216D5B0;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FB33D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216D5B0;
  self[7] = &lbl_8217C940;
  fn_82FB2BD0();
  fn_82FB7DB8(self + 0x2b);
  fn_82FB6790(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

