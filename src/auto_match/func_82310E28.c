extern int fn_822C8C08();
extern int fn_8230E260();


void fn_82310E28(int param_1,unsigned int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x148) == 0) && (iVar1 = fn_8230E260(), iVar1 != 0)) &&
     (iVar1 = fn_8230E260(param_1), iVar1 != 0)) {
    fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114),"idle");
  }
  *(unsigned int *)(param_1 + 0x148) = param_2;
  return;
}

