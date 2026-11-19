extern int fn_82406338();
extern int fn_8265CA20();
extern unsigned int lbl_821B7DE8;


unsigned int * fn_82406660(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B7DE8;
  fn_82406338();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

