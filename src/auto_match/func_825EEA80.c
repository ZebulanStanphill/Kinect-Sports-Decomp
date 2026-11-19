extern int fn_82622B68();
extern int fn_8265CA20();
extern unsigned int lbl_821CA26C;


unsigned int * fn_825EEA80(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA26C;
  fn_82622B68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

