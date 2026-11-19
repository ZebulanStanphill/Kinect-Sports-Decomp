extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BF9A0;


unsigned int * fn_824A9970(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BF9A0;
  fn_82F53A10();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

