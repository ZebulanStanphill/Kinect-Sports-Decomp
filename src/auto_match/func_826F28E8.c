extern int fn_8265CA20();
extern int fn_827B02B0();
extern unsigned int lbl_8200D8E4;


unsigned int * fn_826F28E8(unsigned int *self,unsigned int flags)

{
  fn_827B02B0(self + 4);
  *self = &lbl_8200D8E4;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

