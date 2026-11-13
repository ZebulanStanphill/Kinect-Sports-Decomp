/* WARNING: Removing unreachable block (ram,0x824967c8) */
/* WARNING: Removing unreachable block (ram,0x824967d4) */

void fn_824967B0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    for (iVar2 = iVar1; iVar2 != param_1[1]; iVar2 = iVar2 + 0x1c) {
    }
    param_1[1] = iVar1;
    return;
  }
  return;
}

