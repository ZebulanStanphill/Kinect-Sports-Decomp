__int64 fn_82EDC068(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + 0xe);
  if ((((iVar1 != 0x56555949) && (iVar1 != 0x30323449)) && (iVar1 != 0x32315659)) &&
     ((iVar1 != 0x3231564e && (iVar1 != 0x3131564e)))) {
    uVar4 = uVar4 * param_2;
    uVar4 = ((int)uVar4 >> 3) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 7) != 0) + 3;
    uVar3 = ((__int64)(int)(((int)uVar4 >> 2) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 3) != 0)) *
             (__int64)param_3 & 0x3fffffffU) << 2;
    uVar2 = (unsigned __int64)((int)uVar3 >> 0x1f);
    return (uVar3 ^ uVar2) - uVar2;
  }
  uVar4 = uVar4 * param_2 * param_3;
  uVar3 = (__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0);
  uVar2 = (unsigned __int64)((int)uVar3 >> 0x1f);
  return (uVar3 ^ uVar2) - uVar2;
}

