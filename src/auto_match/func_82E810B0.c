extern int fn_82E4FE40();


int fn_82E810B0(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 8) != 0) {
    fn_82E4FE40(*(int *)(self + 8));
  }
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

