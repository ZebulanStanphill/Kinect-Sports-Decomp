extern unsigned int lbl_830530C0;


__int64 fn_830540C0(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,char param_5,
                      unsigned int *param_6,unsigned char *param_7)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar3 = param_4 + param_3;
  uVar4 = ((__int64)*(int *)(param_1 + 0x6c) * (__int64)*(int *)(param_1 + 0x20) & 0xffffffffU) +
          *(__int64 *)(param_1 + 0x18);
  if ((uVar4 < uVar3) && (param_5 == '\0')) {
    *param_6 = (int)uVar4 - (int)param_3;
    *param_7 = 1;
    uVar3 = uVar4;
  }
  else {
    *param_6 = param_4;
    *param_7 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  RtlEnterCriticalSection(iVar1 + 0x10);
  puVar2 = *(unsigned __int64 **)(iVar1 + 0x98);
  if (puVar2 != (unsigned __int64 *)0x0) {
    if (*(int *)((int)puVar2 + 0xc) == 0) {
      *(unsigned int *)(iVar1 + 0x98) = 0;
    }
    else {
      *(unsigned int *)(iVar1 + 0x98) = *(unsigned int *)((int)puVar2 + 0xc);
    }
  }
  RtlLeaveCriticalSection(iVar1 + 0x10);
  *puVar2 = uVar3;
  *(int *)(puVar2 + 1) = param_1;
  *(unsigned int *)(puVar2 + 4) = param_2;
  *(unsigned int *)(puVar2 + 3) = param_4;
  *(unsigned __int64 **)(puVar2 + 5) = puVar2;
  puVar2[2] = param_3;
  *(unsigned int *)((int)puVar2 + 0x1c) = 0;
  *(unsigned char **)((int)puVar2 + 0x24) = &lbl_830530C0;
  *(unsigned int *)((int)puVar2 + 0x2c) = 0;
  *(unsigned int *)((int)puVar2 + 0xc) = 0;
  *(unsigned int *)(puVar2 + 6) = *(unsigned int *)(puVar2 + 6) & 0xfffffff;
  if (*(int *)(param_1 + 0xb4) == 0) {
    *(unsigned __int64 **)(param_1 + 0xb0) = puVar2;
  }
  else {
    *(unsigned __int64 **)(*(int *)(param_1 + 0xb4) + 0xc) = puVar2;
  }
  *(unsigned __int64 **)(param_1 + 0xb4) = puVar2;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  return (__int64)(int)puVar2 + 0x10;
}

