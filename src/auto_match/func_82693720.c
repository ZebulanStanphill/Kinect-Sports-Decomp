extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();


int fn_82693720(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 8) != 0) {
    fn_8267C4F0(*(int *)(self + 8));
  }
  fn_8267C488(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

