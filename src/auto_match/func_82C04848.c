extern int fn_8265C990();
extern int fn_82C03CC8();
extern int fn_82C06390();
extern int fn_82C0BF88();
extern unsigned int lbl_820EC6C8;


unsigned int * fn_82C04848(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC6C8;
  fn_82C03CC8();
  fn_82C0BF88(self + 0x35);
  fn_82C0BF88(self + 0x23);
  fn_82C0BF88(self + 0x11);
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8031);
  }
  return self;
}

