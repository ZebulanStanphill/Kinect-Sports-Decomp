extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern int fn_82EE9DD8();
extern unsigned int lbl_8215FF94;


unsigned int * fn_82EE9618(unsigned int *self,unsigned int flags)

{
  fn_82EE9DD8(self + 0x1e);
  *self = &lbl_8215FF94;
  fn_82E50EA0(self + 1);
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

