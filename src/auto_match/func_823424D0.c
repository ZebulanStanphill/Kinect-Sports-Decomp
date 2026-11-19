extern int fn_82349F18();
extern int fn_8265CA20();
extern unsigned int lbl_821B1880;


unsigned int * fn_823424D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B1880;
  fn_82349F18();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

