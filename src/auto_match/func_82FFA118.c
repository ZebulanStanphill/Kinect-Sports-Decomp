#define true 1
extern int fn_82FA5190();
extern int fn_82FF38E8();
extern int fn_82FF4618();
extern unsigned int iStack_40;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_3c;


void fn_82FFA118(int param_1)

{
  int *piVar1;
  struct { int first; unsigned int second; } stack_pair_40;

  int *piStack_38;
  
  piVar1 = (int *)(param_1 + 0x41c);
  if (*(int *)(param_1 + 0x41c) != -1) {
    fn_82FF4618(&stack_pair_40.first,piVar1);
joined_r0x82ffa148:
    if (piStack_38 != (int *)0x0) {
      do {
        do {
          fn_82FA5190(lbl_831BC768,piStack_38[2]);
          piStack_38 = (int *)*piStack_38;
        } while (piStack_38 != (int *)0x0);
        do {
          stack_pair_40.second = stack_pair_40.second + 1;
          if (0x1e < stack_pair_40.second) goto joined_r0x82ffa148;
          piStack_38 = *(int **)(stack_pair_40.second * 4 + stack_pair_40.first);
        } while (piStack_38 == (int *)0x0);
      } while( true );
    }
  }
  if (*piVar1 != -1) {
    fn_82FF38E8(piVar1);
    *piVar1 = -1;
  }
  return;
}

