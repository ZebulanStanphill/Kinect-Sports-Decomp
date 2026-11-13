extern int fn_82ACBFC0();


unsigned __int64 fn_82ACC188(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  if (*(int *)(param_1 + 0x2c8) != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      param_1 = fn_82ACBFC0();
    }
    uVar12 = 0;
    for (uVar6 = *(unsigned int *)(*(int *)(param_2 + 4) + 4); ((uVar6 & 1) == 0 && (uVar6 != 0));
        uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4)) {
      uVar12 = *(int *)(uVar6 + 8) + uVar12;
    }
    for (iVar4 = *(int *)((*(unsigned int *)(param_2 + 0x18) % 0x3e5) * 4 + *(int *)(param_1 + 0x2c8));
        iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
      if (((*(unsigned int *)(iVar4 + 0x18) == *(unsigned int *)(param_2 + 0x18)) &&
          (*(int *)(iVar4 + 0xc) == *(int *)(param_2 + 0xc))) &&
         (*(int *)(iVar4 + 0x14) == *(int *)(param_2 + 0x14))) {
        uVar5 = 0;
        for (uVar6 = *(unsigned int *)(*(int *)(iVar4 + 4) + 4); ((uVar6 & 1) == 0 && (uVar6 != 0));
            uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4)) {
          uVar5 = *(int *)(uVar6 + 8) + uVar5;
        }
        if (uVar5 == uVar12) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar1 = *(unsigned int *)(*(int *)(param_2 + 4) + 4);
            do {
              uVar10 = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
              uVar7 = *(unsigned int *)(uVar10 + 8);
              uVar9 = uVar6;
              if (uVar7 <= uVar6) {
                do {
                  uVar9 = uVar9 - uVar7;
                  uVar10 = *(unsigned int *)((uVar10 & 0xfffffffe) + 4);
                  uVar10 = -(unsigned int)((uVar10 & 1) == 0) & uVar10;
                  uVar7 = *(unsigned int *)(uVar10 + 8);
                } while (uVar7 <= uVar9);
              }
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar2 = *(unsigned int *)(*(int *)(iVar4 + 4) + 4);
                do {
                  uVar11 = -(unsigned int)((uVar2 & 1) == 0) & uVar2;
                  uVar3 = *(unsigned int *)(uVar11 + 8);
                  uVar8 = uVar7;
                  if (uVar3 <= uVar7) {
                    do {
                      uVar8 = uVar8 - uVar3;
                      uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 4);
                      uVar11 = -(unsigned int)((uVar11 & 1) == 0) & uVar11;
                      uVar3 = *(unsigned int *)(uVar11 + 8);
                    } while (uVar3 <= uVar8);
                  }
                } while ((*(int *)((uVar8 + 4) * 4 + uVar11) != *(int *)((uVar9 + 4) * 4 + uVar10))
                        && (uVar7 = uVar7 + 1, uVar7 < uVar5));
              }
            } while ((uVar7 != uVar5) && (uVar6 = uVar6 + 1, uVar6 < uVar12));
          }
          if (uVar6 == uVar12) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

