extern int fn_82B7BD28();
extern int memcpy();


unsigned int * fn_82BC2520(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(param_2 + 0x5ac),0x3c4);
  *puVar1 = *(unsigned int *)(param_2 + 0x5ac);
  memcpy(puVar1 + 1,param_1,0x3c0);
  puVar1[0x39] = *(unsigned int *)(param_2 + 0x560);
  *(int *)(param_2 + 0x560) = *(int *)(param_2 + 0x560) + 1;
  return puVar1 + 1;
}

