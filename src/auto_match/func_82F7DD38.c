extern int fn_82F68CC0();
extern int fn_82F6E1C8();
extern int fn_82F861E0();


unsigned __int64
fn_82F7DD38(int param_1,int *param_2,int *param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = *param_2;
  if (param_1 == iVar2) {
    if (*param_3 == (int)param_4) {
      iVar2 = fn_82F6E1C8(iVar2,2);
      *param_3 = iVar2;
      if (iVar2 != 0) {
        *param_5 = 1;
        fn_82F68CC0(*param_3,param_4,*param_2);
LAB_82f7ddc0:
        *param_2 = *param_2 << 1;
        goto LAB_82f7ddcc;
      }
    }
    else {
      iVar2 = fn_82F861E0(*param_3,iVar2,2);
      if (iVar2 != 0) {
        *param_3 = iVar2;
        goto LAB_82f7ddc0;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_82f7ddcc:
    uVar1 = 1;
  }
  return uVar1;
}

