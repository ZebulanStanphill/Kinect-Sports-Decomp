extern int fn_82CE5410();
extern int fn_82D465A8();
extern unsigned int lbl_82137144;


unsigned int * fn_82D50838(unsigned int *param_1,unsigned __int64 param_2,int *param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  int aiStack_40 [16];
  
  fn_82D465A8(param_1,param_2,0);
  *param_1 = &lbl_82137144;
  puVar10 = param_1 + 0x18;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  *(unsigned char *)(param_1 + 0x1b) = 0;
  iVar4 = fn_82CE5410();
  uVar5 = param_1[0x1a] & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar5 < param_3[1]) {
    if ((param_1[0x1a] & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*puVar10,uVar5,4);
    }
    aiStack_40[0] = param_3[1];
    uVar5 = (**(int (***)())(*piVar1 + 0xc))(piVar1,aiStack_40,4);
    *puVar10 = uVar5;
    param_1[0x1a] = aiStack_40[0];
  }
  uVar5 = param_3[1];
  uVar6 = 0;
  uVar2 = *puVar10;
  param_1[0x19] = uVar5;
  iVar4 = *param_3;
  if (3 < (int)uVar5) {
    puVar8 = (unsigned int *)(iVar4 + -4);
    lVar9 = (unsigned __int64)uVar2 + 4;
    lVar7 = (((unsigned __int64)uVar5 - 4 & 0xffffffff) >> 2) + 1;
    uVar6 = lVar7 * 4 & 0xfffffffc;
    do {
      puVar3 = (unsigned int *)lVar9;
      puVar3[-1] = puVar8[1];
      *puVar3 = *(unsigned int *)((iVar4 - uVar2) + (int)puVar3);
      puVar3[1] = puVar8[3];
      puVar8 = puVar8 + 4;
      puVar3[2] = *puVar8;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int)uVar6 < (int)uVar5) {
    lVar7 = uVar5 - uVar6;
    lVar9 = (uVar6 & 0x3fffffff) * 4 + (unsigned __int64)uVar2;
    do {
      *(unsigned int *)lVar9 = *(unsigned int *)((int)(unsigned int *)lVar9 + (iVar4 - uVar2));
      lVar9 = lVar9 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}

