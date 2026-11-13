extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5B48();
extern int fn_82BE6718();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8322B1D8;


unsigned __int64 fn_82BEB8C0(int param_1)

{
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  __int64 lVar2;
  
  iVar3 = fn_82BEA200((unsigned __int64)lbl_8322B1D8 + 0x2c,*(unsigned int *)(param_1 + 0xc));
  if (iVar3 == 0) {
    uVar1 = 0x2c0;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar1 = 0x3ea;
    }
    else {
      iVar3 = param_1 + 0x14;
      fn_82BE5340(iVar3);
      while (lVar2 = fn_82BE5378(iVar3), lVar2 != 0) {
        iVar4 = fn_82BE5B48(lVar2);
        if (iVar4 != 0) {
          fn_82BE6718(lVar2);
        }
        fn_82BE5350(iVar3);
      }
      uVar1 = 0;
    }
    fn_82BEA230((unsigned __int64)lbl_8322B1D8 + 0x2c,*(unsigned int *)(param_1 + 0xc));
  }
  return uVar1;
}

