extern int fn_8268EAC0();
extern int fn_8270B030();
extern __int64 fn_8270B4A0();


unsigned __int64 fn_8270B780(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  int lVar3;
  
  iVar2 = fn_8270B030(param_1 + 0x44);
  fn_8268EAC0(param_1 + 0x4c,iVar2,param_2,param_3,param_4);
  lVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x18) - 1;
  *(int *)(iVar2 + 0x18) = (int)lVar3;
  if (lVar3 == 0) {
    uVar1 = fn_8270B4A0(param_1,iVar2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

