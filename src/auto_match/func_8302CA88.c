extern int fn_82FFFC20();
extern int fn_830177C8();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_8302CA88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  
  if ((*(unsigned int *)(param_1 + 0x40) >> 4 & 1) == 0) {
    dVar1 = (double)fn_82FFFC20(param_1 + 0x114,param_2,param_3,param_2);
    dVar2 = (double)(float)(dVar1 + (double)*(float *)(param_1 + 0x110));
    dVar1 = (double)lbl_821AAD20;
    if (-dVar2 < 0.0) {
      dVar1 = dVar2;
    }
  }
  else {
    dVar1 = (double)fn_830177C8(lbl_832642FC,param_1,4);
    dVar2 = (double)(float)(dVar1 * (double)lbl_8200DFF4);
    dVar1 = (double)fn_82FFFC20(param_1 + 0x114);
    dVar2 = (double)(float)((double)(float)(dVar1 + (double)*(float *)(param_1 + 0x110)) + dVar2);
    dVar1 = (double)lbl_821AAD20;
    if (-dVar2 < 0.0) {
      dVar1 = dVar2;
    }
  }
  return dVar1;
}

