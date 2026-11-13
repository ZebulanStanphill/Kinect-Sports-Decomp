extern int fn_82BA02A8();
extern unsigned int lbl_821AAD20;


double fn_82BE5D50(int param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (iVar1 = *(int *)(param_1 + 0x20), 3 < *(int *)(param_1 + 0x24) - iVar1)) {
    fVar2 = *(float *)(iVar1 + *(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar1 + 4;
    dVar3 = (double)fn_82BA02A8((double)fVar2);
    return dVar3;
  }
  return (double)lbl_821AAD20;
}

