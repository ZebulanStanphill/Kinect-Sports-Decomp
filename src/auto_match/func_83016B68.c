extern int fn_83016920();
extern int fn_8302A5B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


double fn_83016B68(int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821AAD20;
  dVar3 = (double)fn_83016920();
  fVar1 = lbl_8216C698;
  if (dVar4 < dVar3) {
    dVar2 = (double)lbl_8200D898;
    if (dVar2 < dVar3) {
      do {
        dVar3 = (double)(float)(dVar3 * (double)lbl_82186E6C);
        dVar4 = (double)(float)(dVar4 + (double)lbl_8200571C);
      } while (dVar2 < dVar3);
    }
    for (; dVar3 < (double)lbl_82002AE0; dVar3 = (double)(float)(dVar3 * dVar2)) {
      dVar4 = (double)(float)(dVar4 - (double)lbl_8200571C);
    }
    dVar3 = (double)fn_8302A5B8(*(unsigned int *)(param_1 + 4));
    fVar1 = (float)(dVar3 + dVar4);
  }
  return (double)fVar1;
}

