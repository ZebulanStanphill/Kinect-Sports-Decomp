extern int fn_8267BE38();
extern int fn_8267C488();


int fn_8270E590(int self,unsigned int flags)

{
  fn_8267BE38(*(unsigned int *)(self + 0x160));
  fn_8267C488(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

