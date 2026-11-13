void fn_8267FC98(int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  
  if ((unsigned int)param_1[1] <= param_2) {
    return;
  }
  if ((unsigned int)param_1[2] <= param_3) {
    return;
  }
  iVar1 = *param_1;
  if (9 < iVar1) {
    return;
  }
  iVar2 = param_1[3] * param_3 + param_1[4];
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      puVar3 = (unsigned char *)(param_2 * 3 + iVar2);
      *puVar3 = (char)param_4;
      puVar3[1] = (char)(param_4 >> 8);
      puVar3[2] = (char)(param_4 >> 0x10);
      return;
    }
    if (iVar1 != 8) {
      if (iVar1 != 9) {
        return;
      }
      *(char *)(iVar2 + param_2) = (char)(param_4 >> 0x18);
      return;
    }
    *(char *)(iVar2 + param_2) = (char)param_4;
    return;
  }
  *(unsigned int *)(param_2 * 4 + iVar2) =
       ((unsigned int)(param_4 >> 0x10) & 0xffff | (unsigned int)((param_4 >> 8 & 0xffffffffffff00) << 8)) >> 8 &
       0xffff | (unsigned int)(((param_4 & 0xffff) << 0x10 | param_4 & 0xffff) << 8) & 0xffff0000;
  return;
}

