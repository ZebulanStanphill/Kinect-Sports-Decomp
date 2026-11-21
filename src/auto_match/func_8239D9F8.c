void fn_8239D9F8(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x178);
  iVar2 = iVar1 + -1 + (unsigned int)(iVar1 == 0);
  if ((int)param_2 < 1) goto LAB_8239da48;
  if (4 < (int)param_2) {
    if ((int)param_2 < 6) goto LAB_8239da48;
    if (8 < (int)param_2) {
      if (((10 < (int)param_2) && ((int)param_2 < 0x13)) && (iVar1 == iVar2)) {
        return;
      }
      goto LAB_8239da48;
    }
  }
  if (iVar1 != iVar2) {
    return;
  }
LAB_8239da48:
  if (0x1c < param_2) {
    return;
  }
  fn_8239FF60(*(unsigned int *)(param_1 + 0x2dc));
  return;
}
