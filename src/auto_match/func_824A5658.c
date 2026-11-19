extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BF758;


unsigned int * fn_824A5658(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BF758;
  fn_82F53A10();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

