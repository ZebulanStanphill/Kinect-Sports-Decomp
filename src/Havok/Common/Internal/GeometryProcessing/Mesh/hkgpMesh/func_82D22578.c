extern int fn_82D2B688();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


__int64 fn_82D22578(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  float fVar6;
  __int64 lVar7;
  int *piVar8;
  double dVar9;
  
  fVar6 = lbl_821AAD20;
  lVar7 = 0;
  dVar9 = (double)lbl_821AAD20;
  uVar5 = lbl_82002AE0;
  for (puVar1 = *(unsigned int **)(param_1 + 0x14); lbl_82002AE0 = uVar5, puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    puVar1[0xc] = fVar6;
    uVar5 = lbl_82002AE0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  while (puVar1 != (unsigned int *)0x0) {
    piVar8 = puVar1 + 2;
    iVar2 = puVar1[3];
    iVar3 = puVar1[4];
    puVar1 = (unsigned int *)*puVar1;
    *(unsigned int *)(*piVar8 + 0x30) = uVar5;
    *(unsigned int *)(iVar2 + 0x30) = uVar5;
    *(unsigned int *)(iVar3 + 0x30) = uVar5;
  }
  piVar8 = *(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    do {
      piVar4 = (int *)*piVar8;
      if ((double)(float)piVar8[0xc] == dVar9) {
        iVar2 = *piVar8;
        piVar8 = (int *)piVar8[1];
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar8;
        }
        if (piVar8 == (int *)0x0) {
          *(int *)(param_1 + 0x14) = iVar2;
        }
        else {
          *piVar8 = iVar2;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        fn_82D2B688();
        lVar7 = lVar7 + 1;
      }
      piVar8 = piVar4;
    } while (piVar4 != (int *)0x0);
    if ((int)lVar7 != 0) {
      puVar1 = *(unsigned int **)(param_1 + 0x7b8);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      *(unsigned int *)(param_1 + 0x7b8) = 0;
    }
  }
  return lVar7;
}

