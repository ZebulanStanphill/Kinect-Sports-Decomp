extern int fn_8265C990();
extern int fn_82BFFFD0();
extern int fn_82C013D0();
extern unsigned int lbl_820EC498;


unsigned int * fn_82C01B50(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC498;
  fn_82C013D0();
  fn_82BFFFD0(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c802a);
  }
  return self;
}

