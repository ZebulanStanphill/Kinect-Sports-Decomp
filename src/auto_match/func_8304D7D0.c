extern int fn_8265CA20();
extern int fn_8304E950();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217DC18;


unsigned int * fn_8304D7D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DC18;
  fn_8304E950(self + 4);
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

