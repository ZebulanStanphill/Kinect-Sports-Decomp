extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_8202363C;


unsigned int * fn_8288B5D8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8202363C;
  fn_828B55B0(self + 1);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

