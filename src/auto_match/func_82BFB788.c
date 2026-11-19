extern int fn_82BE56C0();
extern int fn_82BFB150();
extern unsigned int lbl_820EBED4;


unsigned int * fn_82BFB788(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBED4;
  fn_82BFB150();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

