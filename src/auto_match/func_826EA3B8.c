extern int fn_8267BE38();
extern int fn_8267C4F0();


int fn_826EA3B8(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x14) != 0) {
    fn_8267C4F0(*(int *)(self + 0x14));
  }
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

