extern int fn_829BCB40();
extern int fn_829BD4C0();
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_829BDA18(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned short *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  int iVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  int iStack_48;
  unsigned int uStack_44;
  int iStack_40;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1a0);
  iVar2 = *(int *)(param_1 + 0x1c0);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar2 + 0x28) != 0)) ||
     (iVar5 = fn_829BD4C0(), iVar5 != 0)) {
    iVar7 = 0;
    stack_pair_50.first = **(unsigned int **)(param_1 + 0x18);
    stack_pair_50.second = (*(unsigned int **)(param_1 + 0x18))[1];
    iVar5 = *(int *)(iVar2 + 0xc);
    uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x10);
    iStack_40 = param_1;
    if (0 < *(int *)(param_1 + 0x168)) {
      do {
        puVar3 = (unsigned short *)*param_2;
        if ((int)uVar6 < 1) {
          iVar5 = fn_829BCB40(&stack_pair_50.first,iVar5,uVar6,1);
          if (iVar5 == 0) goto LAB_829bda60;
          uVar6 = (unsigned __int64)uStack_44;
          iVar5 = iStack_48;
        }
        uVar6 = uVar6 - 1;
        if ((iVar5 >> ((unsigned int)uVar6 & 0x3f) & 1U) != 0) {
          *puVar3 = *puVar3 | (unsigned short)(1 << (uVar1 & 0x3f));
        }
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x168));
    }
    uVar4 = 1;
    **(unsigned int **)(param_1 + 0x18) = stack_pair_50.first;
    *(unsigned int *)(*(int *)(param_1 + 0x18) + 4) = stack_pair_50.second;
    *(int *)(iVar2 + 0xc) = iVar5;
    *(int *)(iVar2 + 0x10) = (int)uVar6;
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  else {
LAB_829bda60:
    uVar4 = 0;
  }
  return uVar4;
}

