extern int fn_82D02880();


void fn_82D02A58(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = fn_82D02880(param_3);
  *(unsigned int *)(param_2 + 0x1c) = uVar4;
  *(unsigned int *)(param_2 + 0x14) = 0;
  *(unsigned int *)(param_2 + 0x10) = 0;
  uVar2 = 1 << (uVar4 & 0x3f);
  piVar6 = (int *)((uVar4 + 6) * 4 + param_1);
  if ((*(unsigned int *)(param_1 + 8) & uVar2) == 0) {
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 8) | uVar2;
    *piVar6 = param_2;
    *(int **)(param_2 + 0x18) = piVar6;
    *(int *)(param_2 + 8) = param_2;
    *(int *)(param_2 + 0xc) = param_2;
  }
  else {
    iVar8 = *piVar6;
    uVar5 = (unsigned __int64)
            (unsigned int)((int)param_3 << (-(unsigned int)(uVar4 != 0x1f) & 0x19U - ((int)uVar4 >> 1) & 0x3f));
    iVar7 = iVar8;
    if (((unsigned __int64)*(unsigned int *)(iVar8 + 4) & 0xfffffffc) != (param_3 & 0xffffffff)) {
      do {
        uVar1 = uVar5 >> 0x1f;
        uVar5 = (uVar5 & 0x7fffffff) << 1;
        iVar3 = ((int)uVar1 + 4) * 4;
        iVar8 = *(int *)(iVar3 + iVar7);
        if (iVar8 == 0) {
          *(int *)(iVar3 + iVar7) = param_2;
          *(int *)(param_2 + 0x18) = iVar7;
          *(int *)(param_2 + 8) = param_2;
          *(int *)(param_2 + 0xc) = param_2;
          return;
        }
        iVar7 = iVar8;
      } while (((unsigned __int64)*(unsigned int *)(iVar8 + 4) & 0xfffffffc) != (param_3 & 0xffffffff));
    }
    iVar7 = *(int *)(iVar8 + 8);
    *(int *)(iVar7 + 0xc) = param_2;
    *(int *)(iVar8 + 8) = param_2;
    *(int *)(param_2 + 8) = iVar7;
    *(int *)(param_2 + 0xc) = iVar8;
    *(unsigned int *)(param_2 + 0x18) = 0;
  }
  return;
}

