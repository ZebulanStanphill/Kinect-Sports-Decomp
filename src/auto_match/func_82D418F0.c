extern int fn_82D441E8();


unsigned int fn_82D418F0(int self)

{
  unsigned int uVar1;
  
  if (*(int *)(self + 0xd0) < 0) {
    uVar1 = fn_82D441E8();
    *(unsigned int *)(self + 0xd0) = uVar1;
  }
  return *(unsigned int *)(self + 0xd0);
}

