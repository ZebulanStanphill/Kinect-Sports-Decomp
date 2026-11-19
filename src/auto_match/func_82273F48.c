extern int fn_82279AF0();
extern int fn_822848B8();
extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821A7FEC;


unsigned int * fn_82273F48(unsigned int *self,int flags)

{
  *self = &lbl_821A7FEC;
  if (self[0x58] != 0) {
    fn_822848B8(self[0x58]);
    self[0x58] = 0;
  }
  fn_82359C18(self + 0x52);
  fn_82279AF0(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

