extern int fn_8265CA20();
extern int fn_8304D718();
extern unsigned int lbl_8217DA20;


unsigned int * fn_830484B8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DA20;
  fn_8304D718();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

