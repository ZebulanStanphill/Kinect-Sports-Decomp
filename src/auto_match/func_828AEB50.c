extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82024B80;
extern unsigned int lbl_82024B88;


unsigned int * fn_828AEB50(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024B88;
  self[0x14] = &lbl_82024B80;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

