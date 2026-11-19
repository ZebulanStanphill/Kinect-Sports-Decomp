extern int fn_822AEE20();
extern int fn_8265CA20();
extern unsigned int lbl_821AC508;


unsigned int * fn_822AECA0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AC508;
  fn_822AEE20();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

