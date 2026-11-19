extern int fn_82BE56C0();
extern int fn_82BF4560();
extern unsigned int lbl_820EB988;


unsigned int * fn_82BF4C88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EB988;
  fn_82BF4560();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

