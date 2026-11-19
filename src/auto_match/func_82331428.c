extern int fn_82330BE8();
extern int fn_8265CA20();
extern unsigned int lbl_821B097C;


unsigned int * fn_82331428(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B097C;
  fn_82330BE8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

