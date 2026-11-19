extern int fn_82623608();
extern int fn_8265CA20();
extern unsigned int lbl_821CA23C;


unsigned int * fn_825EDCA0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA23C;
  fn_82623608();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

