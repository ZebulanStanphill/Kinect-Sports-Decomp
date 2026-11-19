extern int fn_8265CA20();
extern int fn_82FF8528();
extern int fn_8300ECA0();
extern unsigned int lbl_8217BCF8;
extern unsigned int lbl_8217D040;


unsigned int * fn_82FFE388(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BCF8;
  fn_8300ECA0(self + 0x129);
  fn_82FF8528(self + 1);
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

