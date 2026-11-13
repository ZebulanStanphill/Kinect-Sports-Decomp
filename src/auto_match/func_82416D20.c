extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_8252AE68();
extern int fn_8253C548();
extern int fn_825A14E8();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A0000;
extern unsigned int uStack_4c;


void fn_82416D20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int *piVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [64];
  
  iVar1 = *(int *)(param_2 + 0x28);
  *(unsigned int *)(param_2 + 0x2c) = 1;
  *(int *)(iVar1 + 0x7d4) = *(int *)(iVar1 + 0x7d4) + -1;
  *(int *)(iVar1 + 0x7d8) = *(int *)(iVar1 + 0x7d8) + 1;
  iVar1 = *(int *)(param_2 + 0x28);
  fn_8252AE68(iVar1,1);
  if (*(int *)(iVar1 + 0xb10) != 0) {
    fn_825A14E8();
    *(int *)(iVar1 + 0x8a8) = *(int *)(iVar1 + 0x8a8) + 1;
  }
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 4);
  piVar6 = (int *)fn_8265C9E0(0xc);
  if (piVar6 != (int *)0x0) {
    *piVar6 = iVar1;
    piVar6[1] = iVar2;
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = param_2;
    }
    puVar7 = (unsigned char *)param_1[1];
    if (puVar7 == (unsigned char *)0x3ffffffe) {
      puVar7 = &lbl_821A0000;
      piVar6 = (int *)fn_82F622A8(0xffffffff8219852c);
    }
    param_1[1] = (int)(puVar7 + 1);
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)piVar6[1] = piVar6;
    uVar3 = *(unsigned int *)(param_2 + 0x28);
    puVar4 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    fn_8253C548(uVar3,auStack_40,0);
    return;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

