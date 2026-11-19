extern int fn_827E4458();
extern int fn_827E7278();
extern unsigned int lbl_8201DA80;


unsigned int * fn_827E7660(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201DA80;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E7278(self);
  }
  return self;
}

