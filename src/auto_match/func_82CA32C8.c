extern int fn_82C45138();


unsigned __int64 fn_82CA32C8(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned int uVar14;
  __int64 lVar13;
  unsigned int uVar16;
  __int64 lVar15;
  
  uVar14 = *(unsigned int *)(param_1 + 0x80);
  uVar16 = *(unsigned int *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0xebc) == 0) {
    uVar3 = 0xfffffffffffffff7;
  }
  else {
    puVar1 = *(unsigned int **)(param_1 + 0xebc);
    param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d4c) + param_2;
    lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*puVar1;
    lVar11 = (unsigned __int64)puVar1[1] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
    lVar9 = (unsigned __int64)puVar1[2] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0x3e54) == 0) {
      uVar8 = 0;
      if (uVar16 != 0) {
        do {
          uVar12 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar14 - 1;
            lVar6 = param_2;
            lVar13 = lVar10;
            lVar15 = lVar11;
            do {
              if ((uVar12 == uVar7) || (uVar8 == uVar16 - 1)) {
                iVar4 = fn_82C45138(param_1);
                if (iVar4 == 0) {
                  if (uVar12 == uVar7) {
                    lVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x9c) -
                            (unsigned __int64)*(unsigned int *)(param_1 + 0xb4)) + 0x10;
                  }
                  else {
                    lVar5 = 0x10;
                  }
                }
                else if (uVar12 == uVar7) {
                  lVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x3c0c) -
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x3c14)) + 0x10;
                }
                else {
                  lVar5 = 0x10;
                }
                (**(int (***)())(param_1 + 0x3e44))
                          (param_1,lVar6,lVar13,lVar15,(lVar9 - lVar11) + lVar15,
                           *(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0x6c),lVar5);
              }
              else {
                (**(int (***)())(param_1 + 0x3e40))
                          (param_1,lVar6,lVar13,lVar15,(lVar9 - lVar11) + lVar15,
                           *(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0x6c),
                           *(unsigned int *)(param_1 + 0x3d44));
              }
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 0x10;
              lVar15 = lVar15 + 8;
              lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d50) + lVar6;
            } while (uVar12 < uVar14);
          }
          uVar8 = uVar8 + 1;
          lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x70) + lVar11;
          lVar10 = lVar10 + (unsigned __int64)*(unsigned int *)(param_1 + 100);
          lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x70) + lVar9;
          param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d5c) + param_2;
        } while (uVar8 < uVar16);
      }
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0x9c);
      uVar14 = *(unsigned int *)(param_1 + 0xa0);
      iVar4 = fn_82C45138(param_1);
      if (iVar4 != 0) {
        uVar2 = *(unsigned int *)(param_1 + 0x3c0c);
        uVar14 = *(unsigned int *)(param_1 + 0x3c10);
      }
      uVar16 = 0;
      if (uVar14 != 0) {
        do {
          (**(int (***)())(param_1 + 0x3e54))(param_2,lVar10,lVar11,lVar9,uVar2);
          uVar8 = uVar16 & 1;
          uVar16 = uVar16 + 1;
          lVar6 = (__int64)(int)uVar8 * (__int64)*(int *)(param_1 + 0x6c);
          lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60) + lVar10;
          param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d44) + param_2;
          lVar11 = lVar6 + lVar11;
          lVar9 = lVar6 + lVar9;
        } while (uVar16 < uVar14);
        return 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

