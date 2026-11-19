extern int fn_82A4F4E0();
extern int fn_82A5C298();
extern unsigned int lbl_8208DEC4;


unsigned int * fn_82A5B6E8(unsigned int *self,unsigned int flags)

{
  *self = 0;
  self[1] = &lbl_8208DEC4;
  fn_82A5C298(self + 1);
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

