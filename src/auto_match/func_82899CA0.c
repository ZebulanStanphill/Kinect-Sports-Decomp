extern int fn_82240D08();
extern int fn_8265CA20();
extern unsigned int lbl_82023998;


unsigned int * fn_82899CA0(unsigned int *self,unsigned int flags)

{
  fn_82240D08(self + 3);
  *self = &lbl_82023998;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

