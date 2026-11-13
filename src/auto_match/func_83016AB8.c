extern int fn_8302A5B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


double fn_83016AB8(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821AAD20;
  if (dVar2 < param_1) {
    dVar1 = (double)lbl_8200D898;
    if (dVar1 < param_1) {
      do {
        param_1 = (double)(float)(param_1 * (double)lbl_82186E6C);
        dVar2 = (double)(float)(dVar2 + (double)lbl_8200571C);
      } while (dVar1 < param_1);
    }
    for (; param_1 < (double)lbl_82002AE0; param_1 = (double)(float)(param_1 * dVar1)) {
      dVar2 = (double)(float)(dVar2 - (double)lbl_8200571C);
    }
    dVar1 = (double)fn_8302A5B8(*(unsigned int *)(param_2 + 4));
    return (double)(float)(dVar1 + dVar2);
  }
  return (double)lbl_8216C698;
}

