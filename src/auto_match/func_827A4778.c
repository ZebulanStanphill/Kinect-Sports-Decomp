extern int fn_8279C658();
extern int fn_827A0C20();
extern int fn_827A0EB8();
extern int fn_827A3A50();
extern int fn_82F68918();


void fn_827A4778(double param_1,double param_2,int param_3)

{
  float *pfVar2;
  unsigned __int64 uVar1;
  double dVar3;
  double dVar4;
  
  if ((*(unsigned short *)(param_3 + 0x68) >> 5 & 1) != 0) {
    pfVar2 = (float *)fn_827A0C20(*(unsigned int *)(param_3 + 8));
    dVar3 = (double)fn_82F68918((double)(float)(param_1 - (double)*pfVar2));
    dVar4 = (double)(float)dVar3;
    dVar3 = (double)fn_82F68918((double)(float)(param_2 - (double)pfVar2[1]));
    *(float *)(param_3 + 0x4c) = (float)dVar4;
    *(float *)(param_3 + 0x50) = (float)dVar3;
    uVar1 = fn_827A0EB8(dVar4,*(unsigned int *)(param_3 + 8));
    if (((int)uVar1 != -1) &&
       (fn_827A3A50(param_3,uVar1,*(unsigned short *)(param_3 + 0x68) >> 1 & 1),
       (*(unsigned short *)(param_3 + 0x68) >> 1 & 1) != 0)) {
      fn_8279C658(*(int *)(param_3 + 8),*(unsigned int *)(*(int *)(param_3 + 8) + 0x1c),uVar1);
    }
  }
  return;
}

