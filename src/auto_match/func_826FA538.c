extern int fn_8267BE38();
extern int fn_8267C4F0();


int fn_826FA538(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x10) != 0) {
    fn_8267C4F0(*(int *)(self + 0x10));
  }
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

