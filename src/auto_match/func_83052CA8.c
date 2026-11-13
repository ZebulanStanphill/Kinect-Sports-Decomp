extern int fn_830525B0();
extern int fn_83055CF0();
extern int fn_83055EE8();


unsigned __int64 fn_83052CA8(int param_1,int *param_2,unsigned int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + -0x40;
  *param_2 = 0;
  *param_3 = 0;
  RtlEnterCriticalSection(iVar2);
  iVar3 = param_1 + -0x78;
  iVar1 = fn_830525B0(iVar3,param_3);
  *param_2 = iVar1;
  RtlLeaveCriticalSection(iVar2);
  if (((param_4 != '\0') && (*param_2 == 0)) && ((*(unsigned char *)(param_1 + 0x31) & 0x40) == 0)) {
    if ((*(unsigned char *)(param_1 + 0x31) & 0x80) == 0) {
      return 2;
    }
    RtlEnterCriticalSection(iVar2);
    iVar1 = fn_830525B0(iVar3,param_3);
    *param_2 = iVar1;
    while (((iVar1 == 0 && ((*(unsigned char *)(param_1 + 0x31) & 0x40) == 0)) &&
           ((*(unsigned int *)(param_1 + -4) & 0x10000000) == 0))) {
      fn_83055CF0(iVar3);
      RtlLeaveCriticalSection(iVar2);
      fn_83055EE8(*(unsigned int *)(param_1 + -0x18),iVar3);
      RtlEnterCriticalSection(iVar2);
      iVar1 = fn_830525B0(iVar3,param_3);
      *param_2 = iVar1;
    }
    RtlLeaveCriticalSection(iVar2);
  }
  if ((*(unsigned char *)(param_1 + 0x31) & 0x40) != 0) {
    return 2;
  }
  if (*param_2 != 0) {
    if (((*(unsigned int *)(param_1 + -4) & 0x10000000) != 0) &&
       (((__int64)*(int *)(param_1 + -0xc) * (__int64)*(int *)(param_1 + -0x58) & 0xffffffffU) +
        *(__int64 *)(param_1 + -0x60) <= *(unsigned __int64 *)(param_1 + 8))) {
      return 0x11;
    }
    return 0x2d;
  }
  if (((*(unsigned int *)(param_1 + -4) & 0x10000000) != 0) &&
     (((__int64)*(int *)(param_1 + -0xc) * (__int64)*(int *)(param_1 + -0x58) & 0xffffffffU) +
      *(__int64 *)(param_1 + -0x60) <= *(unsigned __int64 *)(param_1 + 8))) {
    return 0x11;
  }
  return 0x2e;
}

