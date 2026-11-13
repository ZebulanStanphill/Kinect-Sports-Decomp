extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern int fn_82BE5B58();
extern int fn_82BE64E0();
extern int fn_82BEA200();
extern int fn_82BEA230();


__int64 fn_82BE72C0(int param_1)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e98b0);
  if ((int)lVar1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar3 = param_1 + 0x14;
      fn_82BE5340(iVar3);
      while (lVar1 = fn_82BE5378(iVar3), lVar1 != 0) {
        iVar2 = fn_82BE5B58(lVar1);
        if (iVar2 != 0) {
          fn_82BE5398(iVar3,*(unsigned int *)(param_1 + 0x1c),1);
          fn_82BE64E0(lVar1,0x100);
          goto LAB_82be7308;
        }
        fn_82BE5350();
      }
    }
    lVar1 = 0;
LAB_82be7308:
    fn_82BEA230(param_1 + 0x2c,0xffffffff820e98b0);
  }
  return lVar1;
}

