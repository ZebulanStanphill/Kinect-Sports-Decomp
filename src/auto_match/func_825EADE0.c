extern int fn_82622B68();
extern int fn_8265CA20();
extern unsigned int lbl_821CA1DC;


unsigned int * fn_825EADE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA1DC;
  fn_82622B68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

