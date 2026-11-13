extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BAD830();
extern int fn_82BB1DA0();
extern int fn_82BBFD60();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int iStack_50;
extern unsigned int lbl_820540D0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int lbl_820DFA04;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BADC08(int param_1,int param_2,char *param_3)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  int *piVar8;
  double dVar9;
  int iStack_50;
  
  if (**(char **)(param_1 + 0x10) != '\0') goto LAB_82badec8;
  uVar2 = *(unsigned int *)(*(int *)(param_2 + 100) + 4);
  if (uVar2 - 1 < uVar2) {
    piVar8 = (int *)((uVar2 - 1) * 4 + *(int *)(*(int *)(param_2 + 100) + 8));
  }
  else {
    piVar8 = (int *)0x0;
  }
  iVar3 = *piVar8;
  if (iVar3 != 3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfa08,0xffffffff820df268,0x217);
  }
  iVar6 = (**(int (***)())(**(int **)(param_1 + 0x88) + 4))();
  if (iVar6 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df9e0,0xffffffff820df268,0x21a);
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x88) + 0xa8);
  if (iVar6 == 1) {
    iStack_50 = *(int *)(*(int *)(param_1 + 0x88) + 0xec);
  }
  else {
    if (iVar6 == 0) {
      uVar5 = 0x5b;
LAB_82badd34:
      iStack_50 = fn_82BC24F0(uVar5,*(unsigned int *)(param_1 + 0xc));
    }
    else {
      if (iVar6 == 2) {
        uVar5 = 0x5c;
        goto LAB_82badd34;
      }
      if (iVar6 == 3) {
        uVar5 = 0x5d;
        goto LAB_82badd34;
      }
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x22c);
    }
    *(unsigned int *)(iStack_50 + 0x84) = *(unsigned int *)(*(int *)(param_1 + 0x88) + 0x84);
    *(unsigned char *)((unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x88) + 0x99) + iStack_50 + 0x98) = 1;
    fn_82BA05E8(iStack_50,1,*(unsigned int *)(*(int *)(param_1 + 0x88) + 0xec));
    if (*(int *)(param_2 + 0x88) < 0) {
      uVar7 = fn_82BB1DA0(*(unsigned int *)(param_2 + 0x8c));
      *(unsigned int *)(param_2 + 0x88) = uVar7;
    }
    uVar7 = *(unsigned int *)(param_2 + 0x88);
    *(unsigned int *)(iStack_50 + 0x50) = 0;
    *(int *)(iStack_50 + 0x34) = iVar3;
    *(unsigned int *)(iStack_50 + 0x38) = uVar7;
    *(unsigned int *)(iStack_50 + 0xe4) = *(unsigned int *)(iStack_50 + 0xe4) & 0xfffffffb;
    fn_82BC5538(param_1,iStack_50);
  }
  iVar6 = fn_82BA92B0(param_2);
  uVar7 = *(unsigned int *)(iVar6 + 0x38);
  iVar6 = fn_82BC24F0(0x13,*(unsigned int *)(param_1 + 0xc));
  fn_82BA05E8(iVar6,1,iStack_50);
  fVar1 = lbl_820DFA04;
  if (*param_3 != '\0') {
    fVar1 = lbl_820540D0;
  }
  dVar9 = (double)fVar1;
  fn_82BC34D8(dVar9,dVar9,dVar9,iVar6,*(unsigned int *)(param_1 + 0x10),2);
  *(unsigned int *)(iVar6 + 0x38) = uVar7;
  *(unsigned int *)(iVar6 + 0x50) = 0;
  *(unsigned int *)(iVar6 + 0x80) = lbl_820DF0C4;
  *(int *)(iVar6 + 0x34) = iVar3;
  *(unsigned int *)(iVar6 + 0xe4) = *(unsigned int *)(iVar6 + 0xe4) | 4;
  fn_82BC5538(param_1,iVar6);
  iVar6 = fn_82BC24F0(0x5a,*(unsigned int *)(param_1 + 0xc));
  if (*(int *)(param_2 + 0x88) < 0) {
    uVar7 = fn_82BB1DA0(*(unsigned int *)(param_2 + 0x8c));
    *(unsigned int *)(param_2 + 0x88) = uVar7;
  }
  uVar4 = lbl_820DF0C4;
  uVar7 = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(iVar6 + 0x50) = 0;
  *(unsigned int *)(iVar6 + 0x38) = uVar7;
  *(unsigned int *)(iVar6 + 0x80) = uVar4;
  fn_82BA05E8(iVar6,1,iStack_50);
  *(unsigned int *)(iVar6 + 0x84) = lbl_820DF0D0;
  *(int *)(iVar6 + 0x34) = iVar3;
  *(unsigned int *)(iVar6 + 0xe4) = *(unsigned int *)(iVar6 + 0xe4) & 0xfffffffb;
  fn_82BC5538(param_1,iVar6);
  fn_82BBFD60(*(unsigned int *)(param_1 + 0x88));
LAB_82badec8:
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  fn_82BAD830(*(unsigned int *)(param_1 + 0x98),param_2);
  return;
}

