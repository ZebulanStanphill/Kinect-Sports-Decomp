extern int fn_8248F8E8();
extern int fn_82494190();
extern unsigned int lbl_821BEDCC;


unsigned int * fn_82493F98(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEDCC;
  fn_82494190();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

