extern int fn_8248FEA8();
extern int fn_82490210();
extern int fn_82F63CA0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8248FCC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  int *piVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_40;


  lVar6 = param_2 - param_1;
  uVar4 = (int)lVar6 >> 2;
  uVar8 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar9 = (int)param_3;
      param_2 = uVar8;
      if (iVar9 < 1) break;
      fn_8248FEA8(&stack_pair_40.first,param_1,uVar8);
      param_3 = (__int64)(iVar9 >> 1) + (unsigned __int64)(iVar9 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar10 = (unsigned __int64)stack_pair_40.second;
      param_2 = (unsigned __int64)stack_pair_40.first;
      if ((int)(stack_pair_40.first - (int)param_1 & 0xfffffffc) < (int)((int)uVar8 - stack_pair_40.second & 0xfffffffc))
      {
        fn_8248FCC8(param_1,param_2,param_3);
        param_2 = uVar8;
        param_1 = uVar10;
      }
      else {
        fn_8248FCC8(uVar10,uVar8,param_3);
      }
      lVar6 = param_2 - param_1;
      uVar4 = (int)lVar6 >> 2;
      uVar8 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      uVar8 = (__int64)((int)uVar4 >> 1) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < (__int64)uVar8) {
        lVar7 = (uVar8 & 0x3fffffff) * 4 + param_1;
        do {
          lVar7 = lVar7 + -4;
          stack_pair_40.first = *(unsigned int *)lVar7;
          uVar8 = uVar8 - 1;
          fn_82490210(param_1,uVar8,uVar4,&stack_pair_40.first);
        } while (0 < (int)uVar8);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      puVar2 = (unsigned int *)param_1;
      do {
        iVar9 = (int)lVar6;
        stack_pair_40.first = *(unsigned int *)((int)puVar2 + iVar9 + -4);
        lVar6 = lVar6 + -4;
        *(unsigned int *)((int)puVar2 + iVar9 + -4) = *puVar2;
        fn_82490210(param_1,0,(int)(unsigned int)lVar6 >> 2,&stack_pair_40.first);
      } while (4 < (int)((unsigned int)lVar6 & 0xfffffffc));
      return;
    }
  }
  if (((1 < (int)uVar4) && ((param_1 & 0xffffffff) != (param_2 & 0xffffffff))) &&
     (uVar8 = param_1 + 4, (uVar8 & 0xffffffff) != (param_2 & 0xffffffff))) {
    piVar1 = (int *)param_1;
    do {
      piVar11 = (int *)uVar8;
      iVar9 = *piVar11;
      if (iVar9 < *piVar1) {
        fn_82F63CA0(uVar8 + ((unsigned __int64)(unsigned int)((int)piVar11 - (int)piVar1 >> 2) & 0x3fffffff) * -4
                     + 4,param_1);
        *piVar1 = iVar9;
      }
      else {
        iVar5 = piVar11[-1];
        uVar10 = uVar8;
        uVar3 = uVar8 - 4;
        while (iVar9 < iVar5) {
          *(int *)uVar10 = iVar5;
          iVar5 = *(int *)(uVar3 - 4);
          uVar10 = uVar3;
          uVar3 = uVar3 - 4;
        }
        *(int *)uVar10 = iVar9;
      }
      uVar8 = uVar8 + 4;
    } while ((uVar8 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return;
}
