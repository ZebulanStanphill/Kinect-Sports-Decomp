extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_83082030(unsigned int *param_1,int *param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned int auStack_40 [16];
  
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      piVar6 = (int *)(*(int *)*param_1 + iVar5);
      iVar5 = iVar5 + 4;
      *piVar6 = *(int *)(*piVar6 * 4 + *param_2);
    } while (iVar4 < (int)param_1[1]);
  }
  uVar10 = (unsigned int)param_3;
  auStack_40[0] = uVar10;
  if (uVar10 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82CE5410();
    iVar4 = (**(int (***)())(**(int **)(iVar4 + 0xc) + 0xc))(*(int **)(iVar4 + 0xc),auStack_40,4);
    uVar9 = auStack_40[0];
    if (auStack_40[0] != 0) goto LAB_830820d4;
  }
  uVar9 = 0x80000000;
LAB_830820d4:
  if (0 < (int)uVar10) {
    puVar7 = (unsigned int *)(iVar4 + -4);
    uVar11 = param_3;
    uVar3 = param_3 & 0xffffffff;
    while (uVar3 != 0) {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
      uVar11 = uVar11 - 1;
      uVar3 = uVar11;
    }
  }
  iVar5 = 0;
  if (0 < param_4[1]) {
    iVar8 = 0;
    do {
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*param_2 + iVar8);
      piVar2 = (int *)(iVar8 + *param_4);
      iVar8 = iVar8 + 4;
      iVar1 = *piVar6 * 4;
      *(int *)(iVar1 + iVar4) = *piVar2 + *(int *)(iVar1 + iVar4);
    } while (iVar5 < param_4[1]);
  }
  iVar5 = fn_82CE5410();
  if ((int)(param_4[2] & 0x3fffffffU) < (int)uVar10) {
    uVar11 = ((unsigned __int64)(unsigned int)param_4[2] & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar10) {
      uVar11 = param_3;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_4,uVar11,4);
  }
  param_4[1] = uVar10;
  if (0 < (int)uVar10) {
    iVar5 = 0;
    do {
      *(unsigned int *)(iVar5 + *param_4) = *(unsigned int *)(iVar5 + iVar4);
      iVar5 = iVar5 + 4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iVar5 = fn_82CE5410();
  if ((uVar9 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0xc) + 0x10))(*(int **)(iVar5 + 0xc),iVar4,uVar9 & 0x3fffffff,4)
    ;
  }
  return;
}

