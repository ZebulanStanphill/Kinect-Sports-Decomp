extern unsigned int *auStack_98;
extern int fn_822315A0();
extern int fn_822C64E0();
extern int fn_822E7EB0();
extern int fn_822E7F80();
extern int fn_822EB430();
extern int fn_822EFC50();
extern int fn_822F0CA0();
extern int fn_822F23C0();
extern int fn_822F33D0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE5C8;
extern unsigned int lbl_821AE5E8;
extern unsigned int lbl_821AE608;


void fn_822E68B8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int *puStack_a0;
  unsigned int *puStack_9c;
  unsigned char auStack_98 [152];
  
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  uVar4 = fn_8265C9E0(0x30);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822E7EB0(uVar4,uVar2,param_1,uVar3,0xffffffff831cd218,param_1 + 0x26c,uVar1);
  }
  puStack_9c = (unsigned int *)uVar4;
  puStack_a0 = (unsigned int *)((int)puStack_9c + 0xc);
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar7 = (unsigned int *)fn_8265C9E0(0x54);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (unsigned int *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822EB430(puVar7 + 3,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar7 + 3;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar7;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  uVar6 = fn_8265C9E0(0x30);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_822E7F80(uVar6,uVar2,param_1,uVar3,0xffffffff831cd218,param_1 + 0x26c,uVar1);
  }
  puStack_9c = (unsigned int *)uVar6;
  puStack_a0 = (unsigned int *)((int)puStack_9c + 0xc);
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar8 = (unsigned int *)fn_8265C9E0(0x60);
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821A8D8C;
    if (puVar8 + 4 != (unsigned int *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822EFC50(puVar8 + 4,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar8 + 4;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar8;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar9 = (unsigned int *)fn_8265C9E0(0x44);
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (unsigned int *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822F0CA0(puVar9 + 3,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar9 + 3;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar9;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar10 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar12 = puVar10 + 3;
    puVar10[2] = 1;
    *puVar10 = &lbl_821AD588;
    if (puVar12 != (unsigned int *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar12,uVar2,6,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar12 = &lbl_821AE5C8;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar10 + 3;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar10;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar12 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar12 == (unsigned int *)0x0) {
    puVar12 = (unsigned int *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar13 = puVar12 + 3;
    puVar12[2] = 1;
    *puVar12 = &lbl_821AD588;
    if (puVar13 != (unsigned int *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar13,uVar2,7,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar13 = &lbl_821AE5E8;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar12 + 3;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar12;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar13 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar13 == (unsigned int *)0x0) {
    puVar13 = (unsigned int *)0x0;
  }
  else {
    puVar13[1] = 1;
    puVar14 = puVar13 + 3;
    puVar13[2] = 1;
    *puVar13 = &lbl_821AD588;
    if (puVar14 != (unsigned int *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar14,uVar2,8,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar14 = &lbl_821AE608;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar13 + 3;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar13;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(unsigned int *)(param_1 + 0x1a8);
  uVar2 = *(unsigned int *)(param_1 + 0x114);
  uVar3 = *(unsigned int *)(param_1 + 0x1bc);
  puVar14 = (unsigned int *)fn_8265C9E0(0xe0);
  if (puVar14 == (unsigned int *)0x0) {
    puVar14 = (unsigned int *)0x0;
  }
  else {
    puVar14[1] = 1;
    puVar14[2] = 1;
    *puVar14 = &lbl_821A8D8C;
    if (puVar14 + 4 != (unsigned int *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822F33D0(puVar14 + 4,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar14 + 4;
  uVar1 = *(unsigned int *)(param_1 + 0x110);
  puStack_9c = puVar14;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  if (puVar14 != (unsigned int *)0x0) {
    fn_822315A0(puVar14);
  }
  if (puVar13 != (unsigned int *)0x0) {
    fn_822315A0(puVar13);
  }
  if (puVar12 != (unsigned int *)0x0) {
    fn_822315A0(puVar12);
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
  if ((uVar6 & 0xffffffff) != 0) {
    fn_822315A0(uVar6);
  }
  if (puVar7 != (unsigned int *)0x0) {
    fn_822315A0(puVar7);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822315A0(uVar4);
  }
  return;
}

