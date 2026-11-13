#define true 1
extern int _blkmov();
extern int fn_83016C90();
extern int fn_8301B2D0();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


unsigned __int64 fn_8301AF50(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  struct { int first; unsigned int second; } stack_pair_50;

  int *piStack_48;
  
  if ((param_3 & 0xffffffff) == 0) {
    fn_83016C90(&stack_pair_50.first,param_1 + 0x24);
    if (piStack_48 != (int *)0x0) {
      do {
        do {
          iVar1 = piStack_48[2];
          piVar3 = *(int **)(iVar1 + 0x34);
          piVar2 = *(int **)(iVar1 + 0x38);
          if (piVar3 != piVar2) {
            do {
              if (*piVar3 == param_2) break;
              piVar3 = piVar3 + 3;
            } while (piVar3 != piVar2);
            if (piVar3 != piVar2) {
              if (piVar3 < piVar2 + -3) {
                _blkmov(piVar3,piVar3 + 3,
                             ((unsigned int)((int)piVar2 + (-0xd - (int)piVar3)) / 0xc + 1) * 0xc);
              }
              *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + -0xc;
            }
          }
          piStack_48 = (int *)*piStack_48;
        } while (piStack_48 != (int *)0x0);
        do {
          stack_pair_50.second = stack_pair_50.second + 1;
          if (0xc0 < stack_pair_50.second) {
            if (piStack_48 == (int *)0x0) {
              return 1;
            }
            break;
          }
          piStack_48 = *(int **)(stack_pair_50.second * 4 + stack_pair_50.first);
        } while (piStack_48 == (int *)0x0);
      } while( true );
    }
  }
  else {
    fn_8301B2D0(param_3 + 0x34);
  }
  return 1;
}

