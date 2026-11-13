extern unsigned int lbl_8201435C;


void fn_827B3668(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 * (double)lbl_8201435C);
  iVar2 = (int)(param_2 * (double)lbl_8201435C);
  *(int *)(param_3 + 100) = iVar1;
  *(int *)(param_3 + 0x68) = iVar2;
  *(int *)(param_3 + 0x5c) = iVar1;
  *(int *)(param_3 + 0x60) = iVar2;
  return;
}

