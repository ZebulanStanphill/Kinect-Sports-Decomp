extern int fn_822B4CE0();
extern int fn_8265CA20();
extern unsigned int lbl_821AC980;


unsigned int * fn_822B4B60(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AC980;
  fn_822B4CE0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

