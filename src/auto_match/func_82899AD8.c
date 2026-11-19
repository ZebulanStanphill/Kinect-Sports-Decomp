extern int fn_82240D08();
extern int fn_8265CA20();
extern unsigned int lbl_82023A4C;


unsigned int * fn_82899AD8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82023A4C;
  fn_82240D08(self + 3);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

