extern int fn_824C41E8();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


unsigned int * fn_824C4120(unsigned int *self,unsigned int flags)

{
  fn_824C41E8(self + 4);
  *self = &lbl_821C097C;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

