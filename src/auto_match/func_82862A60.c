typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_82810328();
extern unsigned int lbl_82015468;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82862A60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  unsigned char auStack_40 [1];
  
  fn_82810328(param_1,param_3,auStack_40);
  dVar3 = (double)fn_82810280(param_2,auStack_40);
  *param_4 = (float)dVar3;
  dVar4 = (double)lbl_821AAD20;
  if ((dVar3 < dVar4) || ((double)*(float *)(param_1 + 0x18) < dVar3)) {
    uVar2 = 0;
  }
  else {
    if (((double)*(float *)(param_1 + 0x1c) <= dVar4) ||
       (bVar1 = true, (double)lbl_82015468 <= (double)*(float *)(param_1 + 0x1c))) {
      bVar1 = false;
    }
    if ((!bVar1) || (dVar3 = (double)fn_82810280(param_2,param_1 + 0xc), dVar3 < dVar4)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

