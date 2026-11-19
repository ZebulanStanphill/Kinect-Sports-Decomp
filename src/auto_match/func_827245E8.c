extern int fn_8265CA20();
extern int fn_8267C498();


int fn_827245E8(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x28) != 0) {
    fn_8267C498(*(int *)(self + 0x28));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

