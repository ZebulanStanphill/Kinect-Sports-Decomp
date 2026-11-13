extern unsigned int lbl_82005710;
extern unsigned int lbl_820FC2C8;
extern unsigned int lbl_82160788;
extern float lbl_8216CE90;
extern unsigned int lbl_8216CE98;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82FAF650(int param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  if (param_2 == (double *)0x0) {
    *(unsigned char *)(param_1 + 0x98) = *(unsigned char *)(param_1 + 0x98) & 0x7f;
    return 1;
  }
  *(unsigned char *)(param_1 + 0x98) = *(unsigned char *)(param_1 + 0x98) | 0x80;
  dVar2 = lbl_82160788;
  if (((((double)lbl_821AAD20 < (double)*(float *)(param_2 + 2)) &&
       (*(unsigned char *)((int)param_2 + 0x15) != 0)) && (*(char *)((int)param_2 + 0x14) != '\0')) &&
     (lbl_82005710 < *param_2)) {
    iVar1 = (int)((lbl_820FC2C8 / (double)*(unsigned char *)((int)param_2 + 0x15)) *
                  (lbl_8216CE98 / (double)*(float *)(param_2 + 2)) * lbl_8216CE90);
    *(int *)(param_1 + 0x88) = iVar1;
    *(unsigned int *)(param_1 + 0x8c) = (unsigned int)*(unsigned char *)((int)param_2 + 0x14) * iVar1;
    *(int *)(param_1 + 0x90) = (int)(*param_2 * dVar2);
    *(int *)(param_1 + 0x94) = (int)(param_2[1] * dVar2);
    return 1;
  }
  return 0x1f;
}

