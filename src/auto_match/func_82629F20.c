extern int fn_82526AF8();
extern int fn_825D04D0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


unsigned __int64 fn_82629F20(int *param_1,int param_2)

{
  unsigned short *puVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned __int64 uVar6;
  int iVar5;
  
  iVar5 = *param_1;
  iVar4 = *(int *)(iVar5 + 4);
  if (iVar4 == 0x57) {
    lVar3 = fn_82526AF8((unsigned __int64)lbl_83265A38 - 1,(unsigned __int64)lbl_83265A3C + 4,iVar5 + 8);
    uVar6 = -(unsigned __int64)(lVar3 != -1) & lVar3 + 1U;
    if ((uVar6 != 0) &&
       (uVar2 = (unsigned int)uVar6,
       *(unsigned int *)(iVar5 + 0x48) ==
       (unsigned int)(((unsigned int)*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + (uVar2 >> 3)) &
              1 << (uVar2 & 7)) != 0))) {
      return 3;
    }
  }
  else if (iVar4 != 0x58) {
    if (iVar4 == 0x59) {
      return 3;
    }
    if (iVar4 == 0x6d) {
      puVar1 = *(unsigned short **)(param_2 + 2000);
      if (*(unsigned int *)(iVar5 + 8) <
          (unsigned int)((*(int *)(puVar1 + 4) - *(int *)(puVar1 + 2)) / (int)(unsigned int)*puVar1)) {
        return 3;
      }
    }
    else {
      if (iVar4 != 0x89) {
        return 4;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 <= *(float *)(iVar5 + 8)) {
        return 3;
      }
      iVar5 = *param_1;
    }
  }
  iVar4 = fn_825D04D0(iVar5);
  *param_1 = iVar4;
  return 3;
}

