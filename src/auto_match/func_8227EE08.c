extern int fn_8227DCF8();
extern int fn_8265CA20();
extern unsigned int lbl_821A87C0;


unsigned int * fn_8227EE08(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821A87C0;
  fn_8227DCF8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

