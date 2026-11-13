extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_8259AD18(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  struct { unsigned int first; unsigned int second; } stack_pair_68;


  if (*(int *)(param_1 + 0x94) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    piVar6 = *(int **)(param_1 + 0x78);
    iVar5 = 0;
    uVar4 = 0;
    if (piVar6 != *(int **)(param_1 + 0x7c)) {
      piVar7 = piVar6 + 2;
      do {
        stack_pair_70.first = 0;
        stack_pair_70.second = 0;
        fn_82517978(&stack_pair_70.first,piVar7[-1],*piVar7,0);
        uVar3 = (**(int (***)())(*(int *)*piVar6 + 8))
                          ((int *)*piVar6,*(unsigned int *)(param_1 + 0x74),&stack_pair_70.first);
        if (uVar3 == 0) {
          stack_pair_68.first = 0;
          stack_pair_68.second = 0;
          fn_82517978(&stack_pair_68.first,piVar7[-1],*piVar7,0);
          (*(int (**)())piVar7[2])(&stack_pair_68.first,piVar7[1],*(unsigned int *)(param_1 + 0x70),param_1);
        }
        if (((uVar3 & 0xffffffff) == 0x3e5) || ((uVar3 & 0xffffffff) == 0x3e4)) {
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 5;
          piVar7 = piVar7 + 5;
        }
        else {
          if ((uVar4 & 0xffffffff) == 0) {
            uVar4 = uVar3;
          }
          puVar1 = (unsigned int *)*piVar6;
          if (puVar1 != (unsigned int *)0x0) {
            (**(int (***)())*puVar1)(puVar1,1);
          }
          piVar9 = *(int **)(param_1 + 0x7c);
          piVar8 = piVar7 + 3;
          if (piVar8 != piVar9) {
            piVar10 = piVar7 + 1;
            do {
              piVar10[-3] = *piVar8;
              fn_82517A50(piVar10 + -2,piVar10 + 3);
              piVar8 = piVar8 + 5;
              *piVar10 = piVar10[5];
              piVar10[1] = piVar10[6];
              piVar10 = piVar10 + 5;
            } while (piVar8 != piVar9);
          }
          iVar2 = *(int *)(param_1 + 0x7c);
          iVar11 = iVar2 + -0x14;
          if (iVar2 + -0x14 != iVar2) {
            piVar9 = (int *)(iVar2 + -0xc);
            do {
              if (*piVar9 != 0) {
                fn_822315A0();
              }
              iVar11 = iVar11 + 0x14;
              piVar9 = piVar9 + 5;
            } while (iVar11 != iVar2);
          }
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -0x14;
        }
      } while (piVar6 != *(int **)(param_1 + 0x7c));
      if (0 < iVar5) {
        return 0x3e5;
      }
    }
    if (*(unsigned int *)(param_1 + 0x88) <= *(unsigned int *)(param_1 + 0x8c)) {
      return uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0x8c)) {
    return (unsigned __int64)*(unsigned int *)(param_1 + 0x90);
  }
  return 0x3e5;
}
