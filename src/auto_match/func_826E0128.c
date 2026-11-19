extern int fn_8267BE38();
extern int fn_82760C38();
extern unsigned int lbl_8200BD80;


unsigned int * fn_826E0128(unsigned int *self,unsigned int flags)

{
  fn_82760C38(self + 4);
  *self = &lbl_8200BD80;
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

