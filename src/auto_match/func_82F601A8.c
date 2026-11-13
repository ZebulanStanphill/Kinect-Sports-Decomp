extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F60B90();
extern int fn_82F60C10();
extern int fn_82F61538();


__int64 fn_82F601A8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned int param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  
  if (((int)param_4 == 0) || ((param_3 & 0xffffffff) == 0)) {
    return -0x7ddbfbfd;
  }
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    lVar3 = (param_4 & 0x3fffffff) << 2;
    *(unsigned int *)(param_1 + 0x14) = 0x64004000;
    uVar1 = fn_8265C940(lVar3);
    *(unsigned int *)(param_1 + 0x1c) = uVar1;
    iVar2 = fn_8265C940(lVar3,*(unsigned int *)(param_1 + 0x14));
    *(int *)(param_1 + 0x20) = iVar2;
    if ((*(int *)(param_1 + 0x1c) == 0) || (iVar2 == 0)) {
      lVar3 = -0x7ddbfbfe;
    }
    else {
      *(unsigned int *)(param_1 + 0x18) = param_5;
      *(int *)(param_1 + 8) = (int)param_4;
      *(unsigned int *)(param_1 + 0xc) = 0;
      lVar3 = fn_82F60B90(param_1 + 0x24,param_2,param_3);
      if (-1 < lVar3) {
        *(int *)(param_1 + 0x10) = (int)param_2;
        if ((param_5 & 1) == 0) {
          param_6 = -(unsigned __int64)((param_5 & 2) != 0) & param_6;
        }
        lVar3 = fn_82F61538(param_1 + 0x90,param_4,param_6);
        if (-1 < lVar3) {
          *(unsigned char *)(param_1 + 4) = 1;
          goto LAB_82f602e8;
        }
        fn_82F60C10(param_1 + 0x24);
      }
      fn_8265C990(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x14));
      fn_8265C990(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x14));
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 0xc) = 0;
      *(unsigned int *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    lVar3 = -0x7ddbfbfc;
  }
LAB_82f602e8:
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return lVar3;
}

