extern int fn_823D9FC0();
extern int fn_8265CA20();
extern unsigned int lbl_821B6A4C;


unsigned int * fn_823E0E20(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B6A4C;
  fn_823D9FC0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

