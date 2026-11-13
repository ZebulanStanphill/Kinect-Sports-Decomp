extern int fn_82A99B70();


void fn_82A99D88(unsigned __int64 param_1,unsigned __int64 param_2,char *param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  fn_82A99B70(param_1,0xffffffff820d288c,param_2);
  if (*param_3 != '\0') {
    do {
      cVar1 = *param_3;
      if (cVar1 == '\"') {
        uVar3 = 0xffffffff82005c50;
LAB_82a99e58:
        fn_82A99B70(param_1,uVar3);
      }
      else {
        if (cVar1 == '&') {
          uVar2 = 0xffffffff82005c60;
        }
        else {
          uVar2 = 0xffffffff82005c58;
          if (((cVar1 != '\'') && (uVar2 = 0xffffffff82005c40, cVar1 != '<')) &&
             (uVar2 = 0xffffffff82005c48, uVar3 = 0xffffffff821ce318, cVar1 != '>'))
          goto LAB_82a99e58;
        }
        fn_82A99B70(param_1,uVar2);
      }
      param_3 = param_3 + 1;
    } while (*param_3 != '\0');
  }
  fn_82A99B70(param_1,0xffffffff8200c4f8);
  return;
}

