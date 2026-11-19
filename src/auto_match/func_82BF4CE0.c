extern int fn_82BE56C0();
extern int fn_82BF4560();
extern unsigned int lbl_820EB9CC;


unsigned int * fn_82BF4CE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EB9CC;
  fn_82BF4560();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

