extern int fn_8265CA20();
extern int fn_83021E70();
extern unsigned int lbl_8217D040;


unsigned int * fn_82FEEF48(unsigned int *self,unsigned int flags)

{
  fn_83021E70(self + 3);
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

