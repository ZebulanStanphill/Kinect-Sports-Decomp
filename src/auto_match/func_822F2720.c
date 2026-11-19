extern int fn_822F2470();
extern int fn_8265CA20();
extern unsigned int lbl_821AE5C8;


unsigned int * fn_822F2720(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AE5C8;
  fn_822F2470();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

