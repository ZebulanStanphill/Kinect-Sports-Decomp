extern int fn_8265CA20();
extern unsigned int lbl_82023970;


unsigned int * fn_828974F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82023970;
  if (self[2] != 0) {
    fn_8265CA20(self[2]);
    self[2] = 0;
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

