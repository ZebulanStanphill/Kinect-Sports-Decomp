extern int fn_823410C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B0CA0;


unsigned int * fn_82336958(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B0CA0;
  fn_823410C8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

