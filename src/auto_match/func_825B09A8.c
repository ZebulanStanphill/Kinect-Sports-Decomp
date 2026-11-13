extern unsigned int *auStack_40;
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82849BD0();
extern int fn_8284D860();
extern int fn_8284E5C0();
extern int fn_8284E638();


void fn_825B09A8(int *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int auStack_40;
  
  fn_8284D860(*param_1,param_1[1],param_1 + 2,&auStack_40);
  if (param_1[2] != 0) {
    uVar2 = fn_8284E5C0(param_1[2],*(unsigned int *)(param_1[1] + 0x50),
                              *(unsigned int *)(*param_1 + 300));
    lVar6 = uVar2 + ((__int64)((int)uVar2 >> 4) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 0xf) != 0)
                    & 0xfffffff) * -0x10;
    if (lVar6 < 1) {
      if ((int)lVar6 < 0) {
        uVar2 = uVar2 - lVar6;
      }
    }
    else {
      uVar2 = (uVar2 - lVar6) + 0x10;
    }
    iVar3 = *(int *)(param_2 + 0x14);
    *(int *)(param_2 + 0x14) = iVar3 + (int)uVar2;
    *(int *)(param_2 + 0x2c) = (int)uVar2 + *(int *)(param_2 + 0x2c);
    param_1[3] = iVar3;
    lVar6 = ((unsigned __int64)*(unsigned int *)(*param_1 + 300) & 0x3fffffff) << 2;
    if (0x3fffffff < *(unsigned int *)(*param_1 + 300)) {
      lVar6 = -1;
    }
    iVar3 = fn_8265CA60(lVar6);
    uVar5 = 0;
    if (*(int *)(*param_1 + 300) != 0) {
      iVar8 = 0;
      puVar4 = (unsigned int *)(iVar3 + -4);
      do {
        uVar5 = uVar5 + 1;
        iVar9 = *(int *)(param_1[1] + 0x4c) + iVar8;
        iVar8 = iVar8 + 0x10;
        puVar4 = puVar4 + 1;
        *puVar4 = *(unsigned int *)(iVar9 + 4);
      } while (uVar5 < *(unsigned int *)(*param_1 + 300));
    }
    fn_8284E638(param_1[2],*(unsigned int *)(param_1[1] + 0x50),*(unsigned int *)(*param_1 + 300),
                      auStack_40,param_1[3],iVar3);
    uVar5 = 0;
    if (*(int *)(*param_1 + 300) != 0) {
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      do {
        piVar7 = (int *)(*(int *)(param_1[1] + 0x4c) + iVar8);
        iVar1 = *piVar7;
        if (iVar1 != 0) {
          if (*(int *)(*(int *)(param_1[3] + 0x28) + iVar10) != 0) {
            fn_82849BD0(iVar1,*(unsigned int *)(*(int *)(*param_1 + 0x128) + iVar9 + 0xc),
                            piVar7[3],*(unsigned int *)(*(int *)(param_1[3] + 0x28) + iVar10));
          }
        }
        uVar5 = uVar5 + 1;
        iVar10 = iVar10 + 4;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar8 + 0x10;
      } while (uVar5 < *(unsigned int *)(*param_1 + 300));
    }
    fn_8265CAA0(iVar3);
  }
  return;
}

