extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_82687270();


int fn_826E0D90(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0xc) != 0) {
    fn_82687270(*(int *)(self + 0xc));
  }
  fn_8267C488(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

