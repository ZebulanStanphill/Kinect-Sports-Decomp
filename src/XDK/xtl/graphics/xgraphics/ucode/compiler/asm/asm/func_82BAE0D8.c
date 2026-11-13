extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BAC818();
extern int fn_82BB1DA0();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_82BAE0D8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  double dVar8;
  unsigned int uStack_50;
  
  if ((*(char *)(param_1 + 0x8c) != '\0') || (*(char *)(param_1 + 0x8d) != '\0')) {
    iVar2 = fn_82BA92B0(param_2);
    iVar3 = *(int *)(param_2 + 100);
    uVar4 = *(unsigned int *)(iVar2 + 0x38);
    uVar1 = *(unsigned int *)(iVar3 + 4);
    if (uVar1 - 1 < uVar1) {
      piVar5 = (int *)((uVar1 - 1) * 4 + *(int *)(iVar3 + 8));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (*piVar5 == 0) {
      if (*(int *)(iVar3 + 4) != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df980,0xffffffff820df268,0x2a8);
      }
      if (**(char **)(param_1 + 0x10) == '\0') {
        iVar3 = fn_82BC24F0(0x53,*(unsigned int *)(param_1 + 0xc));
        *(unsigned int *)(iVar3 + 0x38) = uVar4;
        *(unsigned int *)(iVar3 + 0x50) = 0;
        dVar8 = (double)lbl_821AAD20;
        *(unsigned int *)(iVar3 + 0x80) = lbl_820DF0C4;
        fn_82BC34D8(dVar8,dVar8,dVar8,iVar3,*(unsigned int *)(param_1 + 0x10),1);
        *(unsigned int *)(iVar3 + 0xe4) = *(unsigned int *)(iVar3 + 0xe4) & 0xfffffffb;
        fn_82BC5538(param_1,iVar3);
      }
    }
    else if (**(char **)(param_1 + 0x10) == '\0') {
      uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x68) + 4);
      uVar7 = (unsigned __int64)uVar1;
      if (2 < (int)uVar1) {
        if ((int)uVar1 < 7) {
          uVar4 = fn_82BB1DA0();
          uVar7 = uVar7 - 3;
        }
        else {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x2bf);
          uVar7 = (unsigned __int64)uStack_50;
          uVar4 = uStack_50;
        }
      }
      piVar5 = (int *)fn_82BC43D8(0x66,*(unsigned int *)(param_1 + 0xc));
      piVar5[0xe] = uVar4;
      piVar5[0x14] = 0;
      piVar5[0x20] = lbl_820DF0C0;
      (**(int (***)())(*piVar5 + 0x54))(piVar5,0,uVar7,0);
      fn_82BA05E8(piVar5,1,iVar2);
      piVar5[0x21] = lbl_820DF0D0;
      piVar5[0x39] = piVar5[0x39] & 0xfffffffb;
      fn_82BC5538(param_1,piVar5);
      puVar6 = (unsigned int *)
               fn_82BC0088(*(int *)(param_2 + 0x68),
                                 *(unsigned int *)(*(int *)(param_2 + 0x68) + 4));
      *puVar6 = piVar5;
    }
    puVar6 = (unsigned int *)
             fn_82BC0088(*(int *)(param_2 + 100),*(unsigned int *)(*(int *)(param_2 + 100) + 4))
    ;
    *puVar6 = 3;
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  fn_82BAC818(param_2,*(unsigned int *)(param_1 + 0x88));
  return;
}

