typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BBFD60();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC5538();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int uStack_50;


void fn_82BAD8A8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uStack_50;
  
  if (**(char **)(param_1 + 0x10) != '\0') goto LAB_82badbdc;
  iVar5 = (**(int (***)())(**(int **)(param_1 + 0x88) + 4))();
  if (iVar5 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df9e0,0xffffffff820df268,0x1ab);
  }
  lVar9 = 0;
  bVar3 = true;
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 100) + 4);
  if (uVar1 - 1 < uVar1) {
    piVar6 = (int *)((uVar1 - 1) * 4 + *(int *)(*(int *)(param_2 + 100) + 8));
  }
  else {
    piVar6 = (int *)0x0;
  }
  iVar5 = *piVar6;
  if (iVar5 == 3) {
LAB_82bad974:
    if (iVar5 == 0) goto LAB_82bad97c;
  }
  else {
    if (iVar5 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df9a4,0xffffffff820df268,0x1b0);
      goto LAB_82bad974;
    }
LAB_82bad97c:
    bVar3 = false;
    if (*(int *)(*(int *)(param_2 + 100) + 4) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df980,0xffffffff820df268,0x1b3);
    }
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x88) + 0xa8);
  if (uVar1 == 0) {
    uVar4 = ((-(unsigned __int64)bVar3 & 0xfffffff9) << 0x20 | -(unsigned __int64)bVar3 & 0xffffffd9) + 0x53;
  }
  else if (uVar1 == 1) {
    uVar4 = ((-(unsigned __int64)bVar3 & 0xfffffff9) << 0x20 | -(unsigned __int64)bVar3 & 0xffffffd9) + 0x54;
  }
  else if (uVar1 < 3) {
    uVar4 = ((-(unsigned __int64)bVar3 & 0xfffffff9) << 0x20 | -(unsigned __int64)bVar3 & 0xffffffd9) + 0x55;
  }
  else if (uVar1 == 3) {
    uVar4 = ((-(unsigned __int64)bVar3 & 0xfffffff9) << 0x20 | -(unsigned __int64)bVar3 & 0xffffffd9) + 0x56;
  }
  else {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x1c9);
    uVar4 = (unsigned __int64)uStack_50;
  }
  piVar6 = (int *)fn_82BC24F0(uVar4,*(unsigned int *)(param_1 + 0xc));
  if (bVar3) {
    iVar5 = fn_82BA92B0(param_2);
    if (iVar5 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x1cf);
    }
    iVar2 = *(int *)(iVar5 + 0x38);
    piVar6[0x14] = 0;
    piVar6[0xe] = iVar2;
    piVar6[0x20] = lbl_820DF0C4;
    fn_82BA05E8(piVar6,1,iVar5);
    uVar8 = 2;
    piVar6[0x21] = lbl_820DF0D0;
  }
  else {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      iVar5 = fn_82BA92B0(param_2);
      if (iVar5 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x1dd);
      }
      iVar5 = *(int *)(iVar5 + 0x38);
      piVar6[0x14] = 0;
      piVar6[0xe] = iVar5;
      iVar5 = lbl_820DF0C4;
    }
    else {
      piVar6[0xe] = 0;
      piVar6[0x14] = 0;
      iVar5 = lbl_820DF0C0;
    }
    piVar6[0x20] = iVar5;
    uVar8 = 1;
  }
  fn_82BA05E8(piVar6,uVar8,*(unsigned int *)(*(int *)(param_1 + 0x88) + 0xec));
  do {
    iVar5 = *piVar6;
    uVar8 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0x50))(*(int **)(param_1 + 0x88),1,3);
    (**(int (***)())(iVar5 + 0x58))(piVar6,(!bVar3 ^ 1) + 1,lVar9,uVar8);
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 < 4);
  if (*(char *)(*(int *)(param_1 + 0x88) + 0x99) != '\0') {
    *(unsigned char *)((int)piVar6 + (!bVar3 ^ 1) + 0x99) = 1;
  }
  fn_82BC5538(param_1,piVar6);
  fn_82BBFD60(*(unsigned int *)(param_1 + 0x88));
LAB_82badbdc:
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  puVar7 = (unsigned int *)
           fn_82BC0088(*(int *)(param_2 + 100),*(unsigned int *)(*(int *)(param_2 + 100) + 4));
  *puVar7 = 3;
  return;
}

