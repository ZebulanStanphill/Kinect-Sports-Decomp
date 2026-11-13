extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_8238F6F8(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = *param_3;
  if (iVar2 == -1) {
    iVar2 = 7;
  }
  uVar1 = *(unsigned int *)(param_1 + 8);
  fn_8223C478(param_2,uVar1,0);
  fn_828E9DB8(param_2,iVar2,uVar1);
  return;
}

