extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822F9B78();
extern int fn_82539560();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CD2E4;
extern unsigned int lbl_831CD2E8;


double fn_822F1BD0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  double dVar5;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  if (iVar2 == 1) {
    dVar5 = (double)ltcg_pool_0_0f;
  }
  else {
    if (iVar2 == 2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar2 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) + *(float *)(iVar3 + 0x170)),
                   (double)(fVar1 * lbl_831CD2E4),(double)(fVar1 * lbl_831CD2E8),
                   (double)ltcg_pool_0_0f,(double)lbl_821CA460);
    }
    puVar4 = (unsigned int *)fn_822F9B78(auStack_20,*(unsigned int *)(param_1 + 0x18));
    dVar5 = (double)(**(int (***)())(*(int *)*puVar4 + 0x10))();
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return dVar5;
}

