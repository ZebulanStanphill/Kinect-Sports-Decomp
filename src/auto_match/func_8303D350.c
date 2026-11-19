extern int fn_8265CA20();
extern int fn_8304CCA8();
extern unsigned int lbl_8217D590;


unsigned int * fn_8303D350(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D590;
  fn_8304CCA8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

