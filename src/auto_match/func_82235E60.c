extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_82196B1C;


unsigned int * fn_82235E60(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196B1C;
  fn_82897D88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

