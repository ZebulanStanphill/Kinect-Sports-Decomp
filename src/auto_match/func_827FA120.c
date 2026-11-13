extern int fn_82809CB0();
extern unsigned int lbl_821AAD20;


void fn_827FA120(double param_1,int *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(*param_2 + 0x1c);
  param_2[0x2b] = (int)(float)param_1;
  dVar2 = (double)lbl_821AAD20;
  if ((double)fVar1 != dVar2) {
    dVar3 = (double)(float)(param_1 / (double)fVar1);
    if (dVar2 <= (double)(float)param_2[0x2c]) {
      dVar2 = (double)fn_82809CB0(dVar3);
      param_2[0x2c] = (int)(float)dVar2;
      return;
    }
    dVar2 = (double)fn_82809CB0(dVar3);
    dVar2 = -dVar2;
  }
  param_2[0x2c] = (int)(float)dVar2;
  return;
}

