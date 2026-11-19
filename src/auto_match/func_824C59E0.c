extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821C09A4;


unsigned int * fn_824C59E0(unsigned int *self,unsigned int flags)

{
  fn_82359C18(self + 2);
  *self = &lbl_821C09A4;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

