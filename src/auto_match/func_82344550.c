extern int fn_82250A18();
extern int fn_824CD030();
extern int fn_8288B760();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


double fn_82344550(int param_1,int param_2,float *param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar3 = 0;
  uVar5 = 0;
  iVar4 = **(int **)(param_1 + 0xc);
  if (param_2 == 0) {
    uVar5 = uVar3;
    if (((*param_3 != ltcg_pool_0_0f) &&
        (iVar4 = *(int *)(param_1 + 0x14),
        *(unsigned int *)(iVar4 + 4) < (unsigned int)(*(int *)(iVar4 + 0x50) - *(int *)(iVar4 + 0x4c) >> 2))) &&
       (*param_3 <
        *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 4) * 4 +
                  *(int *)(*(int *)(param_1 + 0x14) + 0x4c)))) {
      uVar5 = 1;
    }
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    if ((*(char *)(iVar4 + 4) != '\0') && (uVar5 != 0)) {
      *param_3 = *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 4) * 4 +
                           *(int *)(*(int *)(param_1 + 0x14) + 0x4c));
    }
  }
  else {
    if (*(int *)(iVar4 + 0x168) == 0) {
      uVar3 = *(unsigned int *)(iVar4 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 == 0) {
      iVar4 = *(int *)(iVar4 + 0x168);
      if (iVar4 != 0) {
        if (((*(int *)(iVar4 + 0xbc) == 0) ||
            ((*(int *)(iVar4 + 0xc4) - *(int *)(iVar4 + 0xc0) & 0xfffffff8U) == 0)) ||
           (**(float **)(*(int *)(iVar4 + 0xbc) + 0x1a0) < *(float *)(*(int *)(iVar4 + 0xc4) + -8)))
        {
          iVar4 = 0;
        }
        else {
          iVar1 = *(int *)(iVar4 + 0xc0);
          iVar2 = *(int *)(iVar4 + 0xc4);
          *param_4 = *(unsigned int *)(*(int *)(iVar4 + 0xc4) + -4);
          if (iVar1 != iVar2) {
            *(int *)(iVar4 + 0xc4) = iVar2 + -8;
          }
          iVar4 = 1;
        }
        uVar5 = (unsigned int)LZCOUNT(iVar4 + -1) >> 5;
      }
    }
    else {
      iVar4 = fn_824CD030(param_2);
      if (iVar4 != 0) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0xfc) + 0xc) + 0x3c);
        if (*(char *)(iVar4 + 0x1d) == '\0') {
          uVar5 = (unsigned int)*(unsigned char *)(iVar4 + 0x1c);
        }
        else {
          uVar5 = 1;
          *(unsigned char *)(iVar4 + 0x1d) = 0;
        }
      }
    }
  }
  return (double)(__int64)(int)uVar5;
}

