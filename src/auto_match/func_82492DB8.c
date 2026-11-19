extern int fn_8248F8E8();
extern int fn_8248F9A0();
extern unsigned int lbl_821BEBBC;


unsigned int * fn_82492DB8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEBBC;
  fn_8248F9A0();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

