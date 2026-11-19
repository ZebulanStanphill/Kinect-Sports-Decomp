extern int fn_822C87C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B0AAC;


unsigned int * fn_82333A50(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B0AAC;
  fn_822C87C8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

