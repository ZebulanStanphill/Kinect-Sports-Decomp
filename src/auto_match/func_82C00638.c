extern int fn_8265C990();
extern int fn_82C06590();
extern unsigned int lbl_820EBF28;


unsigned int * fn_82C00638(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBF28;
  fn_82C06590();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8004);
  }
  return self;
}

