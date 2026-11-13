#define true 1
extern int fn_82A1E650();
extern int fn_82FF4618();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_82FF4768(int param_1,int param_2)

{
  struct { int first; unsigned int second; } stack_pair_30;

  int *piStack_28;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  fn_82FF4618(&stack_pair_30.first,param_1 + 4);
joined_r0x82ff479c:
  if (piStack_28 == (int *)0x0) {
    RtlLeaveCriticalSection(param_1 + 0x88);
    fn_82A1E650(*(unsigned int *)(param_1 + 0xa4),0xffffffffffffffff);
    return;
  }
  do {
    do {
      if (piStack_28[0xd] == param_2) {
        piStack_28[0xc] = 0;
        *(unsigned short *)((int)piStack_28 + 0x3a) = 0;
      }
      piStack_28 = (int *)*piStack_28;
    } while (piStack_28 != (int *)0x0);
    do {
      stack_pair_30.second = stack_pair_30.second + 1;
      if (0x1e < stack_pair_30.second) goto joined_r0x82ff479c;
      piStack_28 = *(int **)(stack_pair_30.second * 4 + stack_pair_30.first);
    } while (piStack_28 == (int *)0x0);
  } while( true );
}

