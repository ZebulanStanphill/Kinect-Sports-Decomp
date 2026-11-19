extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821BA984;


unsigned int * fn_8240D5F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BA984;
  fn_82359C18(self + 10);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

