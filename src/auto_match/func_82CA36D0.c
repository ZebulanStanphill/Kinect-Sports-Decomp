extern int fn_82C45138();
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


unsigned __int64 fn_82CA36D0(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  int iVar18;
  int iVar20;
  __int64 lVar19;
  unsigned int uStack_bc;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  uVar2 = *(unsigned int *)(param_1 + 0x84);
  uVar11 = *(unsigned int *)(param_1 + 0x9c);
  uVar10 = *(unsigned int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xebc) == 0) {
    uVar5 = 1;
  }
  else {
    puVar3 = *(unsigned int **)(param_1 + 0xebc);
    uVar8 = (unsigned __int64)puVar3[2] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
    lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*puVar3;
    lVar15 = (unsigned __int64)puVar3[1] + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
    uStack_b0 = (unsigned int)uVar8;
    if (*(int *)(param_1 + 0x5680) == 1) {
      iVar4 = *(int *)(param_1 + 0x5690);
      iVar18 = *(int *)(param_1 + 0x5698);
      uStack_bc = iVar4 << 4;
      uStack_b4 = iVar18 << 3;
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5684);
      uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5688);
      uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x568c);
      iVar20 = *(int *)(param_1 + 0x5694);
      uVar7 = *(int *)(param_1 + 0x5694) << 3;
    }
    else {
      uStack_b4 = *(unsigned int *)(param_1 + 0x3d64);
      uStack_bc = *(unsigned int *)(param_1 + 0x3d5c);
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d4c) + param_2;
      iVar18 = *(int *)(param_1 + 0x3d48);
      iVar4 = *(int *)(param_1 + 0x3d44);
      uVar13 = *(unsigned int *)(param_1 + 0x3d18) + uVar14;
      uVar12 = *(unsigned int *)(param_1 + 0x3d1c) + uVar14;
      iVar20 = iVar18;
      uVar7 = uStack_b4;
    }
    iVar6 = fn_82C45138(param_1);
    if (iVar6 != 0) {
      uVar11 = *(unsigned int *)(param_1 + 0x3c0c);
      uVar10 = *(unsigned int *)(param_1 + 0x3c10);
    }
    if (*(int (***)())(param_1 + 0x3e58) == (int (**)())0x0) {
      uVar11 = 0;
      if (uVar2 != 0) {
        do {
          uVar10 = 0;
          if (uVar1 != 0) {
            lVar16 = uVar8 - lVar15;
            lVar17 = lVar9;
            lVar19 = lVar15;
            do {
              if ((uVar10 == uVar1 - 1) || (uVar11 == uVar2 - 1)) {
                fn_82C45138(param_1);
                (**(int (***)())(param_1 + 0x3e50))
                          (param_1,(uVar14 - lVar9) + lVar17,(uVar13 - lVar15) + lVar19,
                           (uVar12 - lVar15) + lVar19,lVar17,lVar19,lVar16 + lVar19,
                           *(unsigned int *)(param_1 + 0x60));
                uVar8 = (unsigned __int64)uStack_b0;
              }
              else {
                (**(int (***)())(param_1 + 0x3e4c))
                          (param_1,(uVar14 - lVar9) + lVar17,(uVar13 - lVar15) + lVar19,
                           (uVar12 - lVar15) + lVar19,lVar17,lVar19,lVar16 + lVar19,
                           *(unsigned int *)(param_1 + 0x60));
              }
              uVar10 = uVar10 + 1;
              lVar17 = lVar17 + 0x10;
              lVar19 = lVar19 + 8;
            } while (uVar10 < uVar1);
          }
          uVar11 = uVar11 + 1;
          uVar8 = *(unsigned int *)(param_1 + 0x70) + uVar8;
          lVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x70) + lVar15;
          uVar14 = uStack_bc + uVar14;
          lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 100) + lVar9;
          uStack_b0 = (unsigned int)uVar8;
          uVar13 = uVar7 + uVar13;
          uVar12 = uStack_b4 + uVar12;
        } while (uVar11 < uVar2);
      }
      uVar5 = 0;
    }
    else {
      (**(int (***)())(param_1 + 0x3e58))
                (uVar14,lVar9,uVar10,uVar11,*(unsigned int *)(param_1 + 0x60),iVar4);
      (**(int (***)())(param_1 + 0x3e58))
                (uVar12,uVar8,uVar10 >> 1,uVar11 >> 1,*(unsigned int *)(param_1 + 0x6c),iVar20);
      (**(int (***)())(param_1 + 0x3e58))
                (uVar13,lVar15,uVar10 >> 1,uVar11 >> 1,*(unsigned int *)(param_1 + 0x6c),iVar18);
      uVar5 = 0;
    }
  }
  return uVar5;
}

