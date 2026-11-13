extern int fn_82670230();
extern int fn_827B7F00();


void fn_827B85D8(int param_1,int param_2,char param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  
  fn_827B7F00(param_1 + 0x710);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      uVar5 = (unsigned int)((uVar9 & 0xffffffff) >> 4) & 0xffffffc;
      iVar12 = ((unsigned int)uVar9 & 0x3f) * 0x1c;
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x28) + uVar5) + iVar12 + 0x18) != param_2) {
        uVar6 = uVar11 >> 4;
        uVar8 = uVar11 & 0x3f;
        uVar11 = uVar11 + 1;
        iVar10 = uVar8 * 0x1c;
        iVar4 = *(int *)((uVar6 & 0xffffffc) + *(int *)(param_1 + 0x28));
        puVar7 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x28) + uVar5) + iVar12);
        iVar12 = iVar4 + iVar10;
        uVar1 = *puVar7;
        *(unsigned int *)(iVar12 + 4) = puVar7[1];
        *(unsigned int *)(iVar4 + iVar10) = uVar1;
        uVar1 = puVar7[5];
        uVar2 = puVar7[4];
        uVar3 = puVar7[3];
        *(unsigned int *)(iVar12 + 8) = puVar7[2];
        *(unsigned int *)(iVar12 + 0xc) = uVar3;
        *(unsigned int *)(iVar12 + 0x10) = uVar2;
        *(unsigned int *)(iVar12 + 0x14) = uVar1;
        *(unsigned int *)(iVar12 + 0x18) = puVar7[6];
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c));
  }
  if (uVar11 < *(unsigned int *)(param_1 + 0x1c)) {
    *(unsigned int *)(param_1 + 0x1c) = uVar11;
  }
  iVar12 = param_2 * 0x14 + param_1;
  *(unsigned int *)(iVar12 + 0x48) = 0;
  if (param_3 != '\0') {
    (**(int (***)())(**(int **)(iVar12 + 0x38) + 0x30))
              (*(int **)(iVar12 + 0x38),(param_2 + 3) * 0x14 + param_1);
    fn_82670230(*(unsigned int *)(iVar12 + 0x38));
    *(unsigned int *)(iVar12 + 0x38) = 0;
  }
  return;
}

