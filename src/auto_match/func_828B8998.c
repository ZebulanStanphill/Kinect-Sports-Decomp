extern int fn_8265CA20();
extern int fn_828B82D0();
extern unsigned int lbl_820252F8;


unsigned int * fn_828B8998(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820252F8;
  fn_828B82D0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

