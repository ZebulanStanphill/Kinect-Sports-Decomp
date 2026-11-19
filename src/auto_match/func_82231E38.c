extern int fn_8265CA20();
extern int fn_828A8678();
extern unsigned int lbl_821968A8;


unsigned int * fn_82231E38(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821968A8;
  fn_828A8678();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

