extern int fn_8262FEC8();
extern int fn_8265CA20();
extern unsigned int lbl_821BEAC4;


unsigned int * fn_8248D680(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEAC4;
  fn_8262FEC8(self[1]);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

