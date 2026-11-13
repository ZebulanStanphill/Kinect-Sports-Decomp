extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828AB448(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_4 + 8);
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 100);
    uVar2 = uVar2 - *(unsigned int *)(param_1 + 0x5c);
  }
  else {
    uVar1 = fn_828EA268(uVar2);
    if ((int)uVar1 == 0) {
      uVar1 = 1;
    }
    fn_8223C478(param_3,5,0);
    fn_828E9DB8(param_3,uVar1 - 1,5);
  }
  fn_8223C478(param_3,uVar1,0);
  fn_828E9DB8(param_3,uVar2,uVar1);
  return;
}

