extern int fn_82BE56C0();
extern int fn_82BF4560();
extern unsigned int lbl_820EBA10;


unsigned int * fn_82BF4D38(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBA10;
  fn_82BF4560();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

