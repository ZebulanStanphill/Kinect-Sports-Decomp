extern int fn_82489928();
extern int fn_8265CA20();
extern unsigned int lbl_821BE9C4;


unsigned int * fn_82489F20(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BE9C4;
  fn_82489928(self[4],self[3]);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

