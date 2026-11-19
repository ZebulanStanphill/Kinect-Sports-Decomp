extern int fn_8265CA20();
extern int fn_828974A8();
extern unsigned int lbl_82197070;


unsigned int * fn_82240F28(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82197070;
  fn_828974A8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

