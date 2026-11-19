extern int fn_8265CA20();
extern int fn_83002148();
extern unsigned int lbl_8217BB98;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FF45A8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BB98;
  self[7] = &lbl_8217C940;
  self[0x1f] = 0;
  fn_83002148();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

