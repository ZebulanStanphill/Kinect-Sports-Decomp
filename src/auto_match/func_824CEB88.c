extern int fn_824CC9E8();
extern int fn_8265CA20();
extern unsigned int lbl_821C0C34;


unsigned int * fn_824CEB88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821C0C34;
  fn_824CC9E8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

