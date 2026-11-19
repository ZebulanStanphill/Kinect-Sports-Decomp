extern int fn_82517E78();
extern int fn_8265CA20();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B96A8;


unsigned int * fn_8243C568(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B3080;
  self[0x1a] = &lbl_821B96A8;
  if (self[0x20] != 0) {
    *(unsigned int *)(self[0x20] + 0x84) = 0;
    self[0x20] = 0;
  }
  fn_82517E78(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

