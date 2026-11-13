extern int fn_827B40F0();
extern unsigned int lbl_8201435C;


void fn_827B4730(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 * (double)lbl_8201435C);
  iVar2 = (int)(param_2 * (double)lbl_8201435C);
  fn_827B40F0(param_3,*(unsigned int *)(param_3 + 100),*(unsigned int *)(param_3 + 0x68),iVar1,iVar2);
  *(int *)(param_3 + 100) = iVar1;
  *(int *)(param_3 + 0x68) = iVar2;
  return;
}

