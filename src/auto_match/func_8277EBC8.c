extern int fn_8277E590();
extern int fn_8277E600();
extern int fn_8277E770();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_8277EBC8(int param_1,int *param_2,int param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int aiStack_60;
  unsigned __int64 uStack_58;
  struct { unsigned int first; int second; } stack_pair_50;

  int iStack_48;
  int iStack_44;

  if (1 < (unsigned int)param_2[1]) {
    stack_pair_50.first = *(unsigned int *)(param_1 + 0x30);
    piVar2 = (int *)(param_1 + 0x30);
    uVar1 = 0;
    if (param_2[1] != 0) {
      do {
        aiStack_60 = *piVar2;
        uStack_58 = *(unsigned __int64 *)
                     (*(int *)((uVar1 + param_2[2] >> 6 & 0x3fffffc) + *(int *)(*param_2 + 0x14)) +
                     ((uVar1 + param_2[2]) * 8 & 0x7f8));
        fn_8277E770(param_1 + 0x7c,&aiStack_60);
        fn_8277E590(piVar2,&uStack_58);
        if ((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) < *(float *)(param_1 + 0xe0)) {
          *(float *)(param_1 + 0xe0) = (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF);
        }
        if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) < *(float *)(param_1 + 0xe4)) {
          *(float *)(param_1 + 0xe4) = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
        }
        if (*(float *)(param_1 + 0xe8) < (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF)) {
          *(float *)(param_1 + 0xe8) = (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF);
        }
        if (*(float *)(param_1 + 0xec) < (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF)) {
          *(float *)(param_1 + 0xec) = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (unsigned int)param_2[1]);
    }
    stack_pair_50.second = *piVar2 + -1;
    iStack_48 = param_2[3] + param_3;
    iStack_44 = param_2[4] + param_3;
    fn_8277E600(param_1 + 0x40,&stack_pair_50.first);
  }
  return;
}
