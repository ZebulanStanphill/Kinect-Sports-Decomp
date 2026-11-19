extern int fn_8265C990();
extern int fn_82C003F0();
extern int fn_82C01D28();
extern int fn_82C06390();
extern int fn_82C06590();
extern int fn_82C09768();
extern unsigned int lbl_820EC508;


unsigned int * fn_82C027F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC508;
  fn_82C01D28();
  fn_82C09768(self + 0x35);
  fn_82C003F0(self + 0x22);
  fn_82C06590(self + 0xe);
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c801d);
  }
  return self;
}

