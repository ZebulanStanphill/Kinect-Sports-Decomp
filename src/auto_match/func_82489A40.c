extern int fn_82522ED8();
extern int fn_8265CA20();
extern unsigned int lbl_821BE9C0;


unsigned int * fn_82489A40(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BE9C0;
  fn_82522ED8(self[3]);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

