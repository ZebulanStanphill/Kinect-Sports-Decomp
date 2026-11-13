extern unsigned int *fStack_10;
extern int fn_825B98E0();
extern int fn_825B99F8();
extern unsigned int lbl_821CA460;


void fn_82559D80(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5)

{
  __int64 lVar1;
  float *pfVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  float fStack_10;
  float afStack_c [3];
  
  if (param_5 == 0) {
    dVar3 = (double)fn_825B99F8();
    pfVar2 = (float *)param_4;
    *pfVar2 = (float)dVar3;
    dVar3 = (double)fn_825B99F8(param_1,param_2 + 0xc);
    pfVar2[1] = (float)dVar3;
    dVar3 = (double)fn_825B99F8(param_1,param_2 + 0x18);
    pfVar2[2] = (float)dVar3;
  }
  else {
    lVar1 = fn_825B98E0(param_2,param_4,afStack_c,&fStack_10);
    dVar4 = (double)lbl_821CA460;
    pfVar2 = (float *)param_4;
    *pfVar2 = (float)(dVar4 - extraout_f1) * afStack_c[0] + (float)((double)fStack_10 * extraout_f1)
    ;
    dVar3 = (double)fn_825B98E0(param_1,lVar1 + 0xc);
    pfVar2[1] = (float)(dVar4 - dVar3) * fStack_10 + (float)((double)afStack_c[0] * dVar3);
    dVar3 = (double)fn_825B98E0(param_1,param_2 + 0x18);
    pfVar2[2] = (float)(dVar4 - dVar3) * fStack_10 + (float)((double)afStack_c[0] * dVar3);
  }
  return;
}

