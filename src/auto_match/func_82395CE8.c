extern int fn_82250A18();
extern int fn_822ABBF0();
extern int fn_822FAF40();
extern int fn_82359698();
extern int fn_82366AE8();
extern int fn_82396088();
extern int fn_82396518();
extern int fn_82396F50();
extern int fn_82397820();
extern int fn_82397BA8();
extern int fn_82399730();
extern int fn_8239FF60();
extern int fn_824CCD80();
extern int fn_825603C8();
extern int fn_825604A0();
extern int iRam831c996c;
extern unsigned int lbl_821B518C;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


void fn_82395CE8(int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piVar6;
  double dVar7;
  unsigned char **appuStack_60 [24];
  
  param_1[0xa8] = 1;
  param_1[0x3c] = 1;
  dVar7 = (double)ltcg_pool_0_0f;
  param_1[0x21e] = (int)ltcg_pool_0_0f;
  fn_82396F50();
  fn_82396518(param_1);
  puVar1 = (unsigned int *)param_1[0xb8];
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  param_1[0xb8] = 0;
  fn_82397820(param_1);
  param_1[0x81] = (int)(float)dVar7;
  param_1[0x85] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 1;
  param_1[0x83] = param_1[0xaa];
  fn_82397BA8(param_1);
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  fn_82359698(param_1,2);
  fn_8239FF60(param_1[0xb7],0x13);
  fn_822FAF40(param_1 + 0x2ec);
  appuStack_60[0] = &lbl_821B518C;
  puVar1 = (unsigned int *)param_1[2];
  for (piVar6 = (int *)*puVar1; piVar6 < (int *)puVar1[1]; piVar6 = piVar6 + 1) {
    puVar2 = (unsigned int *)*piVar6;
    for (puVar5 = (unsigned int *)*puVar2; puVar5 < (unsigned int *)puVar2[1]; puVar5 = puVar5 + 1) {
      fn_822ABBF0(*puVar5,appuStack_60);
    }
  }
  fn_82359698(param_1,2);
  iRam831c996c = iRam831c996c + 1;
  if ((param_2 == 0) && (param_3 == 0)) {
    fn_82399730(param_1);
  }
  uVar4 = 1;
  if (param_1[0x5e] != 0) {
    uVar4 = 0xb;
  }
  fn_8239FF60(param_1[0xb7],uVar4);
  fn_82396088(param_1);
  iVar3 = (**(int (***)())(*param_1 + 200))(param_1);
  if (iVar3 == 0) {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (*(char *)(iVar3 + 4) == '\0') {
      iVar3 = *(int *)param_1[0xc];
      if (*(int *)(iVar3 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(unsigned int *)(iVar3 + 0x10));
        fn_825603C8(uVar4,iVar3 + 0x20,1);
        *(unsigned int *)(iVar3 + 0x22c) = 1;
      }
      iVar3 = *(int *)(param_1[0xc] + 8);
    }
    else {
      fn_82366AE8(*(unsigned int *)param_1[0xc],param_1[0x33] == 0);
      iVar3 = *(int *)(param_1[0xc] + 8);
      if (*(int *)(iVar3 + 0x22c) != 0) {
        fn_825604A0(iVar3 + 0x20);
        *(unsigned int *)(iVar3 + 0x22c) = 0;
      }
      fn_82366AE8(*(unsigned int *)(param_1[0xc] + 0x10),param_1[0x33] == 1);
      iVar3 = *(int *)(param_1[0xc] + 0x18);
    }
    if (*(int *)(iVar3 + 0x22c) != 0) {
      fn_825604A0(iVar3 + 0x20);
      *(unsigned int *)(iVar3 + 0x22c) = 0;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (*(char *)(iVar3 + 4) == '\0') {
      iVar3 = *(int *)param_1[0xc];
      if (*(int *)(iVar3 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(unsigned int *)(iVar3 + 0x10));
        fn_825603C8(uVar4,iVar3 + 0x20,1);
        *(unsigned int *)(iVar3 + 0x22c) = 1;
      }
      iVar3 = *(int *)(param_1[0xc] + 8);
      if (*(int *)(iVar3 + 0x22c) != 1) {
        uVar4 = fn_824CCD80(*(unsigned int *)(iVar3 + 0x10));
        fn_825603C8(uVar4,iVar3 + 0x20,1);
        *(unsigned int *)(iVar3 + 0x22c) = 1;
      }
    }
    else {
      fn_82366AE8(*(unsigned int *)param_1[0xc],param_1[0x33] == 0);
      fn_82366AE8(*(unsigned int *)(param_1[0xc] + 8),param_1[0x33] == 1);
    }
  }
  return;
}

