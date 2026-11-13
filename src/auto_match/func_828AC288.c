extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA290();


void fn_828AC288(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
    uVar2 = (unsigned __int64)*param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  }
  else {
    uVar1 = fn_828EA290(*param_3);
    if ((int)uVar1 == 0) {
      uVar1 = 1;
    }
    fn_8223C478(param_2,5,0);
    fn_828E9DB8(param_2,uVar1 - 1,5);
    uVar2 = (unsigned __int64)*param_3;
  }
  fn_8223C478(param_2,uVar1,0);
  fn_828E9DB8(param_2,uVar2,uVar1);
  return;
}

