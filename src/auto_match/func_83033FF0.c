extern int fn_8265CA20();
extern int fn_8303EA68();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217D070;


unsigned int * fn_83033FF0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D070;
  self[7] = &lbl_8217C940;
  fn_8303EA68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

