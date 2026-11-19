extern int fn_8265CA20();
extern int fn_82835898();
extern unsigned int lbl_8201F41C;


unsigned int * fn_828366A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201F41C;
  fn_82835898();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

