extern int fn_8302B6E0();


void fn_8302B580(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  RtlEnterCriticalSection(0xffffffff83264ea8);
  iVar2 = fn_8302B6E0(param_1,param_2);
  if (iVar2 == 0) {
    *(int *)(param_3 + 4) = (int)param_2;
    uVar1 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
    uVar1 = ((param_2 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
    iVar2 = (int)((param_2 - ((uVar1 & 0x7ffffff) * 0x20 - uVar1) & 0xffffffff) << 2);
    *(unsigned int *)(param_3 + 8) = *(unsigned int *)(iVar2 + param_1);
    *(int *)(iVar2 + param_1) = param_3;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  RtlLeaveCriticalSection(0xffffffff83264ea8);
  return;
}

