extern int fn_8254EDB0();
extern int fn_825529B0();
extern int fn_82552AD8();
extern unsigned int ltcg_pool_0_0f;


void fn_8254B590(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)ltcg_pool_0_0f;
  if ((*(int *)(param_2 + 0x1d4) != 0) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x1d0) - param_1),
     *(float *)(param_2 + 0x1d0) = fVar1, (double)fVar1 <= dVar3)) {
    fn_8254EDB0((double)*(float *)(param_2 + 0x1d8),(double)*(float *)(param_2 + 0x1dc),
                      param_2,*(unsigned int *)(param_2 + 0x1cc));
    *(float *)(param_2 + 0x1d0) = (float)dVar3;
    *(unsigned int *)(param_2 + 0x1d4) = 0;
  }
  if ((*(int *)(param_2 + 0x1b4) != 0) && (*(int *)(param_2 + 0x1c8) == 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1c0) - param_1);
    *(float *)(param_2 + 0x1c0) = fVar1;
    *(float *)(param_2 + 0x1b8) =
         (float)((double)*(float *)(param_2 + 0x1bc) * param_1 + (double)*(float *)(param_2 + 0x1b8)
                );
    if ((double)fVar1 < dVar3) {
      *(unsigned int *)(param_2 + 0x1b4) = 0;
      *(unsigned int *)(param_2 + 0x1b8) = *(unsigned int *)(param_2 + 0x1c4);
    }
    iVar2 = fn_825529B0(param_2 + 0x1a0);
    if (iVar2 != 0) {
      fn_82552AD8((double)*(float *)(param_2 + 0x1b8),param_2 + 0x1a0,0xffffffff8327fb78);
    }
  }
  return;
}

