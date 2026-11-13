extern int fn_82F65E18();
extern int fn_82FAB9C0();
extern int fn_8301E1F8();
extern int fn_8301E260();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E0;


void fn_8301F0C0(double param_1,int param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  ,float *param_6,float *param_7)

{
  int iVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar2 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xfe0,*(unsigned int *)(param_2 + 0xc));
    *(unsigned int *)(param_2 + 0x4c) = uVar2;
  }
  iVar1 = *(int *)(param_2 + 0x4c);
  dVar5 = (double)lbl_821AAD20;
  dVar6 = (double)lbl_82002AE0;
  dVar4 = dVar6;
  if (dVar5 < param_1) {
    dVar6 = (double)fn_8301E1F8(param_4,param_3 + 0xc);
    dVar6 = (double)(float)(dVar6 / param_1);
  }
  dVar3 = dVar4;
  if ((float)(dVar6 - dVar4) < 0.0) {
    dVar3 = dVar6;
  }
  if ((float)(dVar3 - (double)lbl_8200133C) < 0.0) {
    dVar3 = (double)lbl_8200133C;
  }
  dVar6 = (double)fn_82F65E18(dVar3);
  dVar6 = (double)fn_8301E260((double)*(float *)(iVar1 + 0x10),dVar5,
                                  (double)*(float *)(iVar1 + 0x14),dVar4,(double)(float)dVar6);
  dVar4 = dVar6;
  if ((float)((double)*param_6 - dVar6) < 0.0) {
    dVar4 = (double)*param_6;
  }
  *param_6 = (float)dVar4;
  *param_7 = (float)((double)*(float *)(param_2 + 0x1c) * dVar6 + (double)*param_7);
  return;
}

