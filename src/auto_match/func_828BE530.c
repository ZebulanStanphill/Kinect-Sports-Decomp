extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_820255D0;
extern unsigned int lbl_820255D8;


unsigned int * fn_828BE530(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820255D8;
  self[0x14] = &lbl_820255D0;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

