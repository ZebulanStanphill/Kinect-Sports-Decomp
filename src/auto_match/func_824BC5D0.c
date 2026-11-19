extern int fn_8265CA20();
extern int fn_82864898();
extern unsigned int lbl_821C0618;


unsigned int * fn_824BC5D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C0618;
  fn_82864898(self + 4);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

