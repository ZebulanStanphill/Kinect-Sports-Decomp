extern int fn_822360C8();
extern int fn_8265CA20();
extern int fn_828AC488();
extern int fn_828BDE70();
extern unsigned int lbl_820270D4;
extern unsigned int lbl_820270D8;


unsigned int * fn_828DEB00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820270D8;
  self[0x14] = &lbl_820270D4;
  fn_828AC488(self + 0x3c);
  fn_822360C8(self + 0x38);
  fn_822360C8(self + 0x34);
  fn_828BDE70(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

