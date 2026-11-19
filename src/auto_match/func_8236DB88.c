extern int fn_8236DD08();
extern int fn_8265CA20();
extern unsigned int lbl_821B30C8;


unsigned int * fn_8236DB88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B30C8;
  fn_8236DD08();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

