extern int fn_82230300();
extern int fn_8265CA20();
extern unsigned int lbl_821BABCC;


unsigned int * fn_8245A560(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BABCC;
  fn_82230300(self + 0x20032,1,0);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

