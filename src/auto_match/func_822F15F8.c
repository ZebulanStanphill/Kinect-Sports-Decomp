extern int fn_822F16F0();
extern int fn_822F1AB8();
extern int fn_822F1BD0();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;
extern unsigned int lbl_83265A28;


unsigned int * fn_822F15F8(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(*(int *)(param_2 + 0x10) + 0x178) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  dVar3 = (double)fn_822F1BD0(param_2);
  dVar4 = (double)fn_822F1AB8(param_2);
  dVar5 = (double)fn_822F16F0();
  puVar1 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821AE598;
    if ((float *)(puVar1 + 3) != (float *)0x0) {
      puVar1[3] = (float)dVar5;
      puVar1[4] = (float)dVar4;
      puVar1[6] = uVar2;
      puVar1[5] = (float)dVar3;
      puVar1[7] = 0;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

