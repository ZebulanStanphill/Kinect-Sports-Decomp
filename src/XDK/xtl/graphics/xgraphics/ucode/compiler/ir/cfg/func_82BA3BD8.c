extern int fn_828E0268();
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BAFA88();
extern int fn_82BBFDF0();
extern int fn_82BBFE50();
extern int fn_82BBFE78();
extern int fn_82BC61C0();
extern int fn_82BC6218();
extern int fn_82F68CC0();
extern unsigned int lbl_820E3190;
extern unsigned int lbl_820E3298;


unsigned char * fn_82BA3BD8(unsigned char *param_1,unsigned __int64 param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  __int64 lVar12;
  
  *(unsigned int *)(param_1 + 0x10) = param_3;
  uVar11 = 0;
  puVar9 = param_1 + 0x80;
  *param_1 = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  fn_82BBFDF0(puVar9);
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  fn_82F68CC0(param_1 + 0xb8,param_2,0x758);
  *(unsigned int *)(param_1 + 0x810) = 0;
  param_1[0x818] = 0;
  param_1[0x819] = 0;
  *(unsigned int *)(param_1 + 0x81c) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x824) = 0;
  lVar12 = 0x10;
  *(unsigned int *)(param_1 + 0x828) = 0;
  *(unsigned int *)(param_1 + 0x82c) = 0;
  *(unsigned int *)(param_1 + 0x830) = 0;
  *(unsigned int *)(param_1 + 0x864) = 0;
  *(unsigned int *)(param_1 + 0x868) = 0;
  *(unsigned int *)(param_1 + 0x86c) = 0;
  *(unsigned int *)(param_1 + 0x870) = 0;
  *(unsigned int *)(param_1 + 0x874) = 0;
  *(unsigned int *)(param_1 + 0x878) = 0;
  *(unsigned int *)(param_1 + 0x87c) = 0;
  *(int *)(param_1 + 0xc) = param_4;
  *(unsigned int *)(param_1 + 0x820) = 0xffffffff;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(unsigned char **)(param_4 + 0xab0) = param_1;
  uVar4 = *(unsigned int *)(param_4 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar4,0x30);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (unsigned int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828E0268(puVar3 + 1,param_4);
  }
  *(unsigned int *)(param_1 + 0xac) = uVar4;
  uVar4 = fn_82BA0FD8(0x400,*(unsigned int *)(param_4 + 0x5ac));
  *(unsigned int *)(param_1 + 0xb0) = uVar4;
  uVar4 = *(unsigned int *)(param_4 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar4,0x90);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (unsigned int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82BC61C0(puVar3 + 1,param_4);
  }
  *(unsigned int *)(param_1 + 0xa4) = uVar4;
  uVar4 = *(unsigned int *)(param_4 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar4,0x8c);
  *puVar3 = uVar4;
  if (puVar3 + 1 == (unsigned int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82BC6218(puVar3 + 1,param_4);
  }
  *(unsigned int *)(param_1 + 0xa8) = uVar4;
  uVar4 = *(unsigned int *)(param_4 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar4,0x14);
  puVar10 = puVar3 + 1;
  *puVar3 = uVar4;
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(unsigned int *)(param_4 + 0x5ac));
  }
  *(unsigned int **)(param_1 + 0x814) = puVar10;
  uVar4 = *(unsigned int *)(param_4 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar4,0x14);
  puVar10 = puVar3 + 1;
  *puVar3 = uVar4;
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar10,*(unsigned int *)(param_4 + 0x5ac));
  }
  *(unsigned int **)(param_1 + 0x60) = puVar10;
  param_1[0x860] = *(unsigned char *)(param_4 + 0x564);
  fn_82BAFA88(*(unsigned int *)(param_1 + 0xac));
  iVar1 = *(int *)(param_1 + 0xa4);
  fn_82BBFE78(puVar9,iVar1);
  *(unsigned char **)(iVar1 + 0x10) = param_1;
  iVar1 = *(int *)(param_1 + 0xa8);
  fn_82BBFE50(puVar9,iVar1);
  *(unsigned char **)(iVar1 + 0x10) = param_1;
  if (param_1[0x860] == '\0') {
    puVar8 = &lbl_820E3190;
  }
  else {
    puVar8 = &lbl_820E3298;
  }
  *(unsigned char **)(param_1 + 0x5c) = puVar8;
  uVar4 = *(unsigned int *)(*(int *)(param_4 + 0x550) + 4);
  uVar5 = fn_82BA0FD8(uVar4,*(unsigned int *)(param_4 + 0x5ac));
  *(unsigned int *)(param_1 + 0x858) = uVar5;
  uVar4 = fn_82BA0FD8(uVar4,*(unsigned int *)(param_4 + 0x5ac));
  puVar2 = *(unsigned int **)(param_1 + 0x858);
  *(unsigned int *)(param_1 + 0x85c) = uVar4;
  uVar7 = 0;
  if (*puVar2 != 0) {
    puVar6 = puVar2 + 1;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar2);
  }
  puVar2 = *(unsigned int **)(param_1 + 0x85c);
  if (*puVar2 != 0) {
    puVar6 = puVar2 + 1;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = 0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *puVar2);
  }
  uVar4 = fn_82B7BD28(*(unsigned int *)(param_4 + 0x5ac),
                            *(int *)(*(int *)(param_4 + 0x550) + 0x18) << 3);
  *(unsigned int *)(param_1 + 0x58) = uVar4;
  return param_1;
}

