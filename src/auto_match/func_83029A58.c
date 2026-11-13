extern int fn_82F65350();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217C778;


void fn_83029A58(int param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = fn_82F65350();
  dVar3 = (double)lbl_8217C778;
  dVar2 = (double)lbl_82002AE0;
  *param_2 = (float)((double)(__int64)iVar1 * dVar3 - dVar2) *
             *(float *)(*(int *)(param_1 + 0x10) + 8) + *param_2;
  iVar1 = fn_82F65350();
  param_2[2] = (float)((double)(__int64)iVar1 * dVar3 - dVar2) *
               *(float *)(*(int *)(param_1 + 0x10) + 0xc) + param_2[2];
  return;
}

