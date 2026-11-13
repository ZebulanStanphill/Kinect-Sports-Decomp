extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82D41D58();
extern int fn_82D43238();
extern int fn_82D4DE48();
extern int fn_82D4E4A8();
extern unsigned int lbl_821388C0;
extern unsigned int lbl_821388E4;


unsigned int * fn_82D4EF78(unsigned int *param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned short *puVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int auStack_40;
  
  fn_82D43238((double)*(float *)(param_2 + 0xe4),param_1,param_2,
                    *(unsigned int *)(param_2 + 0xb0));
  *param_1 = &lbl_821388E4;
  param_1[4] = &lbl_821388C0;
  param_1[0x3c] = 0;
  iVar4 = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x80000000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x80000000;
  puVar9 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
  uVar5 = puVar9[1];
  uVar10 = puVar9[2];
  uVar11 = puVar9[3];
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0x20) & 0xfffffff0);
  *puVar3 = *puVar9;
  puVar3[1] = uVar5;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  param_1[2] = *(unsigned int *)(param_2 + 8);
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_2 + 0x14);
  if (0 < *(int *)(param_2 + 0xb8)) {
    lVar8 = 0;
    do {
      fn_82D4E4A8(param_1,lVar8 + (unsigned __int64)*(unsigned int *)(param_2 + 0xb4));
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x60;
    } while (iVar4 < *(int *)(param_2 + 0xb8));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0xc4)) {
    lVar8 = 0;
    do {
      fn_82D4DE48(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0xc0) + lVar8);
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x40;
    } while (iVar4 < *(int *)(param_2 + 0xc4));
  }
  puVar9 = param_1 + 0x33;
  iVar4 = fn_82CE5410();
  uVar2 = param_1[0x35] & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar2 < *(int *)(param_2 + 0xd0)) {
    if ((param_1[0x35] & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*puVar9,uVar2,2);
    }
    auStack_40 = *(unsigned int *)(param_2 + 0xd0);
    uVar5 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_40,2);
    *puVar9 = uVar5;
    param_1[0x35] = auStack_40;
  }
  uVar2 = *(unsigned int *)(param_2 + 0xd0);
  uVar6 = (unsigned __int64)uVar2;
  puVar7 = (unsigned short *)*puVar9;
  param_1[0x34] = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = *(int *)(param_2 + 0xcc) - (int)puVar7;
    do {
      *puVar7 = *(unsigned short *)(iVar4 + (int)puVar7);
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(param_2 + 0xd8);
  fn_82D41D58(param_1);
  return param_1;
}

