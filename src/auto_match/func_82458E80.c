extern int fn_822315A0();
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82458910();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_83276584;


void fn_82458E80(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  fn_82458910(&iStack_78,*param_1,*(unsigned int *)(param_2 + 0x2c));
  fn_82458910(&iStack_80,*param_1,*(unsigned int *)(param_3 + 0x2c));
  uVar12 = lbl_83276584;
  uVar1 = *(unsigned int *)(iStack_80 + 0x68);
  uVar2 = *(unsigned int *)(iStack_80 + 0x60);
  uVar3 = *(unsigned int *)(iStack_80 + 0x34);
  uVar4 = *(unsigned int *)(iStack_80 + 0x48);
  uVar5 = *(unsigned int *)(iStack_80 + 0x4c);
  uVar6 = *(unsigned int *)(iStack_78 + 0x68);
  uVar7 = *(unsigned int *)(iStack_78 + 0x60);
  uVar8 = *(unsigned int *)(iStack_78 + 0x34);
  uVar9 = *(unsigned int *)(iStack_78 + 0x48);
  uVar10 = *(unsigned int *)(iStack_78 + 0x4c);
  uVar11 = param_1[0x16];
  pcVar13 = (char *)fn_8225F670();
  if (*pcVar13 != '\0') {
    iVar14 = fn_8225FDE0(0x16,1);
    if ((iVar14 == 0) && (cVar15 = fn_82E1CAD0(0x16), cVar15 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar12);
      fn_82E1CB88(0xffffffff821a7640,uVar11);
      fn_82E1CB88(0xffffffff821a7790,(unsigned __int64)uVar10 + (unsigned __int64)uVar9);
      fn_82E1CB88(0xffffffff821a77a4,uVar8);
      fn_82E1CB88(0xffffffff821a77b8,uVar7);
      fn_82E1CB88(0xffffffff821a77d0,uVar6);
      fn_82E1CB88(0xffffffff821a77e4,(unsigned __int64)uVar5 + (unsigned __int64)uVar4);
      fn_82E1CB88(0xffffffff821a77f8,uVar3);
      fn_82E1CB88(0xffffffff821a780c,uVar2);
      fn_82E1CB88(0xffffffff821a7824,uVar1);
      fn_82E1CCA8();
    }
  }
  param_1[0x16] = param_1[0x16] + 1;
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  return;
}

