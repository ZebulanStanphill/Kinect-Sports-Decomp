extern int fn_82BE56C0();
extern int fn_82BE8CF8();
extern int fn_82BF7370();
extern unsigned int lbl_820EBC08;


unsigned int * fn_82BF7758(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBC08;
  fn_82BF7370();
  fn_82BE8CF8(self);
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

