extern int fn_82F68CC0();
extern int (*lbl_8329F14C)();


void fn_82C75268(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xef8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  iVar5 = 0;
  lVar8 = *(unsigned int *)(param_1 + 0xec4) + uVar2;
  lVar6 = *(unsigned int *)(param_1 + 0xec8) + uVar2;
  lVar9 = *(unsigned int *)(param_1 + 0xefc) + uVar2;
  lVar7 = *(unsigned int *)(param_1 + 0xf00) + uVar2;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      fn_82F68CC0(lVar9,lVar8,*(unsigned int *)(param_1 + 0xd0));
      uVar1 = *(unsigned int *)(param_1 + 0xd0);
      lVar9 = (unsigned __int64)uVar1 + lVar9;
      lVar8 = (unsigned __int64)uVar1 + lVar8;
      fn_82F68CC0(lVar7,lVar6,uVar1);
      lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar7;
      lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar6;
      fn_82F68CC0(lVar4,lVar3,*(unsigned int *)(param_1 + 0xcc));
      iVar5 = iVar5 + 1;
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar4;
      lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar3;
    } while (iVar5 < *(int *)(param_1 + 200));
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xef8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  uVar1 = *(unsigned int *)(param_1 + 0x88);
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xefc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xf00) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        lVar7 = lVar4;
        lVar8 = lVar6;
        do {
          (*lbl_8329F14C)(param_1,lVar7,lVar8,(lVar3 - lVar6) + lVar8,uVar2,0,param_2,0);
          uVar2 = uVar2 + 1;
          lVar7 = lVar7 + 0x10;
          lVar8 = lVar8 + 4;
        } while ((uVar2 & 0xffffffff) < (unsigned __int64)uVar1);
      }
      param_2 = param_2 + 1;
      lVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) & 0xfffffff) * 0x10;
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe4) + lVar4;
      lVar6 = lVar7 + lVar6;
      lVar3 = lVar7 + lVar3;
    } while ((param_2 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  return;
}

