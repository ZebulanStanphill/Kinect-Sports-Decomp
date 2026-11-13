extern int fn_82A21368();
extern int fn_82A214B0();
extern int fn_82A23408();
extern int fn_82A234F0();
extern unsigned int lbl_83219B94;


unsigned int fn_82A23880(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = fn_82A23408(lbl_83219B94,0,0xffffffff820892c4,6,0);
  if (iVar1 == 0) {
    iVar1 = fn_82A234F0(lbl_83219B94,0,0xffffffff820892c4,6);
    if (iVar1 == 0) {
      return 0;
    }
    *(unsigned int *)(iVar1 + 8) = 0;
    *(unsigned int *)(iVar1 + 0x1c) = *(unsigned int *)(iVar1 + 0x1c) | 0x80;
    fn_82A21368(lbl_83219B94,iVar1);
  }
  uVar3 = *(int *)(iVar1 + 8) + 1;
  *(unsigned int *)(iVar1 + 8) = uVar3;
  uVar3 = uVar3 & 0xff;
  iVar2 = fn_82A234F0(lbl_83219B94,0,param_1,0x10);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 8) = uVar3;
    *(unsigned int *)(iVar2 + 0x1c) = *(unsigned int *)(iVar2 + 0x1c) | 0x80;
    fn_82A21368(lbl_83219B94,iVar2);
  }
  fn_82A21368(lbl_83219B94,iVar1);
  fn_82A214B0(lbl_83219B94,iVar1);
  fn_82A214B0(lbl_83219B94,iVar2);
  return uVar3;
}

