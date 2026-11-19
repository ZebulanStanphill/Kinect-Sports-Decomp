extern int fn_8265CA20();
extern int fn_8304CCA8();
extern unsigned int lbl_8217D4F0;


unsigned int * fn_8303C9F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D4F0;
  fn_8304CCA8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

