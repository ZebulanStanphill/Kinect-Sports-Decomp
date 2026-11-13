extern unsigned int *auStack_50;
extern int fn_828D5330();
extern int fn_828D7598();
extern unsigned int iStack_20;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int * fn_828D7660(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_50 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  int iStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  int iStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  int iStack_20;

  fn_828D5330(param_1,auStack_50);
  stack_pair_38.first = *param_2;
  stack_pair_38.second = 0;
  stack_pair_28.second = 0;
  stack_pair_48.first = 0;
  stack_pair_48.second = 0;
  iStack_40 = param_1[3];
  iStack_20 = param_2[3];
  iStack_30 = param_2[4] + iStack_20;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_1, puVar1 != (unsigned int *)0x0)) {
    stack_pair_48.first = *puVar1;
  }
  stack_pair_28.first = stack_pair_38.first;
  fn_828D7598(param_1,&stack_pair_48.first,&stack_pair_28.first,&stack_pair_38.first);
  return param_1;
}
