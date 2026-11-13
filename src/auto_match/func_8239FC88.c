extern int fn_82250A18();
extern int fn_82359558();
extern int fn_82397F88();
extern int fn_82399CB8();
extern int fn_825604A0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D2B38;
extern unsigned int lbl_831D2B80;
extern unsigned int lbl_832975B0;


void fn_8239FC88(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (param_2 == *(unsigned int *)(param_1 + 0x28c)) {
    return;
  }
  if (param_2 == 0) {
    param_3 = -(unsigned int)(*(unsigned int *)(param_1 + 0x28c) != 4) & param_3;
    goto LAB_8239fdf8;
  }
  if (param_2 < 3) {
    iVar2 = fn_82399CB8(*(unsigned int *)(param_1 + 0x240));
    iVar3 = fn_82397F88(*(unsigned int *)(param_1 + 0x240));
    if (iVar3 == 0) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82359558(*(unsigned int *)(param_1 + 0x240),*(unsigned int *)(param_1 + 0x10));
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x240) + 0x30) + iVar2 * -8 + 8);
      if (*(int *)(iVar2 + 0x22c) != 0) {
        fn_825604A0(iVar2 + 0x20);
        *(unsigned int *)(iVar2 + 0x22c) = 0;
      }
    }
    goto LAB_8239fdf8;
  }
  if (param_2 != 3) goto LAB_8239fdf8;
  iVar2 = *(int *)(param_1 + 0x298);
  if (iVar2 == 0) {
    puVar1 = &lbl_831D2B38;
LAB_8239fcec:
    *(unsigned char **)(param_1 + 0x280) = puVar1;
  }
  else if (iVar2 == 1) {
    puVar1 = &lbl_831D2B80;
    goto LAB_8239fcec;
  }
  *(int *)(param_1 + 0x298) = 1 - iVar2;
LAB_8239fdf8:
  *(unsigned int *)(param_1 + 0x28c) = param_2;
  *(unsigned int *)(param_1 + 0x290) = ltcg_pool_0_0f;
  uVar4 = *(unsigned int *)(param_1 + 0x288);
  if ((int)*(unsigned int *)(param_1 + 0x288) < (int)param_3) {
    uVar4 = param_3;
  }
  *(unsigned int *)(param_1 + 0x288) = uVar4;
  return;
}

