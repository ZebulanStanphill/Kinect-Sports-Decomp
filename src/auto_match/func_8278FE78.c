extern int fn_8265CA20();
extern int fn_8267C4F0();


int fn_8278FE78(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 8) != 0) {
    fn_8267C4F0(*(int *)(self + 8));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

