extern int fn_8248F8E8();
extern int fn_82491E88();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;


unsigned int * fn_824927B0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEBB8;
  fn_82491E88(self + 0x14);
  *self = &lbl_821BEBB0;
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

