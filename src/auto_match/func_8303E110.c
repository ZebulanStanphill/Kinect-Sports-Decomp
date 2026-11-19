extern int fn_8265CA20();
extern int fn_8303ECB0();
extern unsigned int lbl_8217D6B0;


unsigned int * fn_8303E110(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D6B0;
  fn_8303ECB0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

