extern int fn_83021C40();


unsigned __int64 fn_83001F78(int *param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 2;
  if ((param_1[0x1e] != 0) && (uVar1 = fn_83021C40(param_1[0x1e]), (int)uVar1 == 1)) {
    (**(int (***)())(*param_1 + 0x50))(param_1);
  }
  return uVar1;
}

