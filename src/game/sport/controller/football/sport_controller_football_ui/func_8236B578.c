extern unsigned int ltcg_pool_0_0f;
extern int (*lbl_8327677C)();
extern int (*lbl_83276794)();


unsigned __int64 fn_8236B578(int param_1)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (*(int *)(iVar1 + 0xd4) == 0) {
LAB_8236b614:
    uVar2 = 1;
  }
  else {
    if (*(float *)(iVar1 + 0xd8) <= ltcg_pool_0_0f) {
      if (lbl_83276794 == (int (**)())0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*lbl_83276794)();
      }
      if (iVar3 != 0) {
        *(unsigned int *)(iVar1 + 0xd4) = 0;
        if (lbl_8327677C != (int (**)())0x0) {
          (*lbl_8327677C)(0xffffffff821b6748,0xffffffff821b66a8,0x1e5);
        }
        goto LAB_8236b614;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

