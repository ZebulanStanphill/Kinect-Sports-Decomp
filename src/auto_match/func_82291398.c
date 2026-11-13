extern unsigned int *auStack_a2e;
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82279CA0();
extern int fn_822912A8();
extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_8219860C;
extern unsigned int uStack_a30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82291398(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar8;
  double dVar9;
  int aiStack_c60 [4];
  unsigned char **ppuStack_c50;
  int *piStack_c4c;
  unsigned char ***pppuStack_c40;
  unsigned short uStack_a30;
  unsigned char auStack_a2e [2606];
  
  iVar6 = 0;
  uVar8 = 0xffffffff82196582;
  if (param_2 == 0) {
    iVar6 = 0;
    uVar8 = 0xffffffff821a9cfc;
  }
  else if (param_2 == 1) {
    iVar6 = 1;
    uVar8 = 0xffffffff821a9d04;
  }
  else if (param_2 < 3) {
    iVar6 = 2;
    uVar8 = 0xffffffff821a9d14;
  }
  fn_8225F160();
  piStack_c4c = aiStack_c60;
  pppuStack_c40 = &ppuStack_c50;
  ppuStack_c50 = &lbl_8219860C;
  aiStack_c60[0] = iVar6;
  uVar3 = fn_8225C590();
  fn_8225DB68(uVar3,&ppuStack_c50);
  if (aiStack_c60[0] == iVar6) {
    iVar4 = fn_8225F160();
    iVar1 = *(int *)(iVar4 + 0x38);
    *(int *)(iVar4 + 0x38) = iVar6;
    if (iVar6 != iVar1) {
      fn_828B2BF8();
      fn_828B25C8();
    }
    fn_822912A8(param_1,iVar6);
    fn_82279CA0(param_1,1);
    *(unsigned int *)(param_1 + 0x160) = 1;
    dVar9 = (double)*(float *)(param_1 + 0x16c);
    uVar2 = *(unsigned int *)(param_1 + 0x170);
    pcVar5 = (char *)fn_8225F670();
    if (*pcVar5 != '\0') {
      iVar6 = fn_8225FDE0(0x69,1);
      if ((iVar6 == 0) && (cVar7 = fn_82E1CAD0(0x69), cVar7 != '\0')) {
        fn_82E1CC60(dVar9,0xffffffff821a7a04);
        fn_82E1CB08(0xffffffff821a7a18,uVar8,0);
        fn_82E1CB88(0xffffffff821a7a28,uVar2);
        fn_82E1CCA8();
      }
    }
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    return;
  }
  fn_82279CA0(param_1,1);
  uStack_a30 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_a2e,0,0x1fe);
}

