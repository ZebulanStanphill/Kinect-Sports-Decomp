extern int fn_822C71C8();
extern int fn_8265CA20();
extern unsigned int lbl_821AEEC0;


unsigned int * fn_82304438(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AEEC0;
  fn_822C71C8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

