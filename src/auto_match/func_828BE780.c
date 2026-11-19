extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82025900;
extern unsigned int lbl_82025908;


unsigned int * fn_828BE780(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82025908;
  self[0x14] = &lbl_82025900;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

