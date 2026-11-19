extern int fn_82521D28();
extern int fn_8265CA20();
extern unsigned int lbl_821C2258;


unsigned int * fn_825082F0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C2258;
  fn_82521D28();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

