extern int fn_8265CA20();
extern int fn_8302BA30();
extern unsigned int lbl_8217D4C4;


unsigned int * fn_8303C530(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D4C4;
  fn_8302BA30();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

