extern unsigned int fStack_30;
extern int fn_822315A0();
extern int fn_824556F0();
extern int fn_82458458();
extern int fn_82458910();
extern int fn_8254EDB0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82455578(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  int aiStack_40 [2];
  struct { int first; int second; } stack_pair_38;

  float fStack_30;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      fn_82458910(&stack_pair_38.first,*(unsigned int *)(param_1 + 0x84),*(unsigned int *)(param_2 + 0x2c));
      dVar9 = (double)*(float *)(param_1 + 0x74);
      if (*(int *)(stack_pair_38.first + 8) != *(int *)(stack_pair_38.first + 0xc)) {
        piVar5 = &stack_pair_38.second;
        piVar6 = (int *)(*(int *)(stack_pair_38.first + 0xc) + -0x18);
        lVar7 = 5;
        do {
          piVar6 = piVar6 + 1;
          piVar5 = piVar5 + 1;
          *piVar5 = *piVar6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        dVar8 = (double)(*(float *)(stack_pair_38.first + 4) - fStack_30);
        if (dVar8 < dVar9) {
          dVar9 = dVar8;
        }
      }
      fn_82458458(dVar9,aiStack_40,stack_pair_38.first);
      if (*(unsigned int *)(param_1 + 0x70) < (unsigned int)((*(int *)(stack_pair_38.first + 0x1c) - aiStack_40[0]) / 0x14)) {
        fn_824556F0(param_1,param_1 + 0x18);
        if (*(int *)(*(int *)(param_1 + 0x7c) + 0x100) <= *(int *)(param_1 + 0x50)) {
          fn_8254EDB0((double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100));
          iVar4 = *(int *)(param_1 + 0x7c);
          uVar1 = *(unsigned int *)(param_1 + 0x6c);
          uVar2 = *(unsigned int *)(param_1 + 0x5c);
          uVar3 = *(unsigned int *)(param_1 + 0x58);
          if (*(int *)(iVar4 + 4) != 0) {
            *(unsigned int *)(iVar4 + 0x1cc) = *(unsigned int *)(param_1 + 0x54);
            *(unsigned int *)(iVar4 + 0x1dc) = uVar1;
            *(unsigned int *)(iVar4 + 0x1d4) = 1;
            *(unsigned int *)(iVar4 + 0x1d0) = uVar3;
            *(unsigned int *)(iVar4 + 0x1d8) = uVar2;
            *(unsigned int *)(iVar4 + 0x1e0) = lbl_821CA460;
          }
        }
        *(unsigned int *)(param_1 + 0x88) = 1;
        *(unsigned int *)(param_1 + 0x8c) = ltcg_pool_0_0f;
      }
      if (stack_pair_38.second != 0) {
        fn_822315A0();
      }
    }
  }
  else {
    fn_824556F0(param_1,param_1 + 0x14);
  }
  return;
}

