typedef unsigned char bool;
#define false 0


bool fn_82B208B8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
    return false;
  }
  iVar2 = *(int *)(uVar1 + 8);
  uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    iVar2 = *(int *)(uVar1 + 8) + iVar2;
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
    if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
      return false;
    }
  }
  return iVar2 == 2;
}

