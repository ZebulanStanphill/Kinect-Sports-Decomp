extern int fn_824872A8();
extern int fn_8265CA20();
extern unsigned int lbl_821BE890;


unsigned int * fn_82486EE8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BE890;
  fn_824872A8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

