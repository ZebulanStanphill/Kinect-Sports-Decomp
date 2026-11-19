extern int fn_822D02B8();
extern int fn_8265CA20();
extern unsigned int lbl_821ADDD8;


unsigned int * fn_822E2EA8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821ADDD8;
  fn_822D02B8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

