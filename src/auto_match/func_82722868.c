extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8278B290();
extern unsigned int lbl_82010C6C;


unsigned int * fn_82722868(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82010C6C;
  fn_8278B290();
  fn_8267C488(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

