extern unsigned int lbl_821AAD20;


double fn_83009C40(int param_1)

{
  float fVar1;
  unsigned int *puVar2;
  double dVar3;
  
  fVar1 = lbl_821AAD20;
  for (puVar2 = *(unsigned int **)(param_1 + 0x7c); dVar3 = (double)fVar1, puVar2 != (unsigned int *)0x0
      ; puVar2 = (unsigned int *)*puVar2) {
    fVar1 = (float)((double)(float)puVar2[5] + dVar3);
  }
  if ((double)*(float *)(param_1 + 0x58) <= dVar3) {
    return dVar3;
  }
  return (double)*(float *)(param_1 + 0x58);
}

