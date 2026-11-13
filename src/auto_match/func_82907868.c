extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern unsigned int uStack_64;


__int64 fn_82907868(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int uStack_64;
  int aiStack_60 [24];
  
  lVar4 = fn_8265C940(param_4 * 0xc,0x24810000);
  if (lVar4 == 0) {
    lVar8 = -0x7ff8fff2;
  }
  else {
    puVar5 = &uStack_64;
    lVar9 = 3;
    lVar8 = lVar4;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = (int)lVar8;
      lVar8 = (param_4 & 0x3fffffff) * 4 + lVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (unsigned int *)(aiStack_60[0] + -4);
      uVar10 = param_4;
      do {
        puVar5 = puVar5 + 1;
        *puVar5 = *(unsigned int *)(param_1 + 0x2c);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (unsigned int *)(aiStack_60[1] + -4);
      uVar10 = param_4;
      uVar3 = param_4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
        uVar10 = uVar10 - 1;
        uVar3 = uVar10;
      }
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar5 = (unsigned int *)(aiStack_60[2] + -4);
      uVar10 = param_4;
      uVar3 = param_4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
        uVar10 = uVar10 - 1;
        uVar3 = uVar10;
      }
    }
    lVar8 = fn_82904370(param_1,param_2,param_4 & 0xfffff | 0x20500000,aiStack_60[1],param_3,
                          aiStack_60[0],0);
    if ((-1 < lVar8) &&
       (lVar8 = fn_82904370(param_1,param_2,param_4 & 0xfffff | 0x11000000,aiStack_60[2],
                              aiStack_60[1],0,0), -1 < lVar8)) {
      iVar7 = 0;
      if ((param_4 & 0xffffffff) != 0) {
        piVar6 = (int *)(aiStack_60[2] + -4);
        do {
          piVar6 = piVar6 + 1;
          iVar2 = *(int *)(*piVar6 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(*(int *)(param_1 + 8) + 0xa8);
          uVar1 = *(unsigned int *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0xa8) * 4 +
                            *(int *)(*(int *)(param_1 + 8) + 0x10)) + 8);
          *(int *)(iVar2 + 0x10) = iVar7;
          iVar7 = iVar7 + 1;
          *(unsigned int *)(iVar2 + 0xc) = uVar1;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
      lVar8 = 0;
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xa8) * 4 +
                      *(int *)(*(int *)(param_1 + 8) + 0x10));
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
  }
  fn_8265C990(lVar4,0x24810000);
  return lVar8;
}

