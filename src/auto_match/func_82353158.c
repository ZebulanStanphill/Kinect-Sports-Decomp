extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


__int64 fn_82353158(double param_1,int param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  
  iVar2 = *(int *)(param_2 + 0x2c4);
  uVar3 = 0;
  dVar4 = (double)ltcg_pool_0_0f;
  fVar1 = *(float *)(iVar2 + 0x60);
  if (*(unsigned int *)(iVar2 + 0x68) != 0) {
    do {
      dVar4 = (double)(float)((double)fVar1 + dVar4);
      if (param_1 < dVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82539560();
      }
      uVar3 = uVar3 + 1;
      fVar1 = (float)((double)*(float *)(iVar2 + 100) * (double)fVar1);
    } while (uVar3 < *(unsigned int *)(iVar2 + 0x68));
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x2c4) + 0x6c);
  uVar3 = *(unsigned int *)(*(int *)(param_2 + 0x2c4) + 0x68);
  *param_5 = lbl_821CA460;
  *param_4 = iVar2 + -1;
  return (unsigned __int64)uVar3 - 1;
}

