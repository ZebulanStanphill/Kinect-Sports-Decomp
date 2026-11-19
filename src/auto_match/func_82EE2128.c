extern int fn_82E4FE40();
extern int fn_82EE1D08();
extern unsigned int lbl_8215FA98;
extern unsigned int lbl_8215FDD0;


unsigned int * fn_82EE2128(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215FA98;
  self[1] = &lbl_8215FDD0;
  fn_82EE1D08();
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

