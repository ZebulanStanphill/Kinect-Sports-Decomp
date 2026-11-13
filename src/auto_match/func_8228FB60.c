extern int fn_8228F078();
extern int fn_8228F478();
extern int fn_8228F648();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;


void fn_8228FB60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == iVar1) {
    return;
  }
  if (iVar1 == 1) {
    fn_8228F478(param_1,0xffffffff821a9a18);
    *(unsigned int *)(param_1 + 0x68) = 1;
    goto LAB_8228fc1c;
  }
  if (iVar1 != 3) {
    if (iVar1 == 5) {
      fn_82672C20(*(unsigned int *)(param_1 + 0x14),0xffffffff821a9bb4,0,0);
      goto LAB_8228fc1c;
    }
    if (iVar1 != 7) {
      if (iVar1 == 9) {
        *(unsigned int *)(param_1 + 0x94) = ltcg_pool_0_0f;
        fn_8228F648(param_1,0);
      }
      else if (iVar1 == 10) {
        fn_8228F078();
      }
      goto LAB_8228fc1c;
    }
  }
  *(unsigned int *)(param_1 + 0x94) = ltcg_pool_0_0f;
LAB_8228fc1c:
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
  return;
}

