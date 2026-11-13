extern int fn_8223C478();
extern int fn_828A12F0();
extern int fn_828E9DB8();


void fn_82897E60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int *piVar2;
  
  uVar1 = *(unsigned int *)(param_4 + 0x10);
  fn_8223C478(param_3,1,0);
  fn_828E9DB8(param_3,uVar1,1);
  piVar2 = (int *)fn_828A12F0(param_2,*(unsigned int *)(param_4 + 0x10));
  (*(int (**)())(*piVar2 + 0x1c))(piVar2,param_2,param_3,param_4,param_1);
  return;
}

