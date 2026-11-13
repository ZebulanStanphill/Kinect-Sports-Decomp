extern unsigned int *auStack_8c;
extern unsigned int *auStack_94;
extern unsigned int *auStack_a0;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82722540();
extern int fn_82724448();
extern int fn_82726250();
extern int fn_82728778();
extern unsigned int stack0x00000000;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


void fn_82729000(int param_1)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned char *puVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  int aiStack_b0 [4];
  unsigned char auStack_a0 [8];
  unsigned int uStack_98;
  unsigned char auStack_94 [4];
  unsigned int uStack_90;
  unsigned int auStack_8c [19];
  unsigned char bStack_40;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      iVar8 = *(int *)(iVar6 + 0xe8);
      if (iVar8 != 0) {
        *(unsigned int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
      }
      iVar6 = *(int *)(iVar6 + 0xe8);
    }
    else {
      iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
      if (iVar6 != 0xd) {
        return;
      }
      iVar6 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        *(unsigned int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
      }
    }
    if (iVar6 != 0) {
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(&stack0x00000000 + -0xb0,uVar5,uVar2,0xffffffffffffffff,0);
        uVar7 = fn_82722540(&stack0x00000000 + -0xb0);
        if ((int)uVar7 < 5) {
          iVar8 = fn_82724448(iVar6);
          puVar10 = &stack0x00000000 + -0x94;
          lVar12 = 5;
          do {
            *(unsigned int *)(puVar10 + 0xc) = 0;
            *(unsigned int *)(puVar10 + 8) = 0;
            *(unsigned int *)(puVar10 + 4) = 0;
            puVar10 = puVar10 + 0x10;
            *puVar10 = 0;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          bStack_40 = 0;
          if (iVar8 != 0) {
            puVar9 = (unsigned int *)(&stack0x00000000 + -0x98);
            puVar11 = (unsigned int *)(iVar8 + 8);
            lVar12 = 5;
            do {
              uVar2 = puVar11[-1];
              uVar3 = *puVar11;
              uVar1 = *(unsigned char *)(puVar11 + 1);
              puVar9[2] = puVar11[-2];
              puVar9[3] = uVar2;
              puVar9 = puVar9 + 4;
              *puVar9 = uVar3;
              *(unsigned char *)((int)auStack_8c + ((int)puVar11 - iVar8)) = uVar1;
              puVar11 = puVar11 + 4;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            bStack_40 = *(unsigned char *)(iVar8 + 0x50);
          }
          bVar4 = bStack_40;
          puVar11 = (unsigned int *)(&stack0x00000000 + uVar7 * 0x10 + -0x90);
          puVar9 = (unsigned int *)fn_82728778(&stack0x00000000 + -0xa0,param_1,1,puVar11);
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          bStack_40 = (unsigned char)(1 << (uVar7 & 0x3f)) | bVar4;
          uVar1 = *(unsigned char *)(puVar9 + 3);
          *puVar11 = *puVar9;
          puVar11[1] = uVar2;
          puVar11[2] = uVar3;
          *(unsigned char *)(puVar11 + 3) = uVar1;
          fn_82726250(iVar6,&stack0x00000000 + -0x90);
        }
        lVar12 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
        *(int *)(aiStack_b0[0] + 8) = (int)lVar12;
        if (lVar12 == 0) {
          fn_826944C8(aiStack_b0[0]);
        }
      }
      fn_826824B0(iVar6);
    }
  }
  return;
}

