extern int fn_8265CA20();
extern int fn_827B0A40();
extern unsigned int lbl_8200C4D4;


unsigned int * fn_8273E810(unsigned int *self,unsigned int flags)

{
  fn_827B0A40(self + 1);
  *self = &lbl_8200C4D4;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

