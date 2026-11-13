extern int fn_822F01F8();
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CD294;
extern unsigned int lbl_831CD298;


unsigned __int64 fn_822F05B8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar2 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) + *(float *)(iVar3 + 0x170)),
                   (double)(fVar1 * lbl_831CD294),(double)(fVar1 * lbl_831CD298),
                   (double)ltcg_pool_0_0f,(double)lbl_821CA460);
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      if ((*(int *)(*(int *)(param_1 + 0x24) + 0x114) != 0) ||
         (uVar4 = 0, *(int *)(*(int *)(param_1 + 0x24) + 0x124) != 0)) {
        uVar4 = 1;
      }
      *(unsigned int *)(param_1 + 0x28) = uVar4;
    }
    uVar5 = fn_822F01F8();
  }
  return uVar5;
}

