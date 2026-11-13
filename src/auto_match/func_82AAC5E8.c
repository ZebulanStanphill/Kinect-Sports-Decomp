extern int fn_82AAC0E0();
extern int fn_82AAC198();
extern int fn_82AAC290();
extern int fn_82AAC328();
extern int fn_82AAC3E8();
extern int fn_82AAC488();
extern int fn_82AAC550();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


unsigned __int64 fn_82AAC5E8(int *param_1,int *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  short *psVar5;
  short *psVar6;
  struct { int first; int second; } stack_pair_20;

  int iStack_18;
  int iStack_14;
  
  sVar1 = *(short *)(param_1 + 4);
  sVar2 = *(short *)(param_1 + 5);
  uVar4 = (unsigned __int64)(unsigned int)param_1[2];
  if ((param_3 < 0) || (param_1[3] <= param_3)) {
    uVar3 = 0xffffffffffffffd9;
  }
  else {
    if (sVar1 == 1) {
      stack_pair_20.first = *param_2;
      if (sVar2 < 9) {
        fn_82AAC0E0(&stack_pair_20.first);
      }
      else if (0 < param_1[2]) {
        psVar6 = (short *)(stack_pair_20.first + -2);
        psVar5 = (short *)(param_1[1] * param_3 + *param_1 + -2);
        do {
          psVar6 = psVar6 + 1;
          psVar5 = psVar5 + 1;
          *psVar5 = *psVar6 + -0x8000;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else if (sVar1 == 2) {
      stack_pair_20.first = param_2[1];
      stack_pair_20.second = *param_2;
      if (sVar2 < 9) {
        fn_82AAC198();
      }
      else {
        fn_82AAC290();
      }
    }
    else if (sVar1 == 3) {
      stack_pair_20.first = param_2[2];
      stack_pair_20.second = param_2[1];
      iStack_18 = *param_2;
      if (sVar2 < 9) {
        fn_82AAC328();
      }
      else {
        fn_82AAC3E8();
      }
    }
    else {
      stack_pair_20.first = param_2[3];
      stack_pair_20.second = param_2[2];
      iStack_18 = param_2[1];
      iStack_14 = *param_2;
      if (sVar2 < 9) {
        fn_82AAC488();
      }
      else {
        fn_82AAC550(&stack_pair_20.first);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

