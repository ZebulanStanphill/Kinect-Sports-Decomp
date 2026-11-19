extern int fn_8267BE38();
extern int fn_8267C498();


int fn_826C8F60(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x1c) != 0) {
    fn_8267C498(*(int *)(self + 0x1c));
  }
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

