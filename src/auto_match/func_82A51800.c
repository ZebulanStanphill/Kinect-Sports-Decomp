extern int fn_82A411B8();
extern int fn_82A4F4E0();


unsigned int * fn_82A51800(unsigned int *self,unsigned int flags)

{
  *self = 0;
  fn_82A411B8(self + 0x14);
  fn_82A411B8(self + 2);
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

