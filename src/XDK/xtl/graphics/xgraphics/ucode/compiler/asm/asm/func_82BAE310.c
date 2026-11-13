extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BAC8F8();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_820540D0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAE310(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if ((**(char **)(param_1 + 0x10) == '\0') && (*(char *)(*(int *)(param_1 + 0x88) + 0x8d) != '\0'))
  {
    iVar3 = fn_82BA92B0(param_2);
    uVar1 = *(unsigned int *)(iVar3 + 0x38);
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x8c) == '\0') {
      iVar3 = fn_82BC24F0(0x53,*(unsigned int *)(param_1 + 0xc));
      *(unsigned int *)(iVar3 + 0x38) = uVar1;
      *(unsigned int *)(iVar3 + 0x50) = 0;
      dVar5 = (double)lbl_821AAD20;
      *(unsigned int *)(iVar3 + 0x80) = lbl_820DF0C4;
      fn_82BC34D8(dVar5,dVar5,dVar5,iVar3,*(unsigned int *)(param_1 + 0x10),1);
      *(unsigned int *)(iVar3 + 0xe4) = *(unsigned int *)(iVar3 + 0xe4) & 0xfffffffb;
    }
    else {
      iVar4 = fn_82BC24F0(0x28,*(unsigned int *)(param_1 + 0xc));
      fn_82BA05E8(iVar4,1,iVar3);
      dVar5 = (double)lbl_820540D0;
      fn_82BC34D8(dVar5,dVar5,dVar5,iVar4,*(unsigned int *)(param_1 + 0x10),2);
      *(unsigned int *)(iVar4 + 0x38) = uVar1;
      *(unsigned int *)(iVar4 + 0x50) = 0;
      *(unsigned int *)(iVar4 + 0x80) = lbl_820DF0C4;
      *(unsigned int *)(iVar4 + 0xe4) = *(unsigned int *)(iVar4 + 0xe4) & 0xfffffffb;
      fn_82BC5538(param_1,iVar4);
      iVar3 = fn_82BC24F0(0x5a,*(unsigned int *)(param_1 + 0xc));
      uVar2 = lbl_820DF0C4;
      *(unsigned int *)(iVar3 + 0x38) = uVar1;
      *(unsigned int *)(iVar3 + 0x50) = 0;
      *(unsigned int *)(iVar3 + 0x80) = uVar2;
      fn_82BA05E8(iVar3,1,iVar4);
      *(unsigned int *)(iVar3 + 0x84) = lbl_820DF0D0;
      *(unsigned int *)(iVar3 + 0xe4) = *(unsigned int *)(iVar3 + 0xe4) & 0xfffffffb;
    }
    fn_82BC5538(param_1,iVar3);
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(unsigned char *)(param_1 + 0x7c));
  fn_82BAC8F8(param_2,*(unsigned int *)(*(int *)(param_1 + 0x88) + 0x88));
  return;
}

