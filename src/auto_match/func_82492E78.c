extern int fn_8248F8E8();
extern int fn_8248F9A0();
extern unsigned int lbl_821BEBD8;


unsigned int * fn_82492E78(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEBD8;
  fn_8248F9A0();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

