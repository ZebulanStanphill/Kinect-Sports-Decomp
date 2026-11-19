extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern unsigned int lbl_820256E0;
extern unsigned int lbl_820256E8;


unsigned int * fn_828BE5E8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820256E8;
  self[0x14] = &lbl_820256E0;
  fn_828B55B0(self + 0x21);
  fn_828BDE70(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

