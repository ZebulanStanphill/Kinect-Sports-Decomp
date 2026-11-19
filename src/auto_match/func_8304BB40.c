extern int fn_8265CA20();
extern int fn_8304B330();
extern int fn_8304D718();
extern unsigned int lbl_8217DB0C;


unsigned int * fn_8304BB40(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DB0C;
  fn_8304B330();
  fn_8304D718(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

