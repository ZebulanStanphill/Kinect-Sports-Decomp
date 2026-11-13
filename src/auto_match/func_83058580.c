extern int fn_82F6E7A8();
extern unsigned int lbl_82057518;


unsigned __int64 fn_83058580(int param_1,float *param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  
  if ((param_2 == (float *)0x0) || (param_3 != 0x3c2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    lVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8) - (int)param_2;
    dVar5 = (double)lbl_82057518;
    do {
      dVar4 = (double)*(float *)(iVar1 + (int)param_2);
      if (dVar5 < ABS((double)(float)((double)*param_2 - dVar4))) {
        fn_82F6E7A8(0xffffffff8217e2a0,lVar3,(double)*param_2,lVar3,dVar4);
        uVar2 = 0;
      }
      lVar3 = lVar3 + 1;
      param_2 = param_2 + 1;
    } while ((int)lVar3 < 0x3c2);
  }
  return uVar2;
}

