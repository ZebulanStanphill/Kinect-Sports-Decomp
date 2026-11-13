extern int fn_82BE64E0();
extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE6C60();


unsigned __int64 fn_82BF5528(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BE6720(param_1,0x21,0);
  if ((((iVar2 == 0) ||
       (iVar2 = fn_82BE6760(param_1,*(unsigned short *)(param_1 + 0x50),0), iVar2 == 0)) ||
      (iVar2 = fn_82BE6720(param_1,0x29,0), iVar2 == 0)) ||
     ((iVar2 = fn_82BE6760(param_1,*(unsigned short *)(param_1 + 0x52),0), iVar2 == 0 ||
      (iVar2 = fn_82BE6C60(param_1,0xd3,1,1), iVar2 == 0)))) {
    uVar1 = 0;
  }
  else {
    fn_82BE64E0(param_1,2);
    uVar1 = 1;
  }
  return uVar1;
}

