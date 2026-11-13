extern int fn_8245B9A8();
extern int fn_8245CEB0();
extern int fn_82579EF0();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern unsigned int lbl_821BAE9C;


void fn_8245B7C8(int param_1)

{
  int iVar5;
  unsigned __int64 uVar1;
  unsigned int *puVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar7;
  __int64 lVar4;
  int iVar8;
  
  fn_8245B9A8();
  iVar8 = param_1 + 0x6c8;
  iVar5 = fn_82579EF0(iVar8,0xffffffff821bac3c,1);
  uVar1 = fn_82579EF0(iVar8,0xffffffff821bac58,64000);
  puVar6 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    puVar6[4] = iVar5;
    puVar6[5] = (int)uVar1;
    puVar6[1] = 0;
    *puVar6 = &lbl_821BAE9C;
    puVar6[2] = 0;
    puVar6[3] = 0;
    fn_8245CEB0(puVar6);
  }
  *(unsigned int **)(param_1 + 0x568) = puVar6;
  iVar5 = fn_82579EF0(iVar8,0xffffffff821bac6c,1);
  uVar2 = fn_82579EF0(iVar8,0xffffffff821bac94,64000);
  puVar6 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    puVar6[4] = iVar5;
    puVar6[5] = (int)uVar2;
    puVar6[1] = 0;
    *puVar6 = &lbl_821BAE9C;
    puVar6[2] = 0;
    puVar6[3] = 0;
    fn_8245CEB0(puVar6);
  }
  *(unsigned int **)(param_1 + 0x56c) = puVar6;
  if ((uVar1 & 0xffffffff) <= (uVar2 & 0xffffffff)) {
    uVar1 = uVar2;
  }
  uVar3 = fn_82579EF0(iVar8,0xffffffff821bacb4,64000);
  puVar6 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    uVar7 = fn_8265CA60(uVar3);
    *puVar6 = uVar7;
    puVar6[1] = (int)uVar3;
    puVar6[2] = 0;
  }
  *(unsigned int **)(param_1 + 0x564) = puVar6;
  lVar4 = fn_82579EF0(iVar8,0xffffffff821babac,64000);
  if ((uVar1 & 0xffffffff) <= (lVar4 + 0x5aU & 0xffffffff)) {
    uVar1 = lVar4 + 0x5aU;
  }
  puVar6 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    uVar7 = fn_8265CA60(uVar1 + 0x3d);
    *puVar6 = uVar7;
    puVar6[1] = (int)(uVar1 + 0x3d);
    puVar6[2] = 0;
  }
  *(unsigned int **)(param_1 + 0x560) = puVar6;
  return;
}

