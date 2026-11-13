extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();


void fn_82423728(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char uVar7;
  char *pcVar8;
  int iVar9;
  char cVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  
  iVar9 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar9 + 8);
  uVar1 = (*(int *)(iVar9 + 0xc) - iVar2) / 0x1ac;
  if (uVar1 < 4) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = *(unsigned int *)(iVar2 + 0x6ac);
    uVar12 = *(unsigned int *)(iVar2 + 0x534);
  }
  if (uVar1 < 3) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = *(unsigned int *)(iVar2 + 0x500);
    uVar14 = *(unsigned int *)(iVar2 + 0x388);
  }
  if (uVar1 < 2) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar15 = *(unsigned int *)(iVar2 + 0x354);
    uVar16 = *(unsigned int *)(iVar2 + 0x1dc);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (uVar7 = 1, *(int *)(iVar3 + 0x40) != 1)) {
    uVar7 = 0;
  }
  uVar4 = *(unsigned int *)(iVar9 + 0x408);
  uVar5 = *(unsigned int *)(iVar2 + 0x1a8);
  uVar6 = *(unsigned int *)(iVar2 + 0x30);
  pcVar8 = (char *)fn_8225F670();
  if (((*pcVar8 != '\0') && (iVar9 = fn_8225FDE0(0x4b,1), iVar9 == 0)) &&
     (cVar10 = fn_82E1CAD0(0x4b), cVar10 != '\0')) {
    fn_82E1CD30();
    fn_82E1CB88(0xffffffff821a6fd0,uVar4);
    fn_82E1CB40(0xffffffff821a685c,uVar7);
    fn_82E1CB88(0xffffffff821a6a40,uVar6);
    fn_82E1CB88(0xffffffff821a7294,uVar5);
    fn_82E1CB88(0xffffffff821a6fb0,uVar16);
    fn_82E1CB88(0xffffffff821a72ac,uVar15);
    fn_82E1CB88(0xffffffff821a6fc0,uVar14);
    fn_82E1CB88(0xffffffff821a72c8,uVar13);
    fn_82E1CB88(0xffffffff821a71ec,uVar12);
    fn_82E1CB88(0xffffffff821a72e4,uVar11);
    fn_82E1CCA8();
    fn_82E1CA30();
  }
  fn_8225F6D0();
  return;
}

