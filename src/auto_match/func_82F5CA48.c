extern int fn_82F52970();
extern int fn_82F52978();
extern unsigned int lbl_82167C1C;


unsigned int * fn_82F5CA48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82167C1C;
  fn_82F52978();
  if ((flags & 1) != 0) {
    fn_82F52970(self);
  }
  return self;
}

