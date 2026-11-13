extern int fn_82BD3690();


void fn_82BCFA58(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  iVar1 = (int)param_2;
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x14);
  if (0 < (int)*(unsigned int *)(iVar1 + 0x14)) {
    lVar4 = (uVar5 + 7 & 0x3fffffff) * 4 + param_2;
    do {
      uVar3 = fn_82BD3690(param_2,uVar5);
      if (-1 < (int)uVar3) {
        iVar2 = ((uVar3 >> 5) + 2) * 4;
        if ((*(unsigned int *)(iVar2 + param_3) >> (uVar3 & 0x1f) & 1) == 0) {
          *(unsigned int *)(iVar2 + *(int *)(param_1 + 0xb0)) =
               1 << (uVar3 & 0x1f) | *(unsigned int *)(iVar2 + *(int *)(param_1 + 0xb0));
          (**(int (***)())(*(int *)*(unsigned int *)lVar4 + 4))((int *)*(unsigned int *)lVar4,1);
        }
      }
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -4;
    } while (0 < (__int64)uVar5);
  }
  if (((0 < *(int *)(iVar1 + 0x10)) && ((*(unsigned int *)(iVar1 + 0xe4) >> 1 & 1) == 0)) &&
     (uVar3 = fn_82BD3690(param_2,0), -1 < (int)uVar3)) {
    iVar1 = ((uVar3 >> 5) + 2) * 4;
    *(unsigned int *)(iVar1 + param_3) = 1 << (uVar3 & 0x1f) | *(unsigned int *)(iVar1 + param_3);
  }
  return;
}

