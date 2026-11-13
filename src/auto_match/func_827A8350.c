int fn_827A8350(double param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)(__int64)param_2[4];
  if (dVar3 <= param_1) {
    if (*param_2 < 0) {
      uVar1 = (unsigned int)*(unsigned short *)((int)param_2 + 0x16);
      iVar2 = (int)*(char *)((int)param_2 + 0x1d);
    }
    else {
      uVar1 = param_2[6];
      iVar2 = (int)*(short *)(param_2 + 10);
    }
    if (param_1 < (double)(float)((double)((float)(__int64)iVar2 + (float)(__int64)(int)uVar1) +
                                 dVar3)) {
      return 0;
    }
  }
  return (int)(dVar3 - param_1);
}

