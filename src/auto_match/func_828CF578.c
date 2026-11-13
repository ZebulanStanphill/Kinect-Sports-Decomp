extern int fn_8223C478();
extern int fn_82897B18();
extern int fn_828E9DB8();


void fn_828CF578(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    uVar3 = fn_82897B18(param_5);
    fn_8223C478(param_3,iVar1,0);
    fn_828E9DB8(param_3,uVar3,iVar1);
  }
  uVar2 = *(unsigned int *)(param_4 + 4);
  fn_8223C478(param_3,2,0);
  fn_828E9DB8(param_3,uVar2,2);
  return;
}

