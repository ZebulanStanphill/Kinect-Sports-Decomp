extern int fn_8265C990();


int fn_828F5B70(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 4) != 0) {
    fn_828F5B70(*(int *)(self + 4),1);
  }
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

