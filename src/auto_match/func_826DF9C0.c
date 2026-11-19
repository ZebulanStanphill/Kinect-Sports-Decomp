extern int fn_8265CA20();
extern int fn_82687270(unsigned int);


int fn_826DF9C0(int self,unsigned int flags)

{
  if ((*(int *)(self + 4) == 0) && (*(unsigned int *)(self + 8) != 0)) {
    fn_82687270(*(unsigned int *)(self + 8));
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

