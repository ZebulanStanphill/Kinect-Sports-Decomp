extern int fn_8265CA20();
extern int fn_82835898();
extern unsigned int lbl_8201F414;


unsigned int * fn_82836550(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201F414;
  fn_82835898();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

