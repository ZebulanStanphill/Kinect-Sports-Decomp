extern int fn_82BE56C0();
extern int fn_82BE5998();
extern unsigned int lbl_820EB720;


unsigned int * fn_82BF2F60(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EB720;
  fn_82BE5998();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

