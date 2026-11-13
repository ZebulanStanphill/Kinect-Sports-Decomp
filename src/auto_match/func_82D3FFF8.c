extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D3FC68();


void fn_82D3FFF8(int param_1,unsigned param_2,unsigned char param_3)

{
  unsigned int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 != 0) {
    fn_82CE4040(param_2);
  }
  if (*(unsigned int *)(param_1 + 0x60) != 0) {
    fn_82CE4118(*(unsigned *)(param_1+0x60));
  }
  *(int *)(param_1 + 0x60) = iVar1;
  if ((param_3 != '\0') && (iVar1 != 0)) {
    fn_82D3FC68(param_1);
  }
  return;
}

