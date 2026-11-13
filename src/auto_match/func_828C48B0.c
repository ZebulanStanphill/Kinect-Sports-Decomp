extern unsigned int iStack00000014;
extern unsigned int uStack_20;


void fn_828C48B0(unsigned __int64 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iStack00000014;
  unsigned int uStack_20;
  
  uVar6 = param_2 - 1;
  iStack00000014 = (int)param_1;
  uStack_20 = (int)((unsigned __int64)param_1 >> 0x20);
  iVar2 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (iVar1 = iVar2, param_3 < param_2) {
    uVar3 = iStack00000014 + iVar1;
    uVar6 = uVar3 >> 2;
    if (*(unsigned int *)(uStack_20 + 8) <= uVar6) {
      uVar6 = uVar6 - *(unsigned int *)(uStack_20 + 8);
    }
    if (*(unsigned int *)(*param_4 + 8) <=
        *(unsigned int *)(*(int *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (uVar3 & 3) * 4) + 8))
    break;
    uVar6 = uVar3 >> 2;
    if (*(unsigned int *)(uStack_20 + 8) <= uVar6) {
      uVar6 = uVar6 - *(unsigned int *)(uStack_20 + 8);
    }
    uVar4 = (unsigned int)(iStack00000014 + param_2) >> 2;
    if (*(unsigned int *)(uStack_20 + 8) <= uVar4) {
      uVar4 = uVar4 - *(unsigned int *)(uStack_20 + 8);
    }
    uVar5 = iVar1 - 1;
    *(unsigned int *)
     (*(int *)(*(int *)(uStack_20 + 4) + uVar4 * 4) + (iStack00000014 + param_2 & 3U) * 4) =
         *(unsigned int *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (uVar3 & 3) * 4);
    iVar2 = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    param_2 = iVar1;
  }
  uVar6 = (unsigned int)(iStack00000014 + param_2) >> 2;
  if (*(unsigned int *)(uStack_20 + 8) <= uVar6) {
    uVar6 = uVar6 - *(unsigned int *)(uStack_20 + 8);
  }
  *(int *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (iStack00000014 + param_2 & 3U) * 4) =
       *param_4;
  return;
}

