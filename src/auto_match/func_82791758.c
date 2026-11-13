extern int fn_826BCD88();
extern int fn_82791560();


void fn_82791758(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) == 2) && (*(unsigned int *)(param_1 + 8) < *(unsigned int *)(param_1 + 0x10))) {
    while ((uVar1 = *(unsigned int *)(param_1 + 0x14), uVar1 != 0x3d &&
           (((uVar1 != 0x3e && (uVar1 != 0x3c)) && (uVar1 != 0x2f))))) {
      iVar2 = fn_826BCD88(0xffffffff820094c8,uVar1 & 0xffff);
      if (iVar2 != 0) {
        return;
      }
      fn_82791560((unsigned int *)(param_1 + 8));
      if (*(unsigned int *)(param_1 + 0x10) <= *(unsigned int *)(param_1 + 8)) {
        return;
      }
    }
  }
  return;
}

