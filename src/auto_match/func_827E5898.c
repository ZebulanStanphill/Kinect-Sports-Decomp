extern int fn_827E4458();
extern int fn_827E55D8();
extern unsigned int lbl_8201D870;


unsigned int * fn_827E5898(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D870;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E55D8(self);
  }
  return self;
}

