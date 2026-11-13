typedef unsigned char bool;
extern int fn_8267FB90();
extern int fn_82686758();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826874B8(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int *piVar6;
  int iVar7;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0xc;
  RtlEnterCriticalSection(lVar5);
  do {
    puVar3 = (unsigned int *)(param_2 + 4);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,param_2 + 4);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iVar7 = (int)param_2;
  *(int *)(param_1 + 0x10) = iVar7;
  *(unsigned int *)(param_1 + 0xc) = 1;
  piVar6 = (int *)(*(int *)(param_1 + 8) + 0x28);
  iVar2 = fn_82686758(piVar6,param_1 + 0x14,param_3,param_4,in_MSR);
  if (iVar2 < 0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4 = (unsigned int *)((iVar2 + 1) * 0x10 + *piVar6);
  }
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[1] = iVar7;
    *puVar4 = 0;
    *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(param_1 + 8);
    fn_8267FB90(param_1 + 0x20);
  }
  RtlLeaveCriticalSection(lVar5);
  return;
}

