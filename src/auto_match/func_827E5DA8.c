extern int fn_827E4458();
extern int fn_827E5988();
extern unsigned int lbl_8201D8E0;


unsigned int * fn_827E5DA8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D8E0;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E5988(self);
  }
  return self;
}

