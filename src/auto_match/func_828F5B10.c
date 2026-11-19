extern int fn_8265C990();


int fn_828F5B10(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0x28) != 0) {
    fn_828F5B10(*(int *)(self + 0x28),1);
  }
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

