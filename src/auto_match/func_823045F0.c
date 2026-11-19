extern int fn_823019E8();
extern int fn_8265CA20();
extern unsigned int lbl_821AEEF4;


unsigned int * fn_823045F0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AEEF4;
  fn_823019E8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

