extern int fn_8265CA20();
extern int fn_8300B4E8();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CEE8;
extern unsigned int lbl_83264EC4;


unsigned int * fn_83032A80(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217CEE8;
  self[7] = &lbl_8217C940;
  if (lbl_83264EC4 == self) {
    lbl_83264EC4 = (unsigned int *)0x0;
  }
  fn_8300B4E8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

