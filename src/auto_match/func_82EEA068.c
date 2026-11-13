extern int fn_82A1E810();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82EEA068(int param_1)

{
  unsigned int uVar1;
  int lVar2;
  int iVar3;
  
  iVar3 = param_1 + 4;
  fn_82E50CB8(iVar3);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) - 1;
  *(int *)(param_1 + 0x48) = (int)lVar2;
  if (lVar2 == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x40);
    fn_82E50F10(iVar3);
    fn_82A1E810(uVar1);
  }
  else {
    fn_82E50F10(iVar3);
  }
  return 0;
}

