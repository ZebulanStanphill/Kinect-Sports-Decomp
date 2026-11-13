extern int fn_8280A580();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8226C410(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar4 = 0;
    dVar6 = (double)lbl_821CA460;
    do {
      iVar2 = iVar4 + *(int *)(param_1 + 0x40);
      if ((*(unsigned int *)(iVar2 + 0xe4) & *(unsigned int *)(param_2 + 0x18)) != 0) {
        dVar5 = (double)fn_8280A580((double)*(float *)(iVar2 + 0xc0));
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 0xc0) = (float)dVar5;
        iVar2 = iVar4 + *(int *)(param_1 + 0x40);
        *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xc0) + *(float *)(param_2 + 0x14);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 0xc4) =
             (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
             *(float *)(param_2 + 0xc);
        iVar2 = iVar4 + *(int *)(param_1 + 0x40);
        fVar1 = *(float *)(iVar2 + 0xc4);
        *(float *)(iVar2 + 0xc4) = fVar1 * fVar1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar4 + *(int *)(param_1 + 0x40) + 200) =
             (float)((double)(float)(dVar6 - (double)*(float *)(param_2 + 0x10)) *
                     (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6)
                    + (double)*(float *)(param_2 + 0x10));
        *(unsigned char *)(iVar4 + *(int *)(param_1 + 0x40) + 0xe0) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xf0;
    } while (iVar3 < *(int *)(param_1 + 0x44));
  }
  return;
}

