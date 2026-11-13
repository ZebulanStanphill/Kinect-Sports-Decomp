extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned char fn_8257E258(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  unsigned char uVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  
  if (*(char *)(param_2 + 0x66) != '\0') {
    uVar2 = *(unsigned char *)(param_2 + 100);
    iVar4 = param_4 * 0xc + param_2;
    *(unsigned int *)(iVar4 + 0x68) = *(unsigned int *)(param_2 + 0x50);
    *(unsigned int *)(iVar4 + 0x70) = *(unsigned int *)(param_2 + 0x60);
    *(unsigned int *)((param_4 + 9) * 0xc + param_2) = *(unsigned int *)(param_2 + 0x5c);
    return uVar2;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x54) + param_1);
  dVar5 = (double)fVar1;
  *(float *)(param_2 + 0x54) = fVar1;
  fVar1 = lbl_821CA460;
  fVar3 = ltcg_pool_0_0f;
  if (*(char *)(param_2 + 0x65) != '\0') {
    fVar1 = ltcg_pool_0_0f;
    fVar3 = lbl_821CA460;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar5,(double)ltcg_pool_0_0f,(double)*(float *)(param_2 + 0x58),(double)fVar1,
               (double)fVar3,(double)*(float *)(param_2 + 0x58) <= dVar5);
}

