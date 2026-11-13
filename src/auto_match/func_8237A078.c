typedef unsigned char bool;
#define false 0
extern int fn_82379958();
extern int fn_8237A598();
extern int fn_8237C400();
extern unsigned int lbl_8218E8E8;


void fn_8237A078(double param_1,double param_2,int param_3,int param_4,unsigned int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_4 * 0x148 + param_3;
  iVar3 = iVar1 + 0x1dc;
  if ((double)lbl_8218E8E8 <= param_1) {
    iVar3 = iVar1 + 0x280;
  }
  fn_8237A598(param_3,iVar3,param_8);
  fn_8237C400(param_3,iVar3 + 0x48,iVar3 + 0x54);
  piVar2 = (int *)(param_3 + 0xf8);
  if (piVar2 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *piVar2 != 0;
  }
  if (!bVar4) {
    piVar2 = (int *)(iVar3 + 0x58);
  }
  fn_82379958(param_3,piVar2);
  fn_82379958(param_3,iVar3 + 0x5c);
  *(float *)(param_3 + 0x2140) = (float)param_1;
  *(float *)(param_3 + 0x2144) = (float)param_2;
  *(unsigned int *)(param_3 + 200) = 0;
  *(unsigned int *)(param_3 + 0xcc) = 0;
  *(unsigned int *)(param_3 + 0xd0) = 0;
  *(unsigned int *)(param_3 + 0xb8) = 0;
  *(unsigned int *)(param_3 + 0x2130) = 0;
  *(unsigned int *)(param_3 + 0x2134) = 0;
  *(unsigned int *)(param_3 + 0x2138) = 0;
  *(unsigned int *)(param_3 + 0x213c) = param_5;
  return;
}

