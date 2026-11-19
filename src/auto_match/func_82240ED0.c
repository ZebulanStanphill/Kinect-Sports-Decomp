extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_821970F0;


unsigned int * fn_82240ED0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821970F0;
  fn_82897D88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

