extern int fn_824248C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B85D0;
extern unsigned int lbl_821B8B38;


unsigned int * fn_82428140(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B8B38;
  fn_824248C8(self + 3);
  *self = &lbl_821B85D0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

