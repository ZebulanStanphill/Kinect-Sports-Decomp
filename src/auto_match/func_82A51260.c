extern int fn_82A4F4E0();
extern int fn_82A68E28();


void fn_82A51260(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    fn_82A68E28(iVar1);
    fn_82A4F4E0(iVar1);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

