extern int fn_82230300();
extern int fn_8234FB60();
extern int fn_8265CA20();
extern unsigned int lbl_821C2CCC;


unsigned int * fn_824C9350(unsigned int *self,unsigned int flags)

{
  fn_8234FB60(self + 0xc);
  *self = &lbl_821C2CCC;
  fn_82230300(self + 3,1,0);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

