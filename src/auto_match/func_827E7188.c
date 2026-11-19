extern int fn_827E4458();
extern int fn_827E6C40();
extern unsigned int lbl_8201DA10;


unsigned int * fn_827E7188(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201DA10;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E6C40(self);
  }
  return self;
}

