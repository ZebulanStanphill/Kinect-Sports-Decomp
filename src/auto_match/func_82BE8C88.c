extern int fn_82BE56C0();
extern int fn_82BF4138();
extern unsigned int lbl_820E9B40;


unsigned int * fn_82BE8C88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820E9B40;
  fn_82BF4138();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

