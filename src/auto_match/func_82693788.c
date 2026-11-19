extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_82005FD0;


unsigned int * fn_82693788(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82005FD0;
  fn_8267C488();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

