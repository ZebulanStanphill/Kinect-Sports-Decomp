extern int fn_8265CA20();
extern int fn_828AC488();
extern int XNetQosRelease();
extern unsigned int lbl_82026788;


unsigned int * fn_828D0008(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82026788;
  if (self[0x21] != 0) {
    XNetQosRelease(self[0x21]);
    self[0x21] = 0;
  }
  fn_828AC488(self + 0x18);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

