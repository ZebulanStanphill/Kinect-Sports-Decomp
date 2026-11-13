extern int fn_8306E888();
extern int fn_8306F250();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_8207F514;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;


double fn_8306F3A8(double param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  char cVar4;
  unsigned int uVar5;
  double dVar6;
  
  dVar6 = (double)fn_8306E888((double)*(float *)(param_3 + 0x28));
  if ((double)lbl_82186E18 <= dVar6) {
    dVar6 = (double)lbl_8207F514;
    cVar4 = fn_8306F250(dVar6);
    if ((cVar4 == '\0') && (cVar4 = fn_8306F250(dVar6), cVar4 == '\0')) {
      cVar4 = fn_8306F250(dVar6);
      if ((cVar4 == '\0') && (cVar4 = fn_8306F250(dVar6), cVar4 == '\0')) {
        fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x674));
        *(float *)(param_2 + 0x674) = fVar1;
        fVar3 = lbl_821AAD20;
        if (fVar1 < lbl_82002C5C) goto LAB_8306f4f8;
      }
      else {
        if ((double)lbl_820145BC < (double)*(float *)(param_2 + 0x670)) {
          dVar6 = (double)lbl_821AAD20;
          *(float *)(param_2 + 0x674) = lbl_821AAD20;
          return dVar6;
        }
        fVar3 = (float)((double)*(float *)(param_2 + 0x670) + param_1);
      }
      *(float *)(param_2 + 0x670) = fVar3;
      uVar2 = *(unsigned int *)(param_3 + 0x1b0);
      uVar5 = 4;
      if ((uVar2 & 1) != 0) {
        uVar5 = 3;
      }
      if ((uVar2 & 2) != 0) {
        uVar5 = uVar5 - 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar5 = uVar5 - 1;
      }
      return (double)((float)uVar5 * lbl_82002C28);
    }
  }
LAB_8306f4f8:
  return (double)lbl_821AAD20;
}

