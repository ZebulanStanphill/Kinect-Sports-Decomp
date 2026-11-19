extern int fn_8265C990();


int fn_828F59D0(int self,unsigned int flags)

{
  if (*(unsigned int *)(self + 0xc) != 0) {
    fn_828F59D0(*(int *)(self + 0xc),1);
  }
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

