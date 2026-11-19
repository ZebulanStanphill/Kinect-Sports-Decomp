extern int fn_827E4458();
extern int fn_827E4E80();
extern unsigned int lbl_8201D794;


unsigned int * fn_827E5190(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D794;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E4E80(self);
  }
  return self;
}

