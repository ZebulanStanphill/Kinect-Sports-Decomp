extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_820240FC;
extern unsigned int lbl_82024100;


unsigned int * fn_828A0FD0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024100;
  self[0x14] = &lbl_820240FC;
  fn_828BDE70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

