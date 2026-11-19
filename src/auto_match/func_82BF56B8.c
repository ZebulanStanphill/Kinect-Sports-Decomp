extern int fn_82BE56C0();
extern int fn_82BE5998();
extern unsigned int lbl_820EBA68;


unsigned int * fn_82BF56B8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBA68;
  fn_82BE5998();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

