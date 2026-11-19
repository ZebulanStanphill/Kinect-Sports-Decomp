extern int fn_82517E78();
extern int fn_8265CA20();
extern unsigned int lbl_82197648;
extern unsigned int lbl_82197688;


unsigned int * fn_82244468(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82197648;
  self[0x1a] = &lbl_82197688;
  if (self[0x20] != 0) {
    *(unsigned int *)(self[0x20] + 0x3f4) = 0;
    self[0x20] = 0;
  }
  fn_82517E78(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

