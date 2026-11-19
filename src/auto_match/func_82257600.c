extern int fn_82233720();
extern int fn_8265CA20();
extern unsigned int lbl_821982C0;


unsigned int * fn_82257600(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821982C0;
  fn_82233720();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

