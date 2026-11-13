extern int fn_82FA5358();
extern int fn_83055E98();


unsigned __int64 fn_83051330(int param_1,unsigned __int64 *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       char param_5)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (((param_5 == '\0') || ((*(unsigned int *)(param_1 + 0x74) & 0x8000000) != 0)) ||
     ((*(unsigned char *)(param_1 + 0xa9) & 0x40) != 0)) {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60) + 0x10;
    RtlEnterCriticalSection(lVar4);
    fn_82FA5358(*(unsigned int *)(*(int *)(param_1 + 0x60) + 0x8c),param_3);
    fn_83055E98(*(unsigned int *)(param_1 + 0x60));
    RtlLeaveCriticalSection(lVar4);
    param_4 = 0;
  }
  else {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60) + 0x10;
    RtlEnterCriticalSection(lVar4);
    iVar1 = *(int *)(param_1 + 0x60);
    puVar2 = *(unsigned __int64 **)(iVar1 + 0x78);
    if (puVar2 != (unsigned __int64 *)0x0) {
      if (*(int *)(puVar2 + 2) == 0) {
        *(unsigned int *)(iVar1 + 0x78) = 0;
      }
      else {
        *(unsigned int *)(iVar1 + 0x78) = *(unsigned int *)(puVar2 + 2);
      }
    }
    RtlLeaveCriticalSection(lVar4);
    uVar3 = *param_2;
    *(int *)(puVar2 + 1) = (int)param_3;
    *puVar2 = uVar3;
    uVar3 = (__int64)*(int *)(param_1 + 0x6c) * (__int64)*(int *)(param_1 + 0x20);
    if ((uVar3 & 0xffffffff) + *(unsigned __int64 *)(param_1 + 0x18) < (param_4 & 0xffffffff) + *param_2) {
      param_4 = ((*(unsigned __int64 *)(param_1 + 0x18) & 0xffffffff) - (*param_2 & 0xffffffff)) + uVar3;
    }
    *(int *)((int)puVar2 + 0xc) = (int)param_4;
    *(unsigned int *)(puVar2 + 2) = 0;
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(unsigned __int64 **)(param_1 + 0x9c) = puVar2;
      *(unsigned __int64 **)(param_1 + 0xa0) = puVar2;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    else {
      *(unsigned __int64 **)(*(int *)(param_1 + 0xa0) + 0x10) = puVar2;
      *(unsigned __int64 **)(param_1 + 0xa0) = puVar2;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
  }
  return param_4;
}

