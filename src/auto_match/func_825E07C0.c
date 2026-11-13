extern int fn_8253FFE0();
extern unsigned int lbl_8218E210;
extern unsigned int lbl_821CA460;


void fn_825E07C0(int *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  *(float *)(param_1[1] + 0x38) =
       (lbl_821CA460 - *(float *)(param_1[0xc] + 0xcc)) * *(float *)(param_1[3] + 4) +
       *(float *)(*param_1 + 0xc0);
  if (((*(int *)(param_1[9] + 0x110) == 0) ||
      (fVar1 = *(float *)(param_1[0xd] + 0x58), fVar1 < *(float *)(param_1[9] + 0x118))) ||
     (*(float *)(param_1[1] + 0x38) <= fVar1)) {
    if (*(char *)(param_1[0xd] + 0x60) != '\0') {
      fVar1 = *(float *)(param_1[1] + 0x38);
      fVar2 = *(float *)(param_1[5] + 0x38);
      *(float *)(param_1[1] + 0x38) = fVar2;
      dVar5 = (double)(fVar1 - fVar2);
      dVar4 = (double)fn_8253FFE0();
      dVar3 = (double)lbl_8218E210;
      *(float *)(param_1[1] + 0x38) = (float)(dVar4 * dVar5 + (double)*(float *)(param_1[1] + 0x38))
      ;
      if (dVar5 <= dVar3) {
        *(unsigned char *)(param_1[0xd] + 0x60) = 0;
      }
    }
  }
  else {
    *(float *)(param_1[1] + 0x38) = fVar1;
  }
  return;
}

