extern unsigned int *auStack_50;
extern int fn_8280A5E8();
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_828104E8();
extern int fn_82810B40();
extern unsigned int lbl_821AAD20;


void fn_8285D318(int param_1,__int64 param_2,unsigned __int64 param_3,float *param_4)

{
  int iVar1;
  __int64 lVar2;
  double dVar3;
  unsigned char auStack_50 [80];
  
  lVar2 = param_2 + 0x30;
  fn_82810328(param_2,lVar2,auStack_50);
  dVar3 = (double)fn_82810B40(lVar2,param_2 + 0x3c);
  iVar1 = fn_8280A5E8((double)*(float *)(param_1 + 0x14));
  if (iVar1 == 0) {
    fn_828102A8((double)(float)(dVar3 / (double)*(float *)(param_1 + 0x14)),auStack_50,auStack_50);
    fn_82810208(lVar2,auStack_50,auStack_50);
    fn_828104E8(lVar2,param_2 + 0x3c,param_3);
    dVar3 = (double)fn_82810B40(param_3,auStack_50);
    *param_4 = (float)dVar3;
  }
  else {
    *param_4 = lbl_821AAD20;
  }
  return;
}

