extern int fn_82E7E7E0();
extern int fn_82E7F0F8();


unsigned __int64 fn_82EF47C8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    return 0xffffffff80004003;
  }
  fn_82E7F0F8(param_3);
  uVar2 = (**(int (***)())(*param_1 + 0x3c))(param_1,param_2,param_3);
  if ((int)uVar2 == -0x3ff2c173) {
    piVar1 = (int *)param_1[2];
    if (piVar1 == (int *)0x0) goto LAB_82ef4868;
    uVar2 = (**(int (***)())(*piVar1 + 0x1c))(piVar1,param_2,param_3);
  }
  if (-1 < (int)uVar2) {
    return uVar2;
  }
LAB_82ef4868:
  fn_82E7E7E0(param_3);
  return uVar2;
}

