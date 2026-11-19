extern int fn_8265CA20();
extern int fn_82FAA728();
extern unsigned int lbl_8216D7E4;


unsigned int * fn_82FB61C8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216D7E4;
  fn_82FAA728();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

