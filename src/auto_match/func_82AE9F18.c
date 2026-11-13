#define true 1


void fn_82AE9F18(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 0x14);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (uVar1 != 0) {
    while( true ) {
      puVar3 = (unsigned int *)(uVar1 + 4);
      for (iVar2 = *(int *)(uVar1 + 4); (iVar2 != 0 && (iVar2 != -0x7cddc358));
          iVar2 = *(int *)(iVar2 + 8)) {
        puVar3 = (unsigned int *)(iVar2 + 8);
      }
      *puVar3 = 0;
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
      if ((uVar1 & 1) != 0) break;
      if (uVar1 == 0) {
        return;
      }
    }
    return;
  }
  return;
}

