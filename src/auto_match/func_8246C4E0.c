extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


__int64 fn_8246C4E0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if ((*(int *)(param_1 + 0x50) == 0) || ((int)*(unsigned int *)(param_1 + 0x54) < 0)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar3 = 0;
    iVar1 = 0;
    uVar2 = (__int64)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28) - 1;
    if (uVar2 != 0) {
      do {
        if (((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x2c)) &&
           ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x30))) {
          if (iVar1 == (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                            (float)(__int64)
                                   ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28 +
                                   -3))) {
            *(int *)(param_1 + 0x54) = (int)uVar3;
            uVar2 = uVar3 * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
            goto LAB_8246c5d8;
          }
          iVar1 = iVar1 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff));
    }
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54) * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  }
LAB_8246c5d8:
  return uVar2 + 8;
}

