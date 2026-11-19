extern int fn_8265CA20();
extern int fn_8303ECB0();
extern unsigned int lbl_8217D230;


unsigned int * fn_83038228(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D230;
  fn_8303ECB0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

