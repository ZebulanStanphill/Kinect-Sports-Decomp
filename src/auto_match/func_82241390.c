extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_821980D0;


unsigned int * fn_82241390(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821980D0;
  fn_8289D4C0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

