extern int fn_8265CA20();
extern int fn_828991A0();
extern unsigned int lbl_82023998;


unsigned int * fn_82899D00(unsigned int *self,unsigned int flags)

{
  fn_828991A0(self + 2);
  *self = &lbl_82023998;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

