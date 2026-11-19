extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_82023C3C;


unsigned int * fn_8288C158(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82023C3C;
  fn_828B55B0(self + 2);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

