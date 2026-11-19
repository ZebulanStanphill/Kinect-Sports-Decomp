extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_82196B0C;


unsigned int * fn_82235E08(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196B0C;
  fn_82897D88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

