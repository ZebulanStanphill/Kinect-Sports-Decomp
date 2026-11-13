typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_825A4488();
extern int fn_825A44F0();
extern int fn_82A1DD38();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82D93670();
extern int fn_82DEAF60();
extern unsigned int uStack0000001c;


void fn_825A3678(int param_1,unsigned int param_2,int param_3,int *param_4,int *param_5,
                  unsigned int *param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uStack0000001c;
  char acStack_a0 [4];
  int aiStack_9c [39];
  
  iVar6 = param_1 + 0x10;
  uStack0000001c = param_2;
  fn_825A44F0(acStack_a0,iVar6);
  if (acStack_a0[0] == '\0') {
    piVar14 = (int *)(param_1 + 4);
    iVar5 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 8) == (*(unsigned int *)(param_1 + 0xc) & 0x3fffffff)) {
      fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),piVar14,0x28);
    }
    iVar5 = *(int *)(param_1 + 8) * 0x28 + *piVar14;
    if (iVar5 != 0) {
      fn_825A4488(iVar5,0);
      *(unsigned int *)(iVar5 + 0x10) = 0;
      *(unsigned int *)(iVar5 + 0x14) = 0;
      *(unsigned int *)(iVar5 + 0x18) = 0x80000000;
      *(unsigned int *)(iVar5 + 0x1c) = 0;
      *(unsigned int *)(iVar5 + 0x20) = 0;
      *(unsigned int *)(iVar5 + 0x24) = 0x80000000;
    }
    iVar5 = *(int *)(param_1 + 8) * 0x28 + *piVar14;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (iVar5 != 0) {
      fn_825A4488(iVar5,0);
    }
    if ((unsigned int *)(iVar5 + 0x1c) != (unsigned int *)0x0) {
      *(unsigned int *)(iVar5 + 0x1c) = 0;
      *(unsigned int *)(iVar5 + 0x20) = 0;
      *(unsigned int *)(iVar5 + 0x24) = 0x80000000;
    }
    if ((unsigned int *)(iVar5 + 0x10) != (unsigned int *)0x0) {
      *(unsigned int *)(iVar5 + 0x10) = param_7;
      *(unsigned int *)(iVar5 + 0x14) = param_8;
      *(unsigned int *)(iVar5 + 0x18) = param_8 | 0x80000000;
    }
    *(int *)(iVar5 + 0xc) = param_3;
    uVar1 = *(unsigned int *)(param_1 + 8);
    iVar5 = fn_82CE5410();
    fn_82CEA160(iVar6,*(unsigned int *)(iVar5 + 0x10),param_3,(unsigned __int64)uVar1 - 1);
  }
  iVar6 = fn_82CEA280(iVar6,param_3,0xffffffffffffffff);
  iVar5 = 0;
  iVar6 = iVar6 * 0x28 + *(int *)(param_1 + 4);
  if (0 < param_4[1]) {
    piVar14 = (int *)(iVar6 + 0x1c);
    iVar11 = 0;
    do {
      iVar7 = fn_82CE5410();
      if (*(unsigned int *)(iVar6 + 0x20) == (*(unsigned int *)(iVar6 + 0x24) & 0x3fffffff)) {
        fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),piVar14,0x60);
      }
      iVar7 = *(int *)(iVar6 + 0x20) * 0x60 + *piVar14;
      if (iVar7 != 0) {
        *(unsigned int *)(iVar7 + 0x40) = 0;
        *(unsigned int *)(iVar7 + 0x44) = 0;
        *(unsigned int *)(iVar7 + 0x48) = 0x80000000;
      }
      iVar7 = *(int *)(iVar6 + 0x20) * 0x60 + *piVar14;
      piVar13 = (int *)(iVar7 + 0x40);
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
      if (piVar13 != (int *)0x0) {
        aiStack_9c[0] = param_6[1];
        *piVar13 = 0;
        *(unsigned int *)(iVar7 + 0x44) = 0;
        *(unsigned int *)(iVar7 + 0x48) = 0x80000000;
        if (aiStack_9c[0] == 0) {
          iVar9 = 0;
          iVar8 = 0;
        }
        else {
          iVar8 = fn_82CE5410();
          iVar9 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 0xc))
                            (*(int **)(iVar8 + 0x10),aiStack_9c,4);
          iVar8 = aiStack_9c[0];
        }
        iVar12 = iVar8;
        if (iVar8 == 0) {
          iVar12 = -0x80000000;
        }
        *piVar13 = iVar9;
        *(int *)(iVar7 + 0x44) = iVar8;
        *(int *)(iVar7 + 0x48) = iVar12;
      }
      fn_82A1DD38(*piVar13,*param_6,*(int *)(iVar7 + 0x44) << 2);
      uVar1 = *(unsigned int *)(iVar6 + 0x20);
      iVar8 = *(int *)(iVar7 + 0x44);
      iVar12 = 0;
      *(unsigned int *)(iVar7 + 0x4c) = *(unsigned int *)(*param_5 + iVar11);
      *(unsigned int *)(iVar7 + 0x50) = *(unsigned int *)(*param_4 + iVar11);
      iVar9 = *(int *)(*param_4 + iVar11);
      puVar2 = (unsigned int *)((int)in_r0 + iVar9 + 0xf0 & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      puVar2 = (unsigned int *)(iVar9 + 0x100U & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)(iVar7 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      puVar2 = (unsigned int *)(iVar9 + 0x110U & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)(iVar7 + 0x20U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      puVar2 = (unsigned int *)(iVar9 + 0x120U & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)(iVar7 + 0x30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          fn_82DEAF60((double)*(float *)(iVar7 + 0x4c),uStack0000001c,param_3,
                            *(unsigned int *)(*piVar13 + iVar8));
          uVar15 = *(unsigned int *)(*piVar13 + iVar8);
          iVar9 = fn_82CE5410();
          fn_82CEA160(iVar6,*(unsigned int *)(iVar9 + 0x10),uVar15,(unsigned __int64)uVar1 - 1);
          iVar9 = 0;
          if (0 < *(int *)(param_3 + 0x7c)) {
            iVar10 = 0;
            do {
              if (*(int *)(*(int *)(param_3 + 0x78) + iVar10) == 0x2002) {
                bVar4 = true;
                goto LAB_825a3998;
              }
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 0x10;
            } while (iVar9 < *(int *)(param_3 + 0x7c));
          }
          bVar4 = false;
LAB_825a3998:
          if (!bVar4) {
            fn_82D93670(param_3,0x2002,1);
          }
          iVar12 = iVar12 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar12 < *(int *)(iVar7 + 0x44));
      }
      iVar5 = iVar5 + 1;
      param_6 = param_6 + 2;
      iVar11 = iVar11 + 4;
    } while (iVar5 < param_4[1]);
  }
  return;
}

