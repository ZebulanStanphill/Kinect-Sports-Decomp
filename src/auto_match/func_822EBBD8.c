extern float fRam831cd13c;
extern float fRam831cd140;
extern int iRam831cd148;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822EBBD8(int param_1)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  if ((iVar1 == 2) || (iVar1 == 1)) {
LAB_822ebcc4:
    uVar2 = 1;
  }
  else {
    if ((iRam831cd148 == 0) ||
       (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c),
       iVar3 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x34))(), iVar3 != iVar1)
       ) {
      uVar4 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x3c))();
      if (fRam831cd13c < (float)uVar4) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < fRam831cd140)
        goto LAB_822ebcc4;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

