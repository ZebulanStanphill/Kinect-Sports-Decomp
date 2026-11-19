extern int fn_82BE56C0();
extern int fn_82BE5230();
extern unsigned int lbl_820EBE90;


unsigned int * fn_82BFB028(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBE90;
  fn_82BE5230();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

