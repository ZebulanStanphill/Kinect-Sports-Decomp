extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_8200D398;


unsigned int * fn_826E4D18(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200D398;
  fn_8267C488();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

