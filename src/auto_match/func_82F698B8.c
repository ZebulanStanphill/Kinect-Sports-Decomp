extern int _getptd();
extern int fn_82F812C0();


void _FindAndUnlinkFrame(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _getptd();
  if ((*(int *)(iVar1 + 0x94) == 0) || (param_1 == 0)) {
    fn_82F812C0();
  }
  iVar1 = _getptd();
  if (param_1 == *(int *)(iVar1 + 0x94)) {
    iVar1 = _getptd();
    *(unsigned int *)(iVar1 + 0x94) = *(unsigned int *)(param_1 + 8);
  }
  else {
    iVar1 = _getptd();
    piVar2 = (int *)(*(int *)(iVar1 + 0x94) + 8);
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar1 = *piVar2;
      if (param_1 == iVar1) {
        *piVar2 = *(int *)(param_1 + 8);
        return;
      }
      piVar2 = (int *)(iVar1 + 8);
    }
    fn_82F812C0();
  }
  return;
}

