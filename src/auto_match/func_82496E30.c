extern int fn_8248F8E8();
extern int fn_82497250();
extern unsigned int lbl_821BEF18;


unsigned int * fn_82496E30(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEF18;
  fn_82497250();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

