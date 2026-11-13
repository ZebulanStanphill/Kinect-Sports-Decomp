unsigned __int64 fn_830503D0(int param_1,unsigned __int64 *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       char param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (((param_5 == '\0') || (uVar1 = *(unsigned int *)(param_1 + 0x74), (uVar1 & 0x8000000) != 0)) ||
     ((*(unsigned int *)(param_1 + 0x9c) & 0x1e000000) == 0x8000000)) {
    param_4 = 0;
  }
  else {
    uVar3 = (__int64)*(int *)(param_1 + 0x6c) * (__int64)*(int *)(param_1 + 0x20);
    uVar2 = *param_2;
    if (((param_4 & 0xffffffff) + uVar2 < (uVar3 & 0xffffffff) + *(unsigned __int64 *)(param_1 + 0x18)) ||
       ((uVar1 & 0x20000000) != 0)) {
      *(unsigned int *)(param_1 + 0x74) = uVar1 & 0xefffffff;
    }
    else {
      *(unsigned int *)(param_1 + 0x74) = uVar1 | 0x10000000;
      param_4 = ((*(unsigned __int64 *)(param_1 + 0x18) & 0xffffffff) - (uVar2 & 0xffffffff)) + uVar3;
    }
  }
  *(int *)(param_1 + 0x94) = (int)param_4 + *(int *)(param_1 + 0x94);
  *(unsigned __int64 *)(param_1 + 0x80) = (param_4 & 0xffffffff) + *(__int64 *)(param_1 + 0x80);
  return param_4;
}

