extern int fn_8265C990();
extern int fn_82C00548();
extern int fn_82C02EA0();
extern int fn_82C06390();
extern int fn_82C06590();
extern int fn_82C0B9A8();
extern unsigned int lbl_820EC640;


unsigned int * fn_82C03B30(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC640;
  fn_82C02EA0();
  fn_82C0B9A8(self + 0x34);
  fn_82C00548(self + 0x1f);
  fn_82C06590(self + 0xe);
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8017);
  }
  return self;
}

