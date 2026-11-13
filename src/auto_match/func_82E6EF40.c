int fn_82E6EF40(int *param_1,int *param_2)

{
  int uVar1;

  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else if (*(unsigned __int64 *)(param_1 + 0x12) > 0) {
    uVar1 = 0xc00d4650;
  } else {
    if ((int *)param_1[0xb] != (int *)0x0) {
      (*(int (**)())(*(int *)param_1[0xb] + 8))(param_1[0xb]);
      param_1[0xb] = 0;
    }
    param_1[0xb] = (int)param_2;
    (*(int (**)())(*param_2 + 4))(param_2);
    uVar1 = (*(int (**)())(*param_1 + 0x14))(param_1);

  }
  return uVar1;
}

