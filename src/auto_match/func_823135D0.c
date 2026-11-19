extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821AF528;


unsigned int * fn_823135D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AF528;
  fn_82359C18(self + 0x10);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

