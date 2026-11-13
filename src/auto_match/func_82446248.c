extern int fn_82441BD0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9B64;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned int * fn_82446248(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  fn_82441BD0(param_1,0xffffffff821b9b5c,0,0);
  *param_1 = &lbl_821B9B64;
  puVar2 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = param_3;
    puVar2[2] = ltcg_pool_0_0f;
  }
  param_1[2] = puVar2;
  puVar2 = (unsigned int *)fn_8251F720(param_2,0);
  *(unsigned int *)(param_1[2] + 4) = puVar2[1];
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1[2] + 8) =
       ((float)puVar2[3] - (float)puVar2[2]) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)puVar2[2];
  if ((*(int *)param_1[1] != 0) && (iVar1 = *(int *)(*(int *)param_1[1] + 400), iVar1 != 0)) {
    *(unsigned int *)(**(int **)(iVar1 + 400) + 0x118) = 1;
  }
  *(unsigned int *)(param_1[1] + 0x28) = 0;
  iVar1 = *(int *)param_1[1];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 0)) {
    *(unsigned int *)(iVar1 + 0x1d0) = 1;
  }
  *(unsigned int *)(param_1[1] + 0x2c) = 0;
  *(unsigned int *)(param_1[1] + 4) = *puVar2;
  fn_8251FA58();
  return param_1;
}

