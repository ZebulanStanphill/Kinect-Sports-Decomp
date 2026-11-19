extern int fn_827E4458();
extern int fn_827E5280();
extern unsigned int lbl_8201D800;


unsigned int * fn_827E54E8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D800;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E5280(self);
  }
  return self;
}

