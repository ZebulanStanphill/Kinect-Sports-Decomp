extern unsigned int *auStack_4f;
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82F691F0();
extern unsigned int ltcg_pool_0_0f;


void fn_823A62E8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_4f [79];
  
  iVar3 = param_2 + 0x4c;
  uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_2 + 8) + 0x2e0) + 0x98);
  iVar2 = fn_825529B0(iVar3);
  if (((*(unsigned int *)(param_2 + 0x1c) < uVar4) && (uVar4 == (uVar4 / 10) * 10)) && (uVar4 < 0x12d)) {
    *(unsigned int *)(param_2 + 0x28) = 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_4f,0,0xf);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x2c) - param_1);
  *(float *)(param_2 + 0x2c) = fVar1;
  if (ltcg_pool_0_0f < fVar1) {
    if (*(int *)(param_2 + 0x28) != 0) {
      return;
    }
    if (iVar2 != 0) {
      return;
    }
    iVar2 = fn_825529B0(iVar3);
    if (iVar2 != 0) {
      return;
    }
    fn_82552720((unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 8) + 0x174) + 0x84c,iVar3,
                      param_2 + 0x14,0,1,0,0);
  }
  *(unsigned int *)(param_2 + 0x24) = 0;
  return;
}

