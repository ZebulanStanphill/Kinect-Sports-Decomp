extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82024070;
extern unsigned int lbl_82024078;


unsigned int * fn_828A0F68(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024078;
  self[0x14] = &lbl_82024070;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

