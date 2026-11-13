typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_822B6A58();
extern int fn_824D6A88();
extern int fn_824D6E28();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D4264;
extern unsigned int stack0x00000020;


double fn_824D6C28(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  float fVar1;
  unsigned int *puVar2;
  bool bVar3;
  int in_r0;
  int iVar4;
  bool bVar5;
  double dVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float in_stack_00000020;
  float in_stack_00000024;
  struct { float first; float second; } stack_pair_70;

  
  iVar4 = *(int *)(param_1 + 0x144);
  puVar2 = (unsigned int *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x148) != 0)) {
    if (param_2 == 0) {
      bVar5 = true;
LAB_824d6d04:
      bVar3 = true;
    }
    else {
      fn_824D6A88(&stack_pair_70.first,param_1,2,1,1);
      dVar6 = (double)in_stack_00000020;
      bVar5 = ABS((float)((double)stack_pair_70.first - dVar6)) < lbl_831D4264;
      fn_824D6A88(&stack_pair_70.first,param_1,2,0,1);
      if (ABS((float)((double)stack_pair_70.first - dVar6)) < lbl_831D4264) goto LAB_824d6d04;
      bVar3 = false;
    }
    iVar4 = fn_824D6E28(param_1);
    dVar6 = (double)in_stack_00000024;
    if (iVar4 != 0) {
      if ((bVar5) && (*(int *)(*(int *)(param_1 + 0x144) + 0x68) != 0)) {
        *param_3 = 1;
        fVar1 = lbl_821CA460;
        goto LAB_824d6e10;
      }
      if ((bVar3) && (fVar1 = lbl_821CA460, *(int *)(*(int *)(param_1 + 0x148) + 0x68) != 0)) {
LAB_824d6d70:
        *param_3 = 0;
        *param_4 = 1;
        return (double)fVar1;
      }
      fn_822B6A58(&stack_pair_70.first,*(unsigned int *)(param_1 + 0x164),3);
      if (dVar6 < (double)stack_pair_70.second) {
        if ((bVar5) && (*(int *)(*(int *)(param_1 + 0x144) + 0x6c) != 0)) {
          *param_3 = 1;
          fVar1 = ltcg_pool_0_0f;
          goto LAB_824d6e10;
        }
        if ((bVar3) && (fVar1 = ltcg_pool_0_0f, *(int *)(*(int *)(param_1 + 0x148) + 0x6c) != 0))
        goto LAB_824d6d70;
      }
    }
    fn_822B6A58(&stack_pair_70.first,*(unsigned int *)(param_1 + 0x164),2);
    if (dVar6 < (double)stack_pair_70.second) {
      return (double)ltcg_pool_0_0f;
    }
  }
  *param_3 = 0;
  fVar1 = ltcg_pool_0_0f;
LAB_824d6e10:
  *param_4 = 0;
  return (double)fVar1;
}

