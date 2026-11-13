extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_8268B190();
extern int fn_8278D038();
extern unsigned int iStack_4c;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_50;


void fn_827A5970(unsigned __int64 param_1,int *param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  struct { unsigned int first; int second; } stack_pair_50;

  
  uVar5 = param_3[1];
  fn_8268AFB0(&stack_pair_50.first,lbl_831E7E64);
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      if (stack_pair_50.second != 0) {
        fn_8268B120(&stack_pair_50.first,0x2c);
      }
      uVar7 = uVar6;
      if (*(int *)(uVar6 * 0xc + *param_3) == 2) {
        uVar7 = uVar6 + 1;
        if (uVar5 < uVar6 + 2) goto LAB_827a5aa4;
      }
      iVar4 = uVar7 * 0xc;
      piVar3 = (int *)(*param_3 + iVar4);
      iVar8 = *piVar3;
      if ((iVar8 != 0) && ((iVar8 != 1 || ((unsigned int)piVar3[2] < 3)))) goto LAB_827a5aa4;
      uVar1 = (unsigned __int64)(unsigned int)piVar3[1];
      uVar2 = (unsigned __int64)(unsigned int)piVar3[2];
      if (iVar8 == 1) {
        uVar1 = uVar1 + 2;
        uVar2 = uVar2 - 2;
      }
      fn_8268B190(&stack_pair_50.first,uVar1,uVar2);
      do {
        if (uVar5 <= uVar7) goto LAB_827a5a54;
        uVar7 = uVar7 + 1;
        piVar3 = (int *)(iVar4 + *param_3);
        iVar4 = iVar4 + 0xc;
      } while (*piVar3 != 5);
      uVar6 = uVar7;
    } while (uVar7 < uVar5);
  }
LAB_827a5a54:
  uVar5 = 0;
  if (param_2[1] != 0) {
    iVar8 = 0;
    do {
      uVar1 = (unsigned __int64)stack_pair_50.first;
      if ((unsigned __int64)stack_pair_50.first == 0) {
        uVar1 = 0xffffffff82196582;
      }
      fn_8278D038(*(unsigned int *)(iVar8 + *param_2),uVar1,0xffffffffffffffff);
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar5 < (unsigned int)param_2[1]);
  }
LAB_827a5aa4:
  fn_8268AFD8(&stack_pair_50.first);
  return;
}

