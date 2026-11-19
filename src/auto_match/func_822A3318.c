extern int fn_8227B1D0();
extern int fn_8265CA20();
extern unsigned int lbl_821AC014;


unsigned int * fn_822A3318(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AC014;
  fn_8227B1D0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

