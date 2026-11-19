extern int fn_82BE56C0();
extern int fn_82BE5998();
extern unsigned int lbl_820EAF64;


unsigned int * fn_82BEBAC0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EAF64;
  fn_82BE5998();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

