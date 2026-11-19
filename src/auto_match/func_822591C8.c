extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_821983E8;


unsigned int * fn_822591C8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821983E8;
  fn_8289D4C0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

