extern int fn_8229D7E0();
extern int fn_8265CA20();
extern unsigned int lbl_821AC1A0;


unsigned int * fn_822A37A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AC1A0;
  fn_8229D7E0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

