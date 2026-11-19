extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_82196B30;


unsigned int * fn_822329E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196B30;
  fn_8289D4C0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

