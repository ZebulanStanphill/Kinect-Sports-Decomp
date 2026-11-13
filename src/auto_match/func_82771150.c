extern int fn_82784708();
extern int fn_82784920();


void fn_82771150(unsigned int *param_1,unsigned __int64 param_2)

{
  float *pfVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  fn_82784708((double)(float)param_1[3],(double)(float)param_1[4],param_2,
                    (unsigned __int64)*param_1 - 1,(unsigned __int64)param_1[1] - 1,(unsigned __int64)param_1[2] - 1);
  uVar3 = (unsigned __int64)param_1[6];
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      pfVar1 = (float *)(param_1[5] + iVar2);
      fn_82784920((double)*pfVar1,(double)pfVar1[1],(double)pfVar1[2],(double)pfVar1[3],
                        param_2);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 != 0);
  }
  return;
}

