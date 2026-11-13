extern unsigned int lbl_8201FBB8;
extern unsigned int lbl_8326422C;


void fn_82FB09A8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0xa4) = (int)((float)(__int64)param_2 * lbl_8326422C * lbl_8201FBB8);
  if (iVar2 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  do {
    piVar1 = (int *)(iVar2 + 4);
    iVar2 = iVar2 + 8;
    *(unsigned int *)(*piVar1 + 0x28) = *(unsigned int *)(param_1 + 0xa4);
  } while (iVar2 != *(int *)(param_1 + 0x8c));
  return;
}

