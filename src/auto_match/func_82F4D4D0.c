extern int fn_8265CA20();
extern int fn_82F53B68();
extern unsigned int lbl_821655CC;


unsigned int * fn_82F4D4D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821655CC;
  fn_82F53B68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

