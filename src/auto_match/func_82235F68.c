extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_82196D88;


unsigned int * fn_82235F68(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196D88;
  fn_82897D88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

