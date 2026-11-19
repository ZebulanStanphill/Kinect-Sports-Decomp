extern int fn_82622B68();
extern int fn_8265CA20();
extern unsigned int lbl_821CA260;


unsigned int * fn_825EE5E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA260;
  fn_82622B68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

