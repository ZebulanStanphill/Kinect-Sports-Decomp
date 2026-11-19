extern int fn_822A05B0();
extern int fn_8265CA20();
extern unsigned int lbl_821AB238;


unsigned int * fn_8229D3C0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AB238;
  fn_822A05B0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

