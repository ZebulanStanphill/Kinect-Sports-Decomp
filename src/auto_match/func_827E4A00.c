extern int fn_827E4458();
extern int fn_827E4810();
extern unsigned int lbl_8201D670;


unsigned int * fn_827E4A00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D670;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E4810(self);
  }
  return self;
}

