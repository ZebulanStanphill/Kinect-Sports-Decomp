extern int fn_82F6C060();


unsigned __int64 fn_826E9C58(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (param_3 == 0) {
LAB_826e9c98:
    uVar2 = 0;
    iVar1 = (**(int (***)())(*param_1 + 0x10))(param_1);
    if ((int)param_2 == iVar1) goto LAB_826e9cd4;
  }
  else if (param_3 == 1) {
    uVar2 = 1;
  }
  else {
    if (2 < param_3) goto LAB_826e9c98;
    uVar2 = 2;
  }
  iVar1 = fn_82F6C060(param_1[4],param_2,uVar2);
  if (iVar1 != 0) {
    return 0xffffffffffffffff;
  }
LAB_826e9cd4:
  uVar2 = (**(int (***)())(*param_1 + 0x10))(param_1);
  return uVar2;
}

