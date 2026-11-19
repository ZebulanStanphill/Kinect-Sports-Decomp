extern int fn_8265C990();
extern int fn_82C053E8();
extern int fn_82C06390();
extern unsigned int lbl_820EC938;


unsigned int * fn_82C062D8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC938;
  fn_82C053E8();
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c800a);
  }
  return self;
}

