extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_82165C64;


unsigned int * fn_82F53C08(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82165C64;
  fn_82359C18(self + 2);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

