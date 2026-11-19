extern int fn_8231FF60();
extern int fn_8265CA20();
extern unsigned int lbl_821AFAB0;


unsigned int * fn_823206F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AFAB0;
  fn_8231FF60();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

