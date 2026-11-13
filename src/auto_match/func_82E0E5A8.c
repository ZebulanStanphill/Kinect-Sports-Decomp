extern int fn_82CFD4F0();
extern int fn_82D04AB8();
extern int fn_82D04C78();


void fn_82E0E5A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  fn_82D04AB8(param_3,0xffffffff82196582);
  iVar1 = (int)param_1;
  if (((iVar1 < 1) || (0x12 < iVar1)) && (iVar1 != 0x1e)) {
    if ((iVar1 == 0x18) || (iVar1 == 0x1f)) {
      iVar1 = fn_82CFD4F0(param_2);
      fn_82D04AB8(param_3,*(unsigned int *)(iVar1 + 4));
    }
  }
  else {
    if ((iVar1 == 1) || ((0xb < iVar1 && (iVar1 < 0x13)))) {
      fn_82D04AB8(param_3,0xffffffff821ac4b4);
    }
    iVar1 = fn_82CFD4F0(param_1);
    fn_82D04C78(param_3,*(unsigned int *)(iVar1 + 4));
  }
  return;
}

