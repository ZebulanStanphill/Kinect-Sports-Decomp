extern int fn_8265CA20();
extern int fn_82864898();
extern unsigned int lbl_821BC738;


unsigned int * fn_8246C5F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BC738;
  fn_82864898(self + 1);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

