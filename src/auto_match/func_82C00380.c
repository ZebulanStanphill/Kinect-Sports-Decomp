extern int fn_82647448();
extern int fn_82BFFD78();


int fn_82C00380(int *param_1,int param_2)

{
  int uVar1;
  
  uVar1 = (*(int (**)())(*param_1 + 0x28))();
  if (uVar1 >= 0) {
    fn_82647448(param_2);
    param_1[0xe] = param_2;
    uVar1 = fn_82BFFD78(param_1);
    if (uVar1 >= 0) {
      return uVar1;
    }
  }
  (*(int (**)())(*param_1 + 0x2c))(param_1);
  return uVar1;
}

