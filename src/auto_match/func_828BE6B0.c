extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_820257F0;
extern unsigned int lbl_820257F8;


unsigned int * fn_828BE6B0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820257F8;
  self[0x14] = &lbl_820257F0;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

