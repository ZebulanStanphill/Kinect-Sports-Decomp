extern int fn_8265C990();
extern int fn_82C00718();
extern int fn_82C06390();
extern unsigned int lbl_820EBF88;


unsigned int * fn_82C010D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBF88;
  fn_82C00718();
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8028);
  }
  return self;
}

