extern int fn_8265CA20();
extern int fn_826824B0();


int fn_826A2918(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 4) != 0) {
    fn_826824B0(*(int *)(self + 4));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

