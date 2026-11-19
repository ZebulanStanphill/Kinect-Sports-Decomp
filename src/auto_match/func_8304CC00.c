extern int fn_8265CA20();
extern int fn_8304C640();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217DB90;


unsigned int * fn_8304CC00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DB90;
  fn_8304C640();
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

