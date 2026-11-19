extern int fn_82308FC0();
extern int fn_8265CA20();
extern unsigned int lbl_821AF9D4;


unsigned int * fn_8231F8A8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AF9D4;
  fn_82308FC0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

