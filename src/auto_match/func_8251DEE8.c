extern int fn_82D92950();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8251DEE8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  piVar4 = (int *)param_1[0x24];
  if ((int *)param_1[0x25] != piVar4) {
    piVar1 = (int *)param_1[0x25];
    stack_pair_30.first = 0x45;
    stack_pair_30.second = 8;
    for (; piVar4 < piVar1; piVar4 = piVar4 + 1) {
      piVar2 = (int *)*piVar4;
      if (piVar2[0xe] == 0) {
        (**(int (***)())(*piVar2 + 0xc))(piVar2,&stack_pair_30.first);
      }
    }
    if (5 < *(unsigned short *)(param_1 + 0x28)) {
      if (*(int *)(*param_1 + 0x234) != 0) {
        iVar3 = *(int *)(*param_1 + 0x1f8);
        if (iVar3 != 0) {
          (**(int (***)())(**(int **)(iVar3 + 0x58) + 0x30))();
          fn_82D92950(iVar3);
        }
      }
    }
  }
  return;
}

