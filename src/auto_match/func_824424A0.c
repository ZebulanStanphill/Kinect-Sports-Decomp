extern int fn_825327A8();
extern unsigned int ltcg_pool_0_0f;


void fn_824424A0(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  
  if (param_2 == **(int **)(param_1 + 8)) {
    return;
  }
  if (param_2 == 1) {
    uVar2 = 0xffffffff821b998c;
  }
  else if (param_2 == 2) {
    uVar2 = 0xffffffff821b999c;
  }
  else {
    if (param_2 != 3) goto LAB_82442544;
    bVar1 = *(unsigned char *)(*(int **)(param_1 + 8) + 10);
    if (bVar1 < 2) {
LAB_82442518:
      uVar2 = 0xffffffff821b99d0;
    }
    else if (bVar1 < 4) {
      uVar2 = 0xffffffff821b99c0;
    }
    else {
      if (bVar1 != 7) goto LAB_82442518;
      uVar2 = 0xffffffff821b99b0;
    }
  }
  fn_825327A8(**(unsigned int **)(param_1 + 4),uVar2);
LAB_82442544:
  **(int **)(param_1 + 8) = param_2;
  *(unsigned int *)(*(int *)(param_1 + 8) + 4) = ltcg_pool_0_0f;
  return;
}

