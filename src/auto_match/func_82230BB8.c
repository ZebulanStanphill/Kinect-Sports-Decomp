extern int fn_82231B60();
extern int fn_8265CA20();
extern unsigned int lbl_82196410;


unsigned int * fn_82230BB8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196410;
  fn_82231B60(self + 0x49);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

