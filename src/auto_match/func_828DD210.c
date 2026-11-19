extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82026F50;
extern unsigned int lbl_82026F58;


unsigned int * fn_828DD210(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82026F58;
  self[0x14] = &lbl_82026F50;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

