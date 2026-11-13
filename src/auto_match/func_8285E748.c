extern int fn_82810360();
extern int fn_8285A830();
extern int fn_8285AAF0();
extern int fn_8285D2C0();
extern int fn_8285E650();
extern int fn_828602F8();
extern int fn_82860750();


void fn_8285E748(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_8285A830();
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar2 = iVar1 + 0x14;
    fn_8285D2C0(iVar2);
    fn_8285AAF0(param_1,param_2,iVar2);
    iVar2 = fn_82860750(param_1,param_2,iVar2);
    if (iVar2 == 0) {
      return;
    }
    *(unsigned int *)(iVar1 + 0x10) = 1;
  }
  else {
    if (*(int *)(iVar1 + 0x10) != 1) {
      return;
    }
    iVar2 = iVar1 + 0x14;
    fn_82810360(iVar2,iVar1 + 0x20);
    fn_8285D2C0(iVar2);
    fn_8285AAF0(param_1,param_2,iVar2);
    fn_828602F8(param_1,param_2,iVar1 + 0x20,iVar2);
  }
  fn_8285E650(param_1,param_2);
  return;
}

