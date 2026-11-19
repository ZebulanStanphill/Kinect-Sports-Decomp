extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_82014CD0;


unsigned int * fn_82768390(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82014CD0;
  fn_8267C488();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

