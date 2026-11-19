extern int fn_82279AF0();
extern int fn_8265CA20();
extern unsigned int lbl_821A89BC;


unsigned int * fn_8227F8F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821A89BC;
  fn_82279AF0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

