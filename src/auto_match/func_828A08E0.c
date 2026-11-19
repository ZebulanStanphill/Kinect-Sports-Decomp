extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82023FE8;
extern unsigned int lbl_82023FF0;


unsigned int * fn_828A08E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82023FF0;
  self[0x14] = &lbl_82023FE8;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

