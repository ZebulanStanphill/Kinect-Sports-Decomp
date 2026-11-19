extern int fn_82BE56C0();
extern int fn_82BE5998();
extern unsigned int lbl_820EB10C;


unsigned int * fn_82BEE2C8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EB10C;
  fn_82BE5998();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

