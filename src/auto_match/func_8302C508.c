extern int fn_8265CA20();
extern int fn_82FF3F80();
extern int fn_83008658();
extern unsigned int lbl_8217C7E8;
extern unsigned int lbl_8217C940;


unsigned int * fn_8302C508(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C7E8;
  self[7] = &lbl_8217C940;
  fn_83008658(self + 0x22);
  fn_82FF3F80(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

