extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_821B9610;


unsigned int * fn_8243CBA8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B9610;
  fn_8289D4C0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

