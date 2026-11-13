extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern int fn_82BEA200();
extern int fn_82BEA230();


unsigned __int64 fn_82BE7220(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  iVar2 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e9890);
  if (iVar2 == 0) {
    uVar1 = 0x2c0;
  }
  else {
    iVar2 = param_1 + 0x14;
    fn_82BE5340(iVar2);
    while (iVar3 = fn_82BE5378(iVar2), iVar3 != 0) {
      if (iVar3 == param_2) {
        fn_82BE5398(iVar2,*(unsigned int *)(param_1 + 0x1c),1);
        uVar1 = 0;
        goto LAB_82be72a8;
      }
      fn_82BE5350();
    }
    uVar1 = 0x2bf;
LAB_82be72a8:
    fn_82BEA230(param_1 + 0x2c,0xffffffff820e9890);
  }
  return uVar1;
}

