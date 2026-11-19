extern int fn_8265C990();
extern int fn_82C06390();
extern unsigned int lbl_820EC9C0;


unsigned int * fn_82C06618(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC9C0;
  fn_82C06390();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8003);
  }
  return self;
}

