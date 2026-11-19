extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern unsigned int lbl_8215FF94;


unsigned int * fn_82EE9508(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215FF94;
  fn_82E50EA0(self + 1);
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

