extern int fn_827E4458();
extern int fn_827E7750();
extern unsigned int lbl_8201DAF0;


unsigned int * fn_827E7AC0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201DAF0;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E7750(self);
  }
  return self;
}

