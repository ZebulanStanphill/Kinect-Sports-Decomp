extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_828E9DB8();


void fn_82897988(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_4 + 8);
  fn_8288A398();
  uVar3 = (*(int (**)())(*piVar1 + 8))(piVar1);
  iVar4 = fn_8288A398();
  uVar2 = *(unsigned int *)(iVar4 + 0x3c);
  fn_8223C478(param_3,uVar2,0);
  fn_828E9DB8(param_3,uVar3,uVar2);
  (*(int (**)())*piVar1)(piVar1,param_2,param_3);
  return;
}

