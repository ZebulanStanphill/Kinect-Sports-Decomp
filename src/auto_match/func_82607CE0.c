extern int fn_8251E400();
extern int fn_82605028();
extern int fn_8265CA20();
extern unsigned int lbl_821CA924;


unsigned int * fn_82607CE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821CA924;
  fn_8251E400(self + 0x98);
  fn_8251E400(self + 0x9d);
  fn_8251E400(self + 0xa2);
  fn_8251E400(self + 0xa7);
  fn_8251E400(self + 0xac);
  fn_82605028(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

