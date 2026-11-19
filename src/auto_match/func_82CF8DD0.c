void fn_82CF8DD0(int self,unsigned int param_2)

{
  RtlEnterCriticalSection(self + 4);
  *(unsigned int *)(self + 0x8fc) = param_2;
  RtlLeaveCriticalSection(self + 4);
  return;
}

