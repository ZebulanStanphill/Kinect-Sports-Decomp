extern int fn_82BE56C0();
extern int fn_82BF7A60();
extern unsigned int lbl_820EBD24;


unsigned int * fn_82BF8248(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBD24;
  fn_82BF7A60();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

