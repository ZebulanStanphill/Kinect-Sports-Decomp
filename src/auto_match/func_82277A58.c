typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82533578();


void fn_82277A58(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  double dVar6;
  float fStack_20;
  float fStack_1c;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
  dVar6 = (double)param_3[1];
  fStack_20 = *(float *)(param_1 + 0x34) + *param_3;
  fStack_1c = (float)((double)*(float *)(param_1 + 0x38) + dVar6);
  if (uVar4 == 0) {
    return;
  }
  lVar3 = uVar4 + 0x10;
  iVar2 = fn_82533578(uVar4,uVar4 + 8,lVar3,&fStack_20);
  dVar5 = extraout_f1;
  if (iVar2 == 0) {
    iVar2 = fn_82533578(uVar4,lVar3,uVar4 + 0x18,&fStack_20);
    bVar1 = false;
    dVar5 = extraout_f1_00;
    if (iVar2 == 0) goto LAB_82277ae0;
  }
  bVar1 = true;
LAB_82277ae0:
  if (bVar1) {
    *(float *)(param_1 + 0x2c) = (float)((double)*param_2 - dVar5);
    *(float *)(param_1 + 0x30) = (float)((double)param_2[1] - dVar6);
  }
  return;
}

