extern unsigned int *auStack_38;
extern int fn_8252D970();
extern int fn_8257CB40();
extern unsigned int ltcg_pool_0_0f;


void fn_82569898(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  double dVar4;
  unsigned char auStack_38 [1];

  fVar1 = ltcg_pool_0_0f;
  uVar2 = 0;
  dVar4 = (double)ltcg_pool_0_0f;
  *(float *)(param_2 + 0x54) = ltcg_pool_0_0f;
  *(float *)(param_2 + 0x50) = fVar1;
  if (*(int *)(param_2 + 0xd4) != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_2 + 0xd8) + iVar3 + 0x10) != 0) {
        fn_8252D970(param_1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < *(unsigned int *)(param_2 + 0xd4));
  }
  *(unsigned int *)(param_2 + 0x8c) = *(unsigned int *)(param_2 + 0x88);
  *(float *)(param_2 + 0x88) = (float)((double)*(float *)(param_2 + 0x94) * param_1);
  *(float *)(param_2 + 0x98) = (float)dVar4;
                    /* WARNING: Subroutine does not return */
  fn_8257CB40(auStack_38,0,4);
}
