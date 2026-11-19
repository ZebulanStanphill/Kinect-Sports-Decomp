extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_82197010;


unsigned int * fn_8232AA68(unsigned int *self,unsigned int flags)

{
  fn_828B55B0(self + 1);
  *self = &lbl_82197010;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

