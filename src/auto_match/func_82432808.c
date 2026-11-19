extern int fn_8265CA20();
extern unsigned int lbl_821B90FC;


unsigned int * fn_82432808(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B90FC;
  fn_8265CA20(self[1]);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

