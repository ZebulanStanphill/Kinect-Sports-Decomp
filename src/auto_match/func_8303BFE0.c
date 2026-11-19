extern int fn_8265CA20();
extern int fn_8303F130();
extern unsigned int lbl_8217D440;


unsigned int * fn_8303BFE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D440;
  fn_8303F130();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

