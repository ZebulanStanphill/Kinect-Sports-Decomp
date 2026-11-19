extern int fn_8265CA20();
extern int fn_82F51660();
extern unsigned int lbl_821BF554;


unsigned int * fn_824A23A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BF554;
  fn_82F51660();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

