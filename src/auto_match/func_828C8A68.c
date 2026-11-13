extern int fn_8223C478();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_828C8A68(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar1,8);
  fn_828B5C88(param_1 + 0x84,*(unsigned int *)(param_1 + 0x6c),param_2);
  return;
}

