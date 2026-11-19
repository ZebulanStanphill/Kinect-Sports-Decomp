extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_82015E08;


unsigned int * fn_827ABE88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82015E08;
  fn_8267C488();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

