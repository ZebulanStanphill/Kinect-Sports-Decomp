extern int fn_82623608();
extern int fn_8265CA20();
extern unsigned int lbl_821CA278;


unsigned int * fn_825EEDA0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA278;
  fn_82623608();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

