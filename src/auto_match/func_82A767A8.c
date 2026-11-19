extern int fn_82A4F4E0();
extern int fn_82A819E0();


unsigned int * fn_82A767A8(unsigned int *self,unsigned int flags)

{
  *(unsigned int *)(self[0x21] + 4) = 0;
  *self = 0;
  fn_82A819E0();
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

