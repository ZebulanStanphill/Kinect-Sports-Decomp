typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_8;


unsigned __int64 fn_822B33B0(double param_1,int param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  int in_r0;
  unsigned __int64 uVar5;
  double dVar6;
  double dVar7;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float afStack_10 [2];
  float fStack_8;
  
  dVar6 = (double)*(float *)(param_2 + 0x30);
  dVar7 = (double)*(float *)(param_2 + 0x10);
  puVar1 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar4 = dVar7;
  if (dVar7 <= dVar6) {
    dVar4 = dVar6;
    dVar6 = dVar7;
  }
  if ((afStack_10[0] < (float)(dVar6 - param_1)) ||
     (bVar2 = true, (float)(dVar4 + param_1) <= afStack_10[0])) {
    bVar2 = false;
  }
  dVar6 = (double)*(float *)(param_2 + 0x38);
  dVar7 = (double)*(float *)(param_2 + 0x18);
  puVar1 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar4 = dVar7;
  if (dVar7 <= dVar6) {
    dVar4 = dVar6;
    dVar6 = dVar7;
  }
  if ((fStack_8 < (float)(dVar6 - param_1)) || (bVar3 = true, (float)(dVar4 + param_1) <= fStack_8))
  {
    bVar3 = false;
  }
  if ((!bVar2) || (uVar5 = 1, !bVar3)) {
    uVar5 = 0;
  }
  return uVar5;
}

