extern int fn_82EFFE90();
extern unsigned int lbl_82005730;
extern float lbl_82160740;
extern unsigned int lbl_82160790;


void fn_82F00008(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x7898) != 0) {
    *(unsigned int *)(param_1 + 0x1d94) = *(unsigned int *)(param_1 + 0x78d0);
    fn_82EFFE90();
    return;
  }
  dVar3 = -((double)(__int64)*(int *)(param_1 + 0x1ee0) * lbl_82160740 - lbl_82160790);
  iVar1 = (int)dVar3;
  *(int *)(param_1 + 0x1d94) = iVar1;
  if (iVar1 < 9) {
    uVar2 = 1;
    if (lbl_82005730 < dVar3 - (double)(__int64)iVar1) goto LAB_82f000a8;
  }
  uVar2 = 0;
LAB_82f000a8:
  *(unsigned int *)(param_1 + 0x590) = uVar2;
  fn_82EFFE90();
  return;
}

