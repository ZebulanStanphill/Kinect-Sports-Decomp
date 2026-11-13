extern int fn_82381BC0();
extern unsigned int lbl_82191AF0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_8219297C;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821955DC;
extern unsigned int lbl_821955E0;
extern unsigned int lbl_821955E4;
extern unsigned int lbl_821955E8;
extern unsigned int lbl_821955EC;
extern unsigned int lbl_821CA460;


void fn_8249B8C0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int *apuStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(iVar1 + 0x28) = 0;
  *(unsigned int *)(iVar1 + 0x2c) = 0;
  puVar2 = *(unsigned int **)(param_1 + 0x38);
  apuStack_20[0] = (unsigned int *)*puVar2;
  while (apuStack_20[0] != puVar2) {
    (**(int (***)())(*(int *)apuStack_20[0][4] + 8))
              ((int *)apuStack_20[0][4],*(unsigned int *)(param_1 + 0xb0));
    fn_82381BC0(apuStack_20);
    puVar2 = *(unsigned int **)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0xb0) + 0x5c) = 0;
  }
  uVar11 = lbl_821CA460;
  uVar10 = lbl_821955EC;
  uVar9 = lbl_821955E8;
  uVar8 = lbl_821955E4;
  uVar7 = lbl_821955E0;
  uVar6 = lbl_821955DC;
  uVar5 = lbl_82193B00;
  uVar4 = lbl_8219297C;
  uVar3 = lbl_82191AF0;
  puVar2 = *(unsigned int **)(param_1 + 0xec);
  *puVar2 = lbl_82192734;
  puVar2[1] = uVar6;
  puVar2[2] = uVar11;
  puVar2[3] = uVar7;
  puVar2[4] = uVar3;
  puVar2[5] = uVar6;
  puVar2[6] = uVar5;
  puVar2[7] = uVar7;
  puVar2[8] = uVar8;
  puVar2[9] = uVar9;
  puVar2[10] = uVar4;
  puVar2[0xb] = uVar10;
  return;
}

