extern float lbl_82015610;


void fn_82E94CC8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar3 = (int)((((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3
                 ) + (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  *(int *)(param_1 + 0x1f08) = iVar3;
  if (iVar3 == 0) {
    *(unsigned int *)(param_1 + 0x1f58) = 0;
    *(unsigned int *)(param_1 + 0x7778) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xaf0);
  if ((((iVar1 != 1) || (iVar3 <= *(int *)(param_1 + 0x1f10))) ||
      (*(int *)(param_1 + 0x2a4) < *(int *)(param_1 + 0x7710))) ||
     ((double)(__int64)iVar3 <= *(double *)(param_1 + 0x7708))) {
    if (iVar1 != 0) goto LAB_82e94da8;
    uVar2 = (unsigned int)(*(double *)(param_1 + 0x76e8) - *(double *)(param_1 + 0x76f8) <=
                  *(double *)(param_1 + 0x76f8) * lbl_82015610);
    *(unsigned int *)(param_1 + 0x7734) = uVar2;
    if ((uVar2 != 0) && (*(int *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x7710))) {
      iVar3 = *(int *)(param_1 + 0x777c) + -1;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      *(int *)(param_1 + 0x777c) = iVar3;
      goto LAB_82e94da8;
    }
    if ((*(int *)(param_1 + 0x1f08) <= *(int *)(param_1 + 0x1f44)) &&
       ((uVar2 != 0 || (*(int *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x7710)))))
    goto LAB_82e94da8;
  }
  iVar3 = *(int *)(param_1 + 0x7778) + 1;
  *(int *)(param_1 + 0x7778) = iVar3;
  if (iVar3 <= *(int *)(param_1 + 0x777c)) {
    *(unsigned int *)(param_1 + 0x1f58) = 1;
    return;
  }
LAB_82e94da8:
  *(unsigned int *)(param_1 + 0x7778) = 0;
  *(unsigned int *)(param_1 + 0x1f58) = 0;
  *(int *)(param_1 + 0x890) = (*(int *)(param_1 + 0x1f08) >> 3) + *(int *)(param_1 + 0x890);
  *(int *)(param_1 + 0x1f10) = *(int *)(param_1 + 0x1f10) - *(int *)(param_1 + 0x1f08);
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x7734) == 0)) &&
     (*(int *)(param_1 + 0x7710) <= *(int *)(param_1 + 0x2a0))) {
    *(int *)(param_1 + 0x777c) = *(int *)(param_1 + 0x777c) + 2;
  }
  return;
}

