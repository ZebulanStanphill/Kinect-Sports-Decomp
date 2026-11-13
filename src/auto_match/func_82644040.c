extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82643E10();


unsigned __int64 fn_82644040(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int aiStack_30;
  
  if ((*(unsigned char *)(param_1 + 0x2abd) & 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x35a0);
    aiStack_30 = (int)((param_2 & 0x3fffffff) << 2);
    if (iVar1 == 0) {
      uVar3 = fn_82643E10(param_1,1,&aiStack_30,param_3);
    }
    else if (*(int *)(iVar1 + 0x98) == 0) {
      iVar4 = KeGetCurrentProcessType();
      puVar2 = __imp__VdGlobalDevice;
      if (iVar4 == 2) {
        puVar2 = __imp__VdGlobalXamDevice;
      }
      uVar6 = *puVar2;
      RtlEnterCriticalSection((unsigned __int64)uVar6 + 0x3b50);
      uVar3 = (**(int (***)())(iVar1 + 0xac))(*(unsigned int *)(iVar1 + 0xa4),1,&aiStack_30,param_3);
      RtlLeaveCriticalSection((unsigned __int64)uVar6 + 0x3b50);
    }
    else {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3b18);
      if (uVar5 == 0) {
        uVar5 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x9c) & 0xfffffffc) +
                (unsigned __int64)*(unsigned int *)(iVar1 + 0x98);
      }
      uVar3 = uVar5 + (param_2 & 0x3fffffff) * -4 & ~(param_3 - 1U);
      if ((uVar3 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x30) + 0xa4)) {
        uVar3 = 0;
      }
      else {
        *(int *)(param_1 + 0x3b18) = (int)uVar3;
        iVar1 = (int)uVar5 - (int)uVar3 >> 2;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar1 * -4;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1 * -4;
      }
    }
    uVar6 = *(int *)(param_1 + 0x3b28) + aiStack_30;
    *(unsigned int *)(param_1 + 0x3b28) = uVar6;
    if ((*(unsigned int *)(param_1 + 0x3b2c) < uVar6) && (*(int *)(param_1 + 0x3460) == 0)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x30) + 0xa0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x3b20) != *(int *)(param_1 + 0x3b0c)) {
        *(unsigned int *)(param_1 + 0x3b18) = *(unsigned int *)(param_1 + 0x3b10);
      }
    }
    if ((uVar3 & 0xffffffff) == 0) {
      *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) | 0x20;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

