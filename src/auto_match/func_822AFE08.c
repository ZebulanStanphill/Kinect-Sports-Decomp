extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_822AF0A8();
extern int fn_822C64E0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AC578;
extern unsigned int lbl_821AC654;
extern unsigned int lbl_821AC678;
extern unsigned int lbl_821AC69C;
extern unsigned int lbl_821AC6B8;
extern unsigned int lbl_821AC6DC;
extern unsigned int lbl_821AC6F8;
extern unsigned int lbl_821AD588;


unsigned int * fn_822AFE08(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  unsigned char auStack_68 [104];
  
  fn_822AF0A8();
  *param_1 = &lbl_821AC578;
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  uVar3 = **(unsigned int **)(param_2 + 0x2c);
  puVar5 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (unsigned int *)0x0) {
      puVar5[4] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      puVar5[5] = 2;
      puVar5[3] = &lbl_821AC69C;
    }
  }
  puStack_70 = puVar5 + 3;
  puStack_6c = puVar5;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar6 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (unsigned int *)0x0) {
      puVar6[4] = uVar1;
      puVar6[6] = uVar2;
      puVar6[5] = 3;
      puVar6[3] = &lbl_821AC6DC;
    }
  }
  puStack_70 = puVar6 + 3;
  puStack_6c = puVar6;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar7 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (unsigned int *)0x0) {
      puVar7[4] = uVar1;
      puVar7[6] = uVar2;
      puVar7[5] = 4;
      puVar7[3] = &lbl_821AC6DC;
    }
  }
  puStack_70 = puVar7 + 3;
  puStack_6c = puVar7;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar8 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar8 + 3 != (unsigned int *)0x0) {
      puVar8[4] = uVar1;
      puVar8[6] = uVar2;
      puVar8[5] = 5;
      puVar8[3] = &lbl_821AC6F8;
    }
  }
  puStack_70 = puVar8 + 3;
  puStack_6c = puVar8;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar9 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (unsigned int *)0x0) {
      puVar9[4] = uVar1;
      puVar9[6] = uVar2;
      puVar9[5] = 1;
      puVar9[3] = &lbl_821AC6B8;
    }
  }
  puStack_70 = puVar9 + 3;
  puStack_6c = puVar9;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar10 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar10[2] = 1;
    *puVar10 = &lbl_821AD588;
    if (puVar10 + 3 != (unsigned int *)0x0) {
      puVar10[4] = uVar1;
      puVar10[6] = uVar2;
      puVar10[5] = 6;
      puVar10[3] = &lbl_821AC654;
    }
  }
  puStack_70 = puVar10 + 3;
  puStack_6c = puVar10;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  puVar11 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar11 == (unsigned int *)0x0) {
    puVar11 = (unsigned int *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821AD588;
    if (puVar11 + 3 != (unsigned int *)0x0) {
      puVar11[4] = uVar1;
      puVar11[6] = uVar2;
      puVar11[5] = 7;
      puVar11[3] = &lbl_821AC678;
    }
  }
  puStack_70 = puVar11 + 3;
  puStack_6c = puVar11;
  uVar4 = fn_82365BD8(auStack_68,&puStack_70);
  fn_822C64E0(param_1,uVar4);
  if (puVar11 != (unsigned int *)0x0) {
    fn_822315A0(puVar11);
  }
  if (puVar10 != (unsigned int *)0x0) {
    fn_822315A0(puVar10);
  }
  if (puVar9 != (unsigned int *)0x0) {
    fn_822315A0(puVar9);
  }
  if (puVar8 != (unsigned int *)0x0) {
    fn_822315A0(puVar8);
  }
  if (puVar7 != (unsigned int *)0x0) {
    fn_822315A0(puVar7);
  }
  if (puVar6 != (unsigned int *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar5 != (unsigned int *)0x0) {
    fn_822315A0(puVar5);
  }
  return param_1;
}

