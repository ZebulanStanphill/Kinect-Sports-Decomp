extern int fn_8265CA20();
extern int fn_83049CF0();
extern int fn_8304D718();
extern unsigned int lbl_8217DAD4;


unsigned int * fn_8304B228(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DAD4;
  fn_83049CF0();
  fn_8304D718(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

