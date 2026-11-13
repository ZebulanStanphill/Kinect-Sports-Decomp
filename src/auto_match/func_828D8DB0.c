extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_828D8DB0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  fn_8223C478(param_2,4,0);
  fn_828E9DB8(param_2,uVar1,4);
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x84);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar1,0x10);
  }
  return;
}

