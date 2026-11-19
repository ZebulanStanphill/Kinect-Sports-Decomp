extern int fn_82BE56C0();
extern int fn_82BE8CF8();
extern unsigned int lbl_820EBEA4;


unsigned int * fn_82BFB080(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBEA4;
  fn_82BE8CF8();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

