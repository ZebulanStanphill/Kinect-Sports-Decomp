extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821AF318;
extern unsigned int lbl_821B4900;


unsigned int * fn_82394088(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B4900;
  fn_82359C18(self + 4);
  *self = &lbl_821AF318;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

