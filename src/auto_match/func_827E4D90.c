extern int fn_827E4458();
extern int fn_827E4AF0();
extern unsigned int lbl_8201D770;


unsigned int * fn_827E4D90(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201D770;
  fn_827E4458();
  if ((flags & 1) != 0) {
    fn_827E4AF0(self);
  }
  return self;
}

