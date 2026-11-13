#define true 1


void fn_82A3B218(int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  puVar1 = (unsigned int *)((unsigned int)*(unsigned short *)(*param_1 + param_2) * 4 + param_1[2]);
  if (*puVar1 != param_2) {
    return;
  }
  iVar3 = param_2 * 4;
  if (*puVar1 <= param_3) {
    *puVar1 = 0;
    *(unsigned int *)(param_1[4] + iVar3) = 0;
    *(unsigned int *)(param_1[3] + iVar3) = 0;
    return;
  }
  uVar4 = *(unsigned int *)(param_1[3] + iVar3);
  if (uVar4 <= param_3) {
    uVar4 = 0;
    *(unsigned int *)(param_1[3] + iVar3) = 0;
  }
  uVar2 = *(unsigned int *)(param_1[4] + iVar3);
  if (uVar2 <= param_3) {
    uVar2 = 0;
    *(unsigned int *)(param_1[4] + iVar3) = 0;
  }
  while( true ) {
    for (; uVar4 <= uVar2; uVar2 = *(unsigned int *)(uVar2 * 4 + param_1[3])) {
      uVar2 = -(unsigned int)(param_3 < uVar2) & uVar2;
      *puVar1 = uVar2;
      if (uVar2 == 0) {
        return;
      }
      puVar1 = (unsigned int *)(uVar2 * 4 + param_1[3]);
    }
    uVar4 = -(unsigned int)(param_3 < uVar4) & uVar4;
    *puVar1 = uVar4;
    if (uVar4 == 0) break;
    puVar1 = (unsigned int *)(uVar4 * 4 + param_1[4]);
    uVar4 = *(unsigned int *)(uVar4 * 4 + param_1[4]);
  }
  return;
}

