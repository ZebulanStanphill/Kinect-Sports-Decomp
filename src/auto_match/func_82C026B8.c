extern int fn_82C02288();
extern int fn_82C088D8();


void fn_82C026B8(int *param_1,int *param_2)

{
  __int64 lVar1;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  (**(int (***)())(*param_2 + 4))(param_2);
  (**(int (***)())(*param_1 + 0x4c))(param_1);
  param_1[0xd] = (int)param_2;
  lVar1 = fn_82C088D8(param_1);
  param_1[0x82] = (int)lVar1;
  if (-1 < (int)-(unsigned int)(lVar1 == 0)) {
    fn_82C02288(param_1);
  }
  return;
}

